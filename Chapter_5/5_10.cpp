/**
 * Created by Hjh on 2022-01-22 18:05
 * 例5—10，文件3：主函数
 */
#include "Point.h"
#include <iostream>
using namespace std;

int main(){
    Point a(6,7);  //创建对象a，构造函数使count加一
    cout<<"Point a:"<<a.getX()<<","<<a.getY();
    Point::showCount();  //输出对象个数

    Point b(a);  //创建对象b，用a初始化b，复制构造函数使count加一
    cout<<"Point b:"<<b.getX()<<","<<b.getY();
    Point::showCount();

    return 0;
}