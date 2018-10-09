/*
 * screenDiagonal.c
 * 
 * 
 * 
 * 
 */

// gcc screenDiagonal.c -o screenDiagonal    -lm
// -lm to include math library

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double h, v, d, t;

	h = 14.8;
	v = 12.0;
//      d=19.0;
	t = h * h;
	t = 20.0;

	printf("Screen Diagonal %f\n", sqrt(19.0));
//              printf("Screen Diagonal %f\n", sqrt(h*h + v*v));
	printf("Screen Diagonal %f\n", sqrt(t));
	return 0;
}
