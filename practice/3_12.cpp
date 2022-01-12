/**
 * Created by Hjh on 2022-01-08 17:59
 */
#include<iostream>
using namespace std;

//两整数交换
void swap(int &a, int &b){ //引用传递与值传递的区别只是形参写法不同
    int t = a;
    a = b;
    b = t;
}

int main(){
    int x = 5, y = 10;
    cout<<"x="<<x<<"  y="<<y<<endl;
    swap(x,y);
    cout<<"x="<<x<<"  y="<<y<<endl;
    return 0;
}
//使用引用传递可以达到交换的目的