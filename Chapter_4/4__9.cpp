/**
 * Created by Hjh on 2022-01-15 11:33
 * 设计并测试一个名为Rectangle的矩形类，其属性为矩形的左下角与右上角两个点的坐标，根据坐标能计算矩形的面积。
 */
#include<iostream>
using namespace std;

class Rectangle{
public:
    Rectangle(int top, int right, int bottom, int left);
    ~Rectangle(){}

    int GetTop() const {return itsTop;}
    int GetRight() const {return itsRight;}
    int GetBottom() const {return itsBottom;}
    int GetLeft() const {return itsLeft;}

    void SetTop(int top) {itsTop = top;}
    void SetRight(int right) {itsRight = right;}
    void SetBottom(int bottom) {itsBottom = bottom;}
    void SetLeft(int left) {itsLeft = left;}

    int GetArea() const;
private:
    int itsTop;
    int itsRight;
    int itsBottom;
    int itsLeft;
};

Rectangle::Rectangle(int top, int right, int bottom, int left) {
    itsTop = top;
    itsRight = right;
    itsBottom = bottom;
    itsLeft = left;
}

int Rectangle::GetArea() const {
    int width = itsRight - itsLeft;
    int height = itsTop - itsBottom;
    return width * height;
}

int main() {
    Rectangle MyRectangle(8,8,6,6);
    int Area = MyRectangle.GetArea();
    cout<<"Area = "<<Area;
    return 0;
}



