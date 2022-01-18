/**
 * Created by Hjh on 2022-01-18 12:30
 * 具有静态数据和静态函数成员的Point类。
 */
#include<iostream>
using namespace std;

class Point{
public:
    Point(int x=0, int y=0):x(x),y(y) { //构造函数
        count++;  //在构造函数中对count累加，所有对象共同维护同一个count
    }
    Point(Point &p) {  //复制构造函数
        x = p.x;
        y = p.y;
        count++;
    }
    ~Point() {count--;}
    int getX(){return x;}
    int getY(){return y;}

    static void showCount(){
        cout<<" Object count="<<count<<endl;
    }
private:
    int x, y;
    static int count;  //静态数据成员声明
};

int Point::count = 0;  //静态数据成员定义和初始化，使用类名限定

int main() {
    Point a(4,5);  //创建对象a，count加一
    cout<<"Point A:"<<a.getX()<<","<<a.getY();
    Point::showCount();

    Point b(a);  //创建对象b，count加一
    cout<<"Point B:"<<b.getX()<<","<<b.getY();
    Point::showCount();

    return 0;
}
