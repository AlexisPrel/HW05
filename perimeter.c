/*
* Calculates the perimeter p of a triangle as the sum of the distance between edges
*/
#include <stdio.h>
#include <math.h>
#include "geom.h"

double distance(struct point2d u, struct point2d v);
 
double perimeter(struct triangle t)
 {
    double AB, BC, CA, p;
    AB = distance(t.a,t.b);    
    BC = distance(t.b,t.c);    
    CA = distance(t.c,t.a);    
    p = AB + BC + CA;
    return(p);
 }
