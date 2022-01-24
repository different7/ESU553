/**
 * Created by Hjh on 2022-01-24 16:13
 * 在一个文件中定义一个全局变量n，主函数main()，
 * 在另一个文件中定义函数fn1()，在main()中对n赋值，再调用fn1()，在fn1()中也对n赋值，显示n最后的值。
 */

#include <iostream>
#include "5__11_fn1.h"
using namespace std;

int n;

int main(){
    n = 68;
    fn1();
    cout<<"n = "<<n;
}
