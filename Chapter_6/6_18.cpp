/**
 * Created by Hjh on 2022-02-05 16:02
 * 动态数组类
 */
#include<iostream>
#include<cassert>
using namespace std;

class Point{
private:
    int x,y;
public:
    Point():x(0),y(0){
        cout<<"Default constructor called."<<endl;
    }
    Point(int x, int y):x(x),y(y){
        cout<<"Constructor called."<<endl;
    }
    ~Point(){
        cout<<"Destructor called."<<endl;
    }
    int getX() const{return x;}
    int getY() const{return y;}
    void move(int newX, int newY){
        x = newX;
        y = newY;
    }
};

class ArrayOfPoints{
private:
    Point *points;
    int size;
public:
    ArrayOfPoints(int size):size(size){
        points = new Point[size];
    }
    ~ArrayOfPoints(){
        cout<<"Deleting..."<<endl;
        delete[] points;
    }
    //获得下标为index的数组元素
    Point &element(int index){
        assert(index >= 0 && index < size);  //如果数组下标越界，程序中止
        return points[index];
    }
};

int main(){
    int count;
    cout<<"Please enter the count of points:"<<endl;
    cin>>count;
    ArrayOfPoints points(count);
    points.element(0).move(1,2);
    points.element(1).move(3,4);
    return 0;
}