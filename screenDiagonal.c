/*
 * screenDiagonal.c
 * 
 * Copyright 2016 Mike <mhewitt@theiet.org>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

// gcc screenDiagonal.c -o screenDiagonal    -lm
// -lm to include math library

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double h,v,d,t;
	
	h=14.8;
	v=12.0;
//	d=19.0;
	t=h*h;
	t=20.0;
	
	printf("Screen Diagonal %f\n", sqrt(19.0));
//		printf("Screen Diagonal %f\n", sqrt(h*h + v*v));
printf("Screen Diagonal %f\n", sqrt(t));
	return 0;
}

