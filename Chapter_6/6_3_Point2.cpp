/**
 * Created by Hjh on 2022-01-25 18:08
 */
#include <iostream>
#include "6_3_Point1.h"
using namespace std;

Point::Point(){
    x = y = 0;
    cout<<"Default constructor called."<<endl;
}

Point::Point(int x, int y):x(x),y(y){
    cout<<"Constructor called."<<endl;
}

Point::~Point(){
    cout<<"Destructor called."<<endl;
}

void Point::move(int newX, int newY){
    cout<<"Moving the point to ("<<newX<<","<<newY<<")"<<endl;
    x = newX;
    y = newY;
}