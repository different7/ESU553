/**
 * Created by Hjh on 2022-01-17 11:26
 * 作用域实例
 */
#include <iostream>
using namespace std;
int i;               //在全局命名空间中的全局变量
namespace Ns{
    int j;
}

int main(){
    i = 5;       //为全局变量i赋值
    Ns::j = 6;   //为全局变量j赋值
    {//子块1
        using namespace Ns;  //在当前块中直接引用Ns的标识符
        int i;               //局部变量，局部作用域
        i = 7;
        cout<<"i = "<<i<<endl;  //输出7
        cout<<"j = "<<j<<endl;  //输出6
    }
    cout<<"i = "<<i<<endl;  //输出5
    return 0;
}