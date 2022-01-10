/**
 * Created by Hjh on 2022-01-10 11:33
 * 编写递归函数 getPower计算x的y次幂，在同一个程序中针对整型和实型实现两个重载的函数
 * int getPower(int x, int y);
 * double getPower(double x, int y);
 */

#include <iostream>
using namespace std;

int getPower(int x, int y){
    if(y==1)
        return x;
    else
        return x * getPower(x,y-1);
}

double getPower(double x, int y){
    if(y==1)
        return x;
    else
        return x * getPower(x,y-1);
}

int main(){
    double number;
    int power;
    cout << "Enter a number:";
    cin >> number;
    cout << "To what power?";
    cin >> power;
    double answer = getPower(number, power);
    cout << number << " to the power "<< power << " is " << answer;
    return 0;
}