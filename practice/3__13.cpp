/**
 * Created by Hjh on 2022-01-10 11:49
 * 用递归的方法编写函数求 Fibonacci级数，公式为Fn=Fn-1+Fn-2(n > 2)， F1=F2=1
 */
#include <iostream>
using namespace std;

int Fibonacci(int n){
    if (n==1||n==2)
        return 1;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
    int n;
    cout << "Please enter a positive integer:";
    cin >> n;
    cout << "Fibonacci(" << n << ")=" << Fibonacci(n);
    return 0;
}
