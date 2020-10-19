#include <stdio.h>
#include <math.h>

//Increasing N
double findexp(double n, double x, double lastterm, double sum){
    double r,nextterm;
    if(lastterm < 1.0e-6){
        return sum;
    }
    else{
        nextterm = lastterm * (x / n);
        findexp(n+1,x,nextterm,(sum+nextterm));
    }
}

int main(){
    int x,n,absx;
    double ans;
    printf("Enter X value: ");
    scanf("%d",&x);
    absx = x<0?-x:x;
    ans = findexp(1,x,1.0,1.0);
    printf("My value: %e\n",ans);
    printf("math.h value: %e",exp(x));
    return 0;
}