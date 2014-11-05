test-geom:	test-geom.c distance.c area.c perimeter.c radius.c
	gcc -Wall -o test-geom test-geom.c geom.h distance.c area.c perimeter.c radius.c -lm
