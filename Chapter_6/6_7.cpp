/**
 * Created by Hjh on 2022-01-29 16:13
 * 设有一个int型数组 a，有10个元素。用3种方法输出各元素。
 */
#include<iostream>
using namespace std;

int main(){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};

    //法一：使用数组名和下标
    for(int i = 0; i < 10; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    //法二：使用数组名和指针运算
    for(int i = 0; i < 10; i++)
        cout<<*(a+i)<<" ";
    cout<<endl;

    //法三：使用指针变量
    for(int *p = a; p < (a+10); p++)
        cout<<*p<<" ";
    cout<<endl;

    return 0;
}