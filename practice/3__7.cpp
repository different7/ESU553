/**
 * Created by Hjh on 2022-01-09 16:04
 * 编写函数，参数为两个unsigned short int型数，返回值为第一个参数除以第二个参数的结果，
 * 数据类型为short int；如果第二个参数为0，则返回值为-1。在主程序中实现输入输出。
 */

#include<iostream>
using namespace std;

short int Divider(unsigned short int a, unsigned short int b){
    if (b==0)
        return -1;
    else
        return a/b;
}

typedef unsigned short int USHORT;

int main(){
    USHORT one, two;
    short int answer;
    cout << "Enter two numbers.\nNumber one:";
    cin >> one;
    cout << "Number two:";
    cin >> two;
    answer = Divider(one,two);
    if(answer > -1)
        cout << "Answer:" << answer;
    else
        cout << "Error, can't divide by zero.";
    return 0;
}