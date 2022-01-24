/**
 * Created by Hjh on 2022-01-24 17:08
 * 定义Boat与Car两个类，二者都有weight属性，定义二者的一个友元函数totalWeight()，计算二者的重量和。
 */
#include<iostream>
using namespace std;

class Boat;

class Car{
private:
    int weight;
public:
    Car(int i){
        weight = i;
    }
    friend int totalWeight(Car &aCar, Boat &aBoat);
};

class Boat{
private:
    int weight;
public:
    Boat(int i){
        weight = i;
    }
    friend int totalWeight(Car &aCar, Boat &aBoat);
};

int totalWeight(Car &aCar, Boat &aBoat){
    return aCar.weight + aBoat.weight;
}

int main(){
    Car c(6);
    Boat b(7);
    cout<<"total weight = "<<totalWeight(c,b);
}