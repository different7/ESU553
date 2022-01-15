/**
 * Created by Hjh on 2022-01-15 18:39
 * 定义一个 Circle 类，有数据成员 radius（半径），成员函数 getArea（），计算圆的面积，
 * 构造一个 Circle的对象进行测试。
 */
#include<iostream>
using namespace std;

class Circle{
public:
    Circle(float radius) {Radius = radius;}
    ~Circle(){}
    float GetArea() {return 3.14 * Radius * Radius;}
private:
    float Radius;
};

int main(){
    float radius;
    cout << "Please enter the radius of a circle:";
    cin >> radius;
    Circle c(radius);
    cout << "The area of the circle whose radius is "<<radius<<" is "<<c.GetArea();
    return 0;
}