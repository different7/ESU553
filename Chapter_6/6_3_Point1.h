/**
 * Created by Hjh on 2022-01-25 18:04
 */#ifndef INC_553CPP_6_3_POINT1_H
#define INC_553CPP_6_3_POINT1_H
class Point{
public:
    Point(); //默认构造函数
    Point(int x, int y);
    ~Point();
    void move(int newX, int newY);
    int getX() const {return x;}
    int getY() const {return y;}
    static void showCount();
private:
    int x,y;
};

#endif //INC_553CPP_6_3_POINT1_H
