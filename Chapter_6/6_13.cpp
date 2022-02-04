/**
 * Created by Hjh on 2022-02-04 17:24
 * 访问对象的公有成员函数的不同方式
 */
#include <iostream>
using namespace std;

class Point{
public:
    Point(int x = 0, int y = 0):x(x),y(y){}
    int getX() const {return x;}
    int getY() const {return y;}
private:
    int x,y;
};

int main(){
    Point a(6,7);
    Point *p1 = &a;                               //定义“对象指针”并初始化
    int(Point::*funcPtr)() const = &Point::getX;  //定义“成员函数指针”并初始化

    cout<<(a.*funcPtr)()<<endl;    //使用对象名和成员函数指针访问成员函数
    cout<<(p1->*funcPtr)()<<endl;  //使用对象指针和成员函数指针访问成员函数
    cout<<a.getX()<<endl;          //使用对象名访问成员函数
    cout<<p1->getX()<<endl;        //使用对象指针访问成员函数

    return 0;
}