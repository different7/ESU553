/**
 * Created by Hjh on 2022-02-06 17:12
 * 用getline输入字符串
 */
#include<iostream>
#include<string>
using namespace std;

int main(){
    for (int i = 0; i < 2; i++){
        string city,state;
        getline(cin,city,',');
        getline(cin,state);
        cout<<"City:"<<city<<", State:"<<state<<endl;
    }
    return 0;
}