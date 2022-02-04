/**
 * Created by Hjh on 2022-02-04 18:00
 * 通过指针访问类的静态函数成员
 */
#include<iostream>
using namespace std;

class Point{
private:
    int x,y;
    static int count;
public:
    Point(int x = 0, int y = 0):x(x),y(y){
        count++;
    }
    Point(const Point &p):x(p.x),y(p.y){
        count++;
    }
    ~Point(){
        count--;
    }
    int getX() const{return x;}
    int getY() const{return y;}

    static void showCount(){
        cout<<"Object count = "<<count<<endl;
    }
};

int Point::count = 0;

int main(){
    void (*funcPtr)() = Point::showCount;  //定义一个指向函数的指针，指向类的静态函数成员
    Point a(6,7);
    cout<<"Point a:"<<a.getX()<<","<<a.getY()<<endl;
    funcPtr();  //通过指针访问静态函数成员，输出对象个数
    Point b(a);
    cout<<"Point b:"<<b.getX()<<","<<b.getY()<<endl;
    funcPtr();  //通过指针访问静态函数成员，输出对象个数

    return 0;
}