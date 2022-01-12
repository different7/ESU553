/**
 * Created by Hjh on 2022-01-10 11:22
 * 用递归的方法编写函数求 n 阶勒让德多项式的值，在主程序中实现输入输出。
 */
#include<iostream>
using namespace std;

float p(int n, int x){
    if(n==0)
        return 1;
    else if(n==1)
        return x;
    else
        return ((2*n-1)*x*p(n-1,x)-(n-1)*p(n-2,x))/n;
}

int main(){
    int n, x;
    cout<<"Please enter an integer of n:";
    cin>>n;
    cout<<"Please enter an integer of x:";
    cin>>x;
    cout<<"P"<<n<<"("<<x<<")="<<p(n,x)<<endl;
    return 0;
}