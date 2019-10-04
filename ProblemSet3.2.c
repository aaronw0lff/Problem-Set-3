#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{

int i, nsamps;
double sineamp;
double twopi = 2.0  * M_PI;
double angleincr;
nsamps = 1000;
angleincr = twopi / nsamps;
for(i=0; i < nsamps; i++){
    sineamp = sin(angleincr *i);
    fprintf(stdout, "%.8lf\n",sineamp);
}
fprintf(stderr,"done\n");
    return 0;
}
