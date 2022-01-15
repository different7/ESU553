/**
 * Created by Hjh on 2022-01-15 17:07
 * 定义并实现一个矩形类，有长、宽两个属性，由成员函数计算矩形的面积。
 */
#include<iostream>
using namespace std;

class Rectangle{
public:
    Rectangle(float len, float width){
        Length = len;
        Width = width;
    }
    ~Rectangle(){};
    float GetArea() {return Length * Width;}
    float GetLength() {return Length;}
    float GetWidth() {return Width;}
private:
    float Length;
    float Width;
};

int main(){
    float length, width;
    cout << "Please enter the length of rectangle:";
    cin >> length;
    cout << "Please enter the width of rectangle:";
    cin >> width;
    Rectangle r(length,width);
    cout << "The area whose length is " <<length<<" and width is "<<width<<" is "<<r.GetArea();
    return 0;
}