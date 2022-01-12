/**
 * Created by Hjh on 2022-01-09 17:12
 * 编写函数判别一个数是否是质数，在主程序中实现输入输出。
 */
#include <iostream>
#include<math.h>
using namespace std;

int prime(int i){ //判断一个数是否是质数的函数
    int j, k;
    int flag = 1;
    k = sqrt(i);
    for(j = 2; j <= k; j++){
        if(i%j==0){
            flag = 0;
            break;
        }
    }
    if(flag)
        return 1;
    else
        return 0;
}

int main(){
    int i;
    cout << "Please enter an integer:";
    cin >> i;
    if(prime(i))
        cout << i << " is a prime number.";
    else
        cout << i << " is not a prime number.";
    return 0;
}
