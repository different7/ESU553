/**
 * Created by Hjh on 2022-01-28 19:14
 * void类型指针的使用
 */
#include<iostream>
using namespace std;

int main(){
    void *pv; //有void类型的指针，没有void类型的变量
    int i = 5;
    pv = &i;  //void类型指针指向整型变量
    int *pint = static_cast<int *>(pv);  //void类型指针pv转换为int类型指针,void类型指针赋值给int类型指针
    cout<<"*pint = "<<*pint<<endl;
    return 0;
}