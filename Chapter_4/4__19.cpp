/**
 * Created by Hjh on 2022-01-16 10:43
 * 编写一个名为CPU的类，描述一个CPU的以下信息：时钟频率，最大不会超过3000MHz；字长，可以是32位或64位；
 * 核数，可以是单核、双核或四核；是否支持超线程。各项信息要求使用位域来表示。通过输出 sizeof(CPU)来观察
 * 该类所占的字节数。
 */
#include<iostream>
using namespace std;

class CPU{
public:
    CPU(int i, int j, int m, bool n);
    void show();
private:
    int frequency;
    int word_length;
    int core_number;
    bool hyper_threading;
};

void CPU::show(){
    cout<<"Frequency:"<<frequency<<"MHz"<<endl;
    cout<<"Word_length:"<<word_length<<" bits"<<endl;
    cout<<"Core_number:"<<core_number<<" cores"<<endl;
    if(hyper_threading == 1)
        cout<<"Support hyper threading.";
    else
        cout<<"Don't support hyper threading.";
}

CPU::CPU(int i, int j, int m, bool n){
    frequency = i;
    word_length = j;
    core_number = m;
    hyper_threading = n;
}

int main(){
    CPU c(2000, 64, 4, 1);
    c.show();
    cout<<"Number of bytes occupied by the class:"<<sizeof(CPU)<<" bytes";
    return 0;
}
