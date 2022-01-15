/**
 * Created by Hjh on 2022-01-15 18:46
 * 定义一个Tree（树）类，有成员 ages（树龄），成员函数grow(int years)对 ages加上years，
 * age（）显示 tree对象的 ages的值。
 */
#include<iostream>
using namespace std;

class Tree{
public:
    Tree(int n=0);
    ~Tree();
    void grow(int years);
    void age();
private:
    int ages;
};

Tree::Tree(int n){
    ages = n;
}

Tree::~Tree(){
    age();
}

void Tree::grow(int years){
        ages += years;
}

void Tree::age(){
    cout << "The age of the tree is "<<ages<<endl;
}

int main(){
    Tree t(22);
    t.age();
    t.grow(0.7);
    return 0;
}