/**
 * Created by Hjh on 2022-01-18 10:21
 * 具有静态和动态生存期对象的时钟程序。
 */
#include<iostream>
using namespace std;

class Clock{
public:
    Clock();
    void setTime(int newH, int newM, int newS);  //三个形参都具有函数原型作用域
    void showTime();
private:
    int hour, minute, second;
};

Clock::Clock():hour(0),minute(0),second(0){}  //构造函数

void Clock::setTime(int newH, int newM, int newS) {  //3个形参都具有局部作用域
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime() {
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

Clock globClock;  //声明对象globClock,具有静态生存期，命名空间作用域
int main(){
    cout<<"First time output:"<<endl;
    globClock.showTime();  //成员函数具有类作用域
    globClock.setTime(10,40,00);

    Clock myClock(globClock);  //对象myClock具有块作用域，调用复制构造函数，以globClock为初始值
    cout<<"Second time output:"<<endl;
    myClock.showTime();
    return 0;
}