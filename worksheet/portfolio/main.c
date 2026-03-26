
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(0.0,0.0);
    Point p2 = makePoint(3.0,4.0);
    Point p3 = makePoint(1.0,0.0);
    Point p4 = makePoint(0.0,1.0);
    Line line = makeLine( p1, p2 );
    Triangle triangle = makeTriangle( p1, p3, p4 );
    
    printf( "line length: %.2f\n", lineLength( line ) );
    printf( "triangle area: %.2f\n", triangleArea( triangle ) );
    printf( "same point: %d\n", samePoint( p1, makePoint( 0.0, 0.0 ) ) );
    printf( "point in line: %d\n", pointInLine( p2, line ) );
    printf( "point in triangle: %d\n", pointInTriangle( p4, triangle ) );
    
    return 0;
}