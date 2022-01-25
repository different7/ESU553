/**
 * Created by Hjh on 2022-01-22 17:51
 * 例5-10，文件1：类的定义
 */#ifndef INC_553CPP_6_3_POINT2_H
#define INC_553CPP_6_3_POINT2_H

class Point{
public:
    Point(int x=0, int y=0):x(x),y(y) {} //构造函数
    Point(const Point &p);               //复制构造函数
    ~Point() {count--;}                  //析构函数
    int getX() const {return x;}
    int getY() const {return y;}
    static void showCount();  //静态函数成员
private:
    int x,y;
    static int count;  //静态数据成员
};

#endif //INC_553CPP_6_3_POINT2_H