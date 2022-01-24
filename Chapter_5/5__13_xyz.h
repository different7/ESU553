/**
 * Created by Hjh on 2022-01-24 16:45
 */#ifndef INC_553CPP_5__13_XYZ_H
#define INC_553CPP_5__13_XYZ_H
class X;

class Y{
    void g(X*);
};

class X{
private:
    int i;
public:
    X():i(0){}
    friend void h(X*);
    friend Y::g(X*);
    friend class Z;
};

void h(X* x){
    x->i += 10;
}

void Y::g(X* x){
    x->i++;
}

class Z{
public:
    void f(X* x){
        x->i += 5;
    }
};
#endif //INC_553CPP_5__13_XYZ_H