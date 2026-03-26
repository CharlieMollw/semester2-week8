
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.0, 0.0);
    Point p2 = makePoint(5.0, 0.0);
    Point p3 = makePoint(0.0, 5.0);

    Triangle t = makeTriangle(p1, p2, p3);

    float x = triangleArea(t);

    printf("%f/n", x);


    
    // test your code by calling the functions and printing the output 
    
    return 0;
}