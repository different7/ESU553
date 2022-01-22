/**
 * Created by Hjh on 2022-01-22 16:19
 * 在例5-6的基础上修改，使其中的dist函数的形参以常引用方式传递
 */
#include<iostream>
#include<cmath>
using namespace std;

class Point{
public:
    Point(int x=0, int y=0):x(x),y(y){}
    int getX() {return x;}
    int getY() {return y;}
    friend float dist(const Point &p1, const Point &p2);  //声明dist为类Point的友元函数
private:
    int x, y;
};

float dist(const Point &p1, const Point &p2){  //常引用作形参
    double x = p1.x - p2.x;
    double y = p1.y - p2.y;
    return static_cast<float>(sqrt(x*x+y*y)); //强制类型转换，把表达式结果转换为float类型
}

int main(){
    const Point myp1(6,6), myp2(7,7);
    cout<<"The distance is:"<<dist(myp1,myp2);
    return 0;
}