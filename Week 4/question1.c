#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){
    double sigma = 2, mu = 1, fx=0, twopisigma,xminusmuoversigma;
    for(double x = -20; x < 20.5; x += 0.5 ){
        twopisigma = 2.0*PI*sigma;
        xminusmuoversigma = (x-mu) / sigma;
        fx = (1 / sqrt(twopisigma)) * exp((-1.0/2.0) * pow(xminusmuoversigma, 2));
        printf("%lf, %e\n",x,fx);   
    }
    return 0;
}