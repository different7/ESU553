/**
 * Created by Hjh on 2022-01-08 16:27
 */
#include <iostream>
using namespace std;

//将两个整数交换次序后输出
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}

int main(){
    int x = 5, y = 10;
    cout << "x=" << x << "   y=" << y << endl;
    swap(x,y);
    cout << "x=" << x << "   y=" << y << endl;
    return 0;
}
//采用的是值传递，没有达到交换的目的，原因是形参值的改变对实参不起作用