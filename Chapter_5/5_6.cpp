/**
 * Created by Hjh on 2022-01-21 15:35
 * 使用友元函数计算任意两点间的距离
 */
#include<iostream>
#include<cmath>
using namespace std;

class Point{
public:
    Point(int x=0, int y=0):x(x),y(y){}
    int getX(){return x;}
    int getY(){return y;}
    friend float dist(Point &p1, Point &p2);  //友元函数声明
private:
    int x,y;
};

float dist(Point &p1, Point &p2){
    double x = p1.x - p2.x;
    double y = p1.y - p2.y;
    return static_cast<float>(sqrt(x*x + y*y));
}

int main(){
    Point myp1(6,6), myp2(7,7);
    cout<<"The distance is:"<<dist(myp1, myp2);
    return 0;
}