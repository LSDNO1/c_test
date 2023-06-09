#include "stadfx.h"

class LeagcyRectangle
{
public:
    LeagcyRectangle(double x1,double x2,double y1,double y2)
    {
        _x1=x1,_x2=x2,_y1=y1,_y2=y2;
    }
    void LeagcyDrow()
    {
        std::cout<<"LeagcyDrow!"<<std::endl;
    }
private:
    double _x1,_x2,_y1,_y2;
};

//这个接口用于对接外部接口和实现与内部类的对接
class Rectangle
{
public:
    virtual void Drow()=0;
};

class RectangleAdapter:public Rectangle,public LeagcyRectangle
{
public:
    RectangleAdapter(int x,int y,int m,int n): LeagcyRectangle(x,y, m,n){
        std::cout<<"LeagcyRectangle OK!"<<std::endl;
    };
    virtual void Drow()
    {
        std::cout<<"Use LeagcyDrow!"<<std::endl;
        LeagcyDrow();
    }
};

int main()
{


    return 0;
}