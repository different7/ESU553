/**
 * Created by Hjh on 2022-01-21 18:47
 * 常数据成员举例
 */
#include <iostream>
using namespace std;

class A{
public:
    A(int i);
    void print();
private:
    const int a;  //常数据成员
    static const int b;  //静态常数据成员
};

const int A::b = 10;  //静态常数据成员在类外说明和初始化

A::A(int i):a(i){}    //常数据成员只能通过初始化列表进行初始化

void A::print(){
    cout<<a<<":"<<b<<endl;
}

int main(){
    A a(100),b(10);
    a.print();
    b.print();
    return 0;
}