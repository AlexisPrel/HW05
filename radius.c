/*
* Calculates the radius r of a circle inscribed in triangle t
*/

#include <stdio.h>
 #include <math.h>
 #include "geom.h"


double area(struct triangle t);
double distance(struct point2d u,struct point2d v);
double perimeter(struct triangle t);

double radius(struct triangle t)
{
    double A, p, r;
    A = area(t); 
    p = perimeter(t);
    r = 2*A/p;
    printf("variable r used within the function = %f (length of this text changes result)\n",r);
    return(r);
 }
