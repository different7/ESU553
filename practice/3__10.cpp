/**
 * Created by Hjh on 2022-01-10 10:02
 * 编写函数求两个整数的最大公约数和最小公倍数。
 */
#include<iostream>
#include<math.h>
using namespace std;

int fun(int i, int j){ //求最大公约数的函数
    int temp;
    if(i<j){
        temp = i;
        i = j;
        j = i;
    }
    while(j!=0){
        temp = i % j;
        i = j;
        j = temp;
    }
    return i;
}

int main(){
    int i, j, x, y;
    cout<<"Please enter an integer:";
    cin>>i;
    cout<<"Please enter another integer:";
    cin>>j;

    x = fun(i,j);
    y = i * j / x; //计算最小公倍数
    cout<<"The greatest common divisor of "<<i<<" and "<<j<<" is "<<x<<endl;
    cout<<"The least common multiple of "<<i<<" and "<<j<<" is "<<y<<endl;
}