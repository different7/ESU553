/**
 * Created by Hjh on 2022-01-13 10:29
 * 游泳池改造预算，Circle类。
 * 一圆形游泳池如图4-2所示，现在需在其周围建一圆形过道，并在其四周围上栅栏。栅栏价格为35元/米，
 * 过道造价为20元/平方米。过道宽度为3米，游泳池半径由键盘输入。要求编程计算并输出过道和栅栏的造价。
 */
#include <iostream>
using namespace std;

const float PI = 3.141593;
const float FENCE_PRICE = 35;  //栅栏单价
const float CONCRETE_PRICE = 20;  //过道水泥单价

class Circle{
public:                      //外部接口
    Circle(float r);         //构造函数
    float circumference();   //计算圆的周长
    float area();            //计算圆的面积
private:                     //私有数据成员
    float radius;            //圆半径
};

//构造函数初始化数据成员radius
Circle::Circle(float r){
    radius = r;
}

//计算圆的周长
float Circle::circumference() {
    return 2 * PI * radius;
}

//计算圆的面积
float Circle::area() {
    return PI * radius * radius;
}

int main() {
    float radius;
    cout<<"Enter the radius of the pool:";
    cin>>radius;

    Circle pool(radius);           //游泳池边界对象
    Circle poolRim(radius + 3);  //栅栏对象

    //计算栅栏造假并输出
    float fenCost = poolRim.circumference() * FENCE_PRICE;
    cout<<"Fencing cost is $"<<fenCost<<endl;

    //计算过道造价并输出
    float concreteCost = (poolRim.area()-pool.area()) * CONCRETE_PRICE;
    cout<<"Concrete Cost is $"<<concreteCost<<endl;

    return 0;
}