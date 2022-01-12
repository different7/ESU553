/**
 * Created by Hjh on 2022-01-08 18:15
 */
#include <iostream>
#include <iomanip>
using namespace std;
//比较值传递与引用传递
void fiddle(int in1, int &in2){ //in1是普通的int型，被调用时传递的是实参v1的值,对参数in1的改变不影响实参
    in1 = in1 + 100;            //in2是引用，被调用时由实参v2初始化后成为v2的一个别名
    in2 = in2 + 100;            //对形参in2的改变实质上就是对主函数中变量v2的改变
    cout<< "The values are ";
    cout<<setw(5)<<in1;
    cout<<setw(5)<<in2<<endl;
}

int main(){
    int v1 = 7, v2 = 12;
    cout<<"The values are ";
    cout<<setw(5)<<v1;
    cout<<setw(5)<<v2<<endl;
    fiddle(v1,v2);
    cout<<setw(5)<<v1;
    cout<<setw(5)<<v2<<endl;
    return 0;
}