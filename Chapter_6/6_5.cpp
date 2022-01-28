/**
 * Created by Hjh on 2022-01-28 18:30
 * 指针的定义、赋值与使用
 */
#include<iostream>
using namespace std;
int main(){
    int i;
    int *ptr = &i;                //取i的地址赋给ptr，*表示这是一个指针变量，&取i的地址
    i = 10;
    cout<<"i = "<<i<<endl;        //直接访问
    cout<<"*ptr = "<<*ptr<<endl;  //*输出int型指针ptr所指向的内容，通过指针间接访问
    cout<<"ptr = "<<&i<<endl;     //输出int型指针变量的值
    return 0;
}