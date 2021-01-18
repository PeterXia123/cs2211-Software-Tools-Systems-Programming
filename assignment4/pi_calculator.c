#include <math.h>
#include <stdio.h>
double pi_calculator(double tolerance);
int main(int argc, const char * argv[]) {
    double pi;
    double tolerance;
    printf("please input the tolerance level.\n");
    scanf("%lf",&tolerance);
    pi = pi_calculator(tolerance);
    printf("the estimation of pi is %lf.\n", pi);
    return 0;
}


double pi_calculator(double tolerance){
    long long n;
    n =(long long) ((4/tolerance)+1)/2-1;
    double sum  = 0;
    for(int i = 1; i <n+1;i++){
        sum = sum + (pow(-1,i+1)*4)/(2*i-1);
        
    }
    return sum;
}

