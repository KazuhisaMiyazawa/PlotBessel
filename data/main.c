#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gsl/gsl_sf_bessel.h>

int main () {
	int resolution = 10000;
	double xmax = 15.0;
	double xmin = xmax * -1;
	double dx = (xmax - xmin)/resolution;

	for(int nth = 0;nth<=10;nth++){
		char fname[100];
		sprintf(fname, "Bessel_%02dth.txt",nth);
		FILE *fp=fopen(fname,"w");
		if(!fp){puts("Failed to open output file");exit(1);}
		double x = xmin;
		for(int i=0;i<resolution;i++){
			double y = gsl_sf_bessel_Jn(nth, x);
			fprintf(fp,"%8.3f %8.3f\n",x,y);
			x += dx;
		}
		fclose(fp);
	}
 return 0;
}
