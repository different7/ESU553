/**
 * Created by Hjh on 2022-01-25 15:44
 * 数组的声明与使用
 */
#include <iostream>
using namespace std;

int main(){
    int a[10], b[10];
    for(int i = 0; i < 10; i++){
        a[i] = 2 * i - 1;
        b[9-i] = a[i];
    }
    for (int i = 0; i < 10; i++) {
        cout<<"a["<<i<<"]="<<a[i]<<" ";
        cout<<"b["<<i<<"]="<<b[i]<<endl;
    }
    return 0;
}