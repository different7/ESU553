/**
 * Created by Hjh on 2022-01-21 18:27
 * 常成员函数举例
 */
#include <iostream>
using namespace std;

class R{
public:
    R(int r1, int r2):r1(r1),r2(r2){}
    void print();        //普通成员函数
    void print() const;  //常成员函数
private:
    int r1, r2;
};

void R::print() const{
    cout<<r1<<","<<r2<<endl;
}

int main(){
    R a(5,4);
    a.print();  //调用void print()
    const R b(20,52);  //声明常对象
    b.print();  //调用void print() const
    return 0;
}