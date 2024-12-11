#include <iostream>
#include "math.h"
using namespace std;
class Circle
{
    friend istream &operator >>(istream &in,const Circle &obj);
public:
    Circle(float r)
    {
        setradius(r);
    }
    void setradius(float _r)
    {
        if(_r > 0){
            radius = _r;
        }else{
            radius = 0;
        }

    }
    float getradius()
    {
        return radius;
    }
    float area()
    {
        return (pow(radius,2) * 3.14);
    }
    float perimeter()
    {
        return (radius * 2 *3.14);
    }
    bool operator >=(const Circle &obj)
    {
        if(radius >= obj.radius)
            return true;
        return false;
    }
    void show()
    {
        cout << area() <<endl;
    }

private:
    float radius;
};

istream &operator >>(istream &in,const Circle &obj)
{
    in >> obj.radius;
    return in;
}

int main() {
    int number;
    cin >> number;
    Circle Shape(0);
    float space[number];
    for(int i=0;i<number;i++)
    {
        float r;
        cin >> r;
        Shape.setradius(r);
        space[i] = Shape.area();
    }
    for(int i=0;i<number;i++)
    {
        cout << space[i]<<endl;
    }
    return 0;
}
