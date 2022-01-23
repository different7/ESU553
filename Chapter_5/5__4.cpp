/**
 * Created by Hjh on 2022-01-23 17:13
 * 例题5-4：假设有两个无关系的类Engine和Fuel，使用时，怎样允许Fuel成员访问Engine中的私有和保护的成员?
 */
class fuel;

class engine{
    friend class fuel;
private:
    int powerLevel;
public:
    engine(){powerLevel = 0;}
    void engine_fn(fuel &f);
};

class fuel{
    friend class engine;
private:
    int fuelLevel;
public:
    fuel(){fuelLevel = 0;}
    void fuel_fn(engine &e);
};