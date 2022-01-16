/**
 * Created by Hjh on 2022-01-15 16:22
 * 设计一个用于人事管理的“人员”类。由于考虑到通用性，这里只抽象出所有类型人员都具有的属性：编号、性别、
 * 出生日期、身份证号等。其中“出生日期”声明为一个“日期”类内嵌子对象。用成员函数实现对人员信息的录入和显示。
 * 要求包括：构造函数和析构函数、复制构造函数、内联成员函数、带默认形参值的成员函数、类的组合。
 */
#include<iostream>
#include<string>
using namespace std;

class Date{
private:
    int year, month, day;
public:
    Date(int Y, int M, int D){
        year = Y;
        month = M;
        day = D;
    }
    void set(){
        cin>>year>>month>>day;
    }
    void display(){
        cout<<year<<"/"<<month<<"/"<<day;
    }
};

class Person{
private:
    int num;
    char sex;
    Date birthday;
    char ID[18];
public:
    Person(Date birthday) : birthday(birthday) {}
    Person(int N, int Y, int M, int D, char id[18], char S = 'm'):birthday(Y,M,D){
        num = N;
        sex = S;
        strcpy(ID,id);  //
    }
    Person(Person &p, Date birthday) : birthday(birthday) {
        num = p.num;
        sex = p.sex;
        birthday = p.birthday;
        strcpy(ID,p.ID);
    }
    inline void input(){
        cout<<"Logging data:"<<endl;
        cout<<"Number:"<<endl;
        cin>>num;
        cout<<"Sex(m/f):"<<endl;
        cin>>sex;
        cout<<"Birthday:"<<endl;
        birthday.set();
        cout<<"ID:"<<endl;
        cin>>ID;
        ID[18] = '\0';  //
        cout<<endl;
    }
    inline void output(){
        cout<<"Number:"<<num<<endl;
        cout<<"Sex:"<<sex<<endl;
        cout<<"Birthday:";
        birthday.display();
        cout<<endl;
        cout<<"ID:"<<ID<<endl;
    }
    ~Person(){
        cout<<"The staff of "<<num<<" has been entered.";
    }
};

int main(){
    Person p(Date(0, 0, 0));
    p.input();
    p.output();
    return 0;
}