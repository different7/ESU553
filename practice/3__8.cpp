/**
 * Created by Hjh on 2022-01-09 17:01
 * 编写函数把华氏温度转换为摄氏温度，在主程序中提示用户输入一个华氏温度，转化后输出相应的摄氏温度。
 */
#include<iostream>
using namespace std;

double transform(double x){
    return (x-32)*5/9;
}

int main(){
    double F;
    cout << "Please enter a Fahrenheit temperature:";
    cin >> F;
    cout << "Corresponding Centigrade temperature is:" << transform(F);
}