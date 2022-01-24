/**
 * Created by Hjh on 2022-01-24 16:19
 * 在函数fn1()中定义一个静态变量n，fn1()中对n的值加1，在主函数中，调用fn1()十次，显示n的值。
 */
#include <iostream>
using namespace std;

void fn1(){
    static int n = 0;
    n++;
    cout<<"n = "<<n<<endl;
}

int main(){
    for(int i=0;i<10;i++){
        fn1();
    }
    return 0;
}