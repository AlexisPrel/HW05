/*
 * Test point2d and triangle data structures, distance() and area() functions
 */
 
 #include <stdio.h>
 #include "geom.h"
 
 double distance(struct point2d u, struct point2d v);
 double area(struct triangle t);
 
 int main(void)
 {
     struct point2d u = {2., 2.};
     struct point2d v = {2., 2.};
     struct point2d q = {2., 2.};
     struct triangle t = {u, v, q};
     double d, aa, per, rad;
     
     printf("x = %f, y = %f\n", u.x, u.y);
     printf("a = (%f, %f)  b = (%f, %f)  c = (%f, %f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);

     d = distance(u, v);
     printf("distance = %f \n", d);

     aa = area(t);
     printf("area = %f \n", aa);


    /* for debug */
     printf("AB = %f BC = %f CA = %f \n",distance(t.a,t.b),distance(t.b,t.c),distance(t.c,t.a));
     per = perimeter(t);
     printf("perimeter as returned = %f \n",per);
   
     rad = radius(t);
     printf("radius as returned = %f \n", rad);
     return 0;
 }
