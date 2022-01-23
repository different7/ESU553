/**
 * Created by Hjh on 2022-01-23 20:31
 * 定义一个Cat类，拥有静态数据成员HowManyCats，记录Cat的个体数目；
 * 静态成员函数GetHowMany（），存取HowManyCats。
 */
#include<iostream>
using namespace std;

class Cat{
private:
    int itsAge;
    static int HowManyCats;  //静态成员变量
public:
    Cat(int age):itsAge(age){
        HowManyCats++;
    }
    virtual ~Cat(){                 //虚函数
        HowManyCats--;
    }
    virtual int GetAge(){           //虚函数
        return itsAge;
    }
    virtual void SetAge(int age){   //虚函数
        itsAge = age;
    }
    static int GetHowMany(){ //静态成员函数
        return HowManyCats;
    }
};

int Cat::HowManyCats = 0;

void TelepathicFunction();

int main(){
    const int MaxCats = 5;
    Cat *CatHouse[MaxCats];
    int i;
    for(i=0;i<MaxCats;i++){
        CatHouse[i] = new Cat(i);
        TelepathicFunction();
    }
    for(i=0;i<MaxCats;i++){
        delete CatHouse[i];
        TelepathicFunction();
    }
    return 0;
}

void TelepathicFunction(){
    cout << "There are " << Cat::GetHowMany() << " cats alive!\n";
}