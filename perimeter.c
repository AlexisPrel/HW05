/*
* Calculates the perimeter p of a triangle as the sum of the distance between edges
* Here seems to be the source of this strange problem. Although the function is supposed to returned 30, 
* the actual output is very different.
*/
#include <stdio.h>
#include <math.h>
#include "geom.h"

double distance(struct point2d u, struct point2d v);
 
double perimeter(struct triangle t)
 {
    /* You may want to try to comment those lines until return and observe that the output is unchanged...*/
    double AB, BC, CA, p;
    AB = distance(t.a,t.b);    
    BC = distance(t.b,t.c);    
    CA = distance(t.c,t.a);    
    p = AB + BC + CA;
    printf("variable p used within the function = %f\n", p);/* */
    return(30.); /* to be replaced with p in the actual program */
 }
