/**
 * Created by Hjh on 2022-01-10 10:30
 * 在主程序中提示输入整数n，编写函数用递归的方法求 1+2+…+n的值
 */
#include <iostream>
using namespace std;

int sum(int i)
{
    if(i==1)
        return 1;
    else
        return i + sum(i-1);
}

int main(){
    int n;
    cout<<"Please enter an integer:";
    cin>>n;
    cout<<"1+2+...+n="<<sum(n);
}