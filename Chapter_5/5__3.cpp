/**
 * Created by Hjh on 2022-01-23 16:57
 * 习题5-3，主要是关于作用域的问题
 */
#include<iostream>
using namespace std;

void myFunction();

int x = 5, y = 7;

int main(){
    cout<<"x from main:"<<x<<"\n";   //x=5
    cout<<"y from main:"<<y<<"\n\n"; //x=7
    myFunction();                    //x=5, y=10(x=5可见，y=7不可见)
    cout<<"Back from myFunction!\n\n";
    cout<<"x from main:"<<x<<"\n";   //x=5
    cout<<"y from main:"<<y<<"\n";   //y=7
    return 0;
}

void myFunction(){
    int y = 10;
    cout << "x from myFunction: " << x << "\n";
    cout << "y from myFunction: " << y << "\n\n";
}