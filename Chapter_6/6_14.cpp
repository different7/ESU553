/**
 * Created by Hjh on 2022-02-04 17:44
 * 通过指针访问类的静态数据成员
 */
#include <iostream>
using namespace std;

class Point{
private:
    int x,y;
public:
    static int count;
    Point(int x = 0, int y = 0):x(x),y(y){  //构造函数
        count++;
    }
    Point(const Point &p):x(p.x),y(p.y){    //复制构造函数
        count++;
    }
    ~Point(){count--;}
    int getX() const{return x;}
    int getY() const{return y;}
};

int Point::count = 0;

int main(){
    int *ptr = &Point::count;  //定义一个int型指针，指向类的静态成员
    Point a(6,7);
    cout<<"Object count = "<<*ptr<<endl;  //通过普通指针访问静态数据成员

    Point b(a);
    cout<<"Point B:"<<b.getX()<<","<<b.getY()<<endl;
    cout<<"Object count = "<<*ptr<<endl;

    return 0;
}