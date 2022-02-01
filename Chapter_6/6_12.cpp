/**
 * Created by Hjh on 2022-02-01 16:46
 * 使用指针来访问Point类的成员
 */
#include<iostream>
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
    Point *p1 = &a;          //定义对象指针，用a的地址将其初始化
    cout<<p1->getX()<<endl;  //利用指针访问对象成员
    cout<<a.getX()<<endl;    //利用对象名访问对象成员
    return 0;
}