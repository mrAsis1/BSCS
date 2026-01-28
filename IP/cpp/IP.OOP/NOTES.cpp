//TRIANGLE.h
#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include <cmath>

class Triangle
{
    public:
        ~Triangle();
        Triangle(double, double);
        Triangle();
        double area();
        void setBase(double);
        void setHeight(double);

    protected:
        double base;
        double height;
};

#endif // TRIANGLE_H_INCLUDED

//TRIANGLEIMP.cpp
#include "TRIANGLE.h"

Triangle::~Triangle()
{
}

Triangle::Triangle(double b, double h)
{
    base = fabs(b);
    height = fabs(h);
}

Triangle::Triangle()
{
    base = 0;
    height = 0;
}

void Triangle::setBase(double b)
{
    base = fabs(b);
}

void Triangle::setHeight(double h)
{
    height = fabs(h);
}

double Triangle::area()
{
    return base * height * 0.5;
}

//RIGHTTRIANGLE.h
#ifndef RIGHTTRIANGLE_H_INCLUDED
#define RIGHTTRIANGLE_H_INCLUDED

#include "Triangle.h"

class RightTriangle : public Triangle
{
    public:
        double hypothenuse();
        ~RightTriangle();
        RightTriangle();
        RightTriangle(double, double);
        double angle1();
        double angle2();
};

#endif // RIGHTTRIANGLE_H_INCLUDED

//RIGHTTRIANGLEIMP.cpp
#include "RIGHTTRIANGLE.h"

double RightTriangle::hypothenuse()
{
    return sqrt(height*height + base * base);
}

RightTriangle::RightTriangle(double b, double h):Triangle(b, h)
{

}

RightTriangle::~RightTriangle()
{

}

RightTriangle::RightTriangle()
{
    base = 0;
    height = 0;
}

double RightTriangle::angle1()
{
    return atan(height/base)*(180.0/M_PI);
}

double RightTriangle::angle2()
{
    return 90.00 - angle1();
}


//int main
#include <iostream>
#include "RIGHTTRIANGLE.h"
using namespace std;

int cAAS (double dataScr[][10], RightTriangle RT[], RightTriangle RTS[], int s);

int main()
{
    double src[2][10] = {{5,3,4,1,2,3,4,5,6,9},{9,6,5,4,3,2,1,4,3,5}};
    RightTriangle R[10], R2[10];
    int s = 10, sCtr = 0;
    sCtr = cAAS(src, R, R2, s);

    for(int i = 0; i < sCtr; i++)
    {
        cout << R2[i].angle1()<<",";
    }
}

int cAAS (double dataScr[][10], RightTriangle RT[], RightTriangle RTS[], int s)
{
    int ctr = 0;
    for(int i = 0; i < s; i++)
    {
        RT[i].setBase(dataScr[0][i]);
        RT[i].setHeight(dataScr[1][i]);

        if(RT[i].angle1() >= 60)
        {
            RTS[ctr] = RT[i];
            ctr++;
        }
    }
    return ctr;
}

