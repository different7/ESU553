/**
 * Created by Hjh on 2022-01-15 17:23
 * 定义一个DataType（数据类型）类，能处理包含字符型、整型、浮点型3种类型的数据，给出其构造函数。
 */
#include<iostream>
using namespace std;

class DataType{
enum{character, integer, floating_point}vartype;
union{char c; int i; float f;};
public:
    DataType(char ch){
        vartype = character;
        c = ch;
    }
    DataType(int ii){
        vartype = integer;
        i = ii;
    }
    DataType(float ff){
        vartype = floating_point;
        f = ff;
    }
    void print();
};

void DataType::print(){
    switch (vartype){
        case character:
            cout<<"Character:"<<c<<endl;
            break;
        case integer:
            cout<<"Integer:"<<i<<endl;
            break;
        case floating_point:
            cout<<"Float:"<<f<<endl;
            break;
    }
}

int main(){
    DataType A('c'), B(12), C(1.44F);
    A.print();
    B.print();
    C.print();
    return 0;
}