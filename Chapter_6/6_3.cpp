/**
 * Created by Hjh on 2022-01-25 18:15
 */
#include <iostream>
#include "6_3_Point1.h"
using namespace std;

int main(){
    cout<<"Entering main function..."<<endl;
    Point a[2];
    for(int i = 0; i < 2; i++)
        a[i].move(i+1, i+2);
    cout<<"Exit main function..."<<endl;
    return 0;
}