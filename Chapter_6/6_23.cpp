/**
 * Created by Hjh on 2022-02-06 16:11
 * String类应用举例
 */
#include<string>
#include<iostream>
using namespace std;

//根据value的值输出true或者false，title为提示文字
inline void test(const char *title, bool value){
    cout<<title<<" returns "<<(value?"true":"false")<<endl;
}

int main(){
    string s1 = "DEF";
    cout<<"s1 is "<<s1<<endl;

    string s2;
    cout<<"Please enter s2:";
    cin>>s2;
    cout<<"Length of s2:"<<s2.length()<<endl;

    //测试比较运算符
    test("s1 <= \"ABC\"", s1 <= "ABC");
    test("\"DEF\" <= s1","DEF" <= s1);

    //测试连接运算符8
    s2 += s1;
    cout<<"s2 = s2 + s1:"<<s2<<endl;
    cout<<"length of s2:"<<s2.length()<<endl;
    return 0;
}