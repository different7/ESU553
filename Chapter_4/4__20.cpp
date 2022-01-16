/**
 * Created by Hjh on 2022-01-16 11:28
 *定义一个复数类 Complex，使得下面的代码能够工作。
 * Complex c1(3,5); //用复数3+5i初始化c1
 * Complex c2=4.5;  //用实数4.5初始化c2
 * c1.add(c2);      //将c1与c2相加，结果保存在c1中
 */
#include<iostream>
#include<cmath>
using namespace std;

class Complex{
public:
    Complex(float r, float i=0){
        re = r;
        im = i;
    }
    void add(Complex com){
        re += com.re;
        im += com.im;
    }
    void show(){
        cout<<re<<"+"<<im<<"i"<<endl;
    }
private:
    float re, im;
};

int main(){
    Complex c1(3,5);  //initialize c1 with complex 3+5i
    Complex c2 = 4.5;     //initialize c2 with 4.5
    c1.add(c2);
    c1.show();
    return 0;
}