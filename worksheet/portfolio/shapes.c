
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) 
{
    Point new;
    new.x = x;
    new.y = y;
    return new;
}

Line makeLine( Point x, Point y)
{
    Line new;
    new.p[0] = x;
    new.p[1] = y;
    return new;
}

Triangle makeTriangle( Point x, Point y, Point z)
{
    Triangle new;
    new.p[0] = x;
    new.p[1] = y;
    new.p[2] = z;
    return new;
}

float lineLength(Line l)
{
    float a = l.p[0].x - l.p[1].x;
    float b = l.p[0].y - l.p[1].y;
    float c2 = (a*a)+(b*b);
    float c = sqrt(c2);
    return c;
}

float triangleArea(Triangle t)
{
    float area = 0.5 * fabsf((t.p[0].x*(t.p[1].y - t.p[2].y)) + (t.p[1].x*(t.p[2].y - t.p[0].y)) + (t.p[2].x*(t.p[0].y - t.p[1].y)));
    return area;
}

bool samePoint(Point x, Point y)
{
    return fabsf(lineLength(makeLine(x,y)))<1.0e-6;
}
bool pointInLine(Point p, Line l)
{
    if(samePoint(p, l.p[0]))
    {
        return true;
    }
    if(samePoint(p, l.p[1]))
    {
        return true;
    }
    return false;
}
bool pointInTriangle(Point p, Triangle t)
{
    for(int i = 0; i < 3; ++i)
    {
        if(samePoint(p, t.p[i]))
        {
            return true;
        }
    }
    return false;
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()