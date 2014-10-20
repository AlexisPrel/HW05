test-geom:	test-geom.c geom.h distance.c area.c perimeter.c radius.c
	gcc -o test-geom test-geom.c geom.h distance.c area.c perimeter.c radius.c -lm
