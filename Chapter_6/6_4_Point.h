/**
 * Created by Hjh on 2022-01-26 15:40
 */
#ifndef INC_553CPP_6_4_POINT_H
#define INC_553CPP_6_4_POINT_H
class Point{
private:
    float x,y;
public:
    Point(float x = 0, float y = 0):x(x),y(y){}
    float getX() const {return x;}
    float getY() const {return y;}
};

#endif //INC_553CPP_6_4_POINT_H
