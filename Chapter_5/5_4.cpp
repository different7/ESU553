/**
 * Created by Hjh on 2022-01-18 11:50
 * 具有静态数据成员的Point类
 */
#include<iostream>
using namespace std;

class Point{
public:
    Point(int x=0, int y=0):x(x),y(y){
        count++;  //在构造函数中对count累加，所有对象共同维护一个count
    }
    Point(Point &p){  //复制构造函数
        x = p.x;
        y = p.y;
        count++;
    }
    ~Point(){ count--;}
    int getX(){return x;}
    int getY(){return y;}
    void showCount(){  //输出静态数据成员
        cout<<" Object count = "<<count<<endl;
    }
private:
    int x, y;
    static int count;  //声明静态数据成员
};

int Point::count = 0;  //静态数据成员定义和初始化，使用类名限定

int main(){
    Point a(4,5);
    cout<<"Point A:"<<a.getX()<<","<<a.getY();
    a.showCount();

    Point b(a);  //定义对象b，其构造函数会使count加一
    cout<<"Point B:"<<b.getX()<<","<<b.getY();
    b.showCount();

    return 0;
}