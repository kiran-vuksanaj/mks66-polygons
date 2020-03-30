#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "gmath.h"
#include "matrix.h"
#include "ml6.h"


//vector functions
//normalize vetor, should modify the parameter
void normalize( double *vector ) {
}

//Return the dot porduct of a . b
double dot_product( double *a, double *b ) {
  return  0;
}


//Calculate the surface normal for the triangle whose first
//point is located at index i in polygons
double *calculate_normal(struct matrix *polygons, int i){
  /*
	< ay*bz - az*by,
	  az*bx - ax*bz,
	  ax*by - ay*bx >
  */
  double *out = malloc( sizeof(double) * 3 );
  double ax,ay,az,bx,by,bz;
  // A = p1 - p0
  ax = polygons->m[0][i+1] - polygons->m[0][i];
  ay = polygons->m[1][i+1] - polygons->m[1][i];
  az = polygons->m[2][i+1] - polygons->m[2][i];

  // B = p2 - p0
  bx = polygons->m[0][i+2] - polygons->m[0][i];
  by = polygons->m[1][i+2] - polygons->m[1][i];
  bz = polygons->m[2][i+2] - polygons->m[2][i];

  out[0] = ay*bz - az*by;
  out[1] = az*bx - ax*bz;
  out[2] = ax*by - ay*bx;
  return out;
}
