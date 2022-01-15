/**
 * Created by Hjh on 2022-01-15 11:17
 * 定义一个Dog类，包含的age、weight等属性，以及对这些属性操作的方法。实现并测试这个类。
 */
#include <iostream>
using namespace std;

class Dog{
public:
    Dog(int initialAge = 0, int initialWeight = 5); //构造函数
    ~Dog();  //析构函数
    int GetAge() {return itsAge;} //inline!
    void SetAge(int age) {itsAge = age;} //inlien!
    int GetWeight() {return itsWeight;}  //inline!
    void SetWeight(int weight) {itsWeight = weight;} //inline!
private:
    int itsAge, itsWeight;
};

Dog::Dog(int initialAge, int initialWeight){
    itsAge = initialAge;
    itsWeight = initialWeight;
}

Dog::~Dog(){} //deconstructor, takes no action

int main(){
    Dog Jack(2,10);
    cout<<"Jack is a dog who is "<<Jack.GetAge()<<" years old and "<<Jack.GetWeight()<<
    " pounds weight."<<endl;
    Jack.SetAge(7);
    Jack.SetWeight(20);
    cout<<"Now Jack is "<<Jack.GetAge()<<" years old and "<<Jack.GetWeight()<<" pounds weight.";
    return 0;
}