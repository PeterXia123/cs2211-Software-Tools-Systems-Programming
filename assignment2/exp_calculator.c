#include <stdio.h>
float exp_calculator();
int main(int argc, const char * argv[]) {
    float result = exp_calculator();
    printf("the result is %f.\n " ,result);
}

float exp_calculator_helper(float base, int exponent);
float exp_calculator(){
    float base;
    printf("please input a positive float number for base\n");
    scanf("%f",&base);
    while(base<=0){
        printf("the base should be larger than 0.\n");
        scanf("%f",&base);
    }
    int exponent;
    printf("please input a integer number\n");
    scanf("%d", &exponent);
    return exp_calculator_helper(base, exponent);
}

float exp_calculator_helper(float base, int exponent){
    if(exponent == 0){
        return 1;
    }
    if(exponent%2 ==0){
        return exp_calculator_helper(base,exponent/2)*exp_calculator_helper(base,exponent/2);}
    else{
        return exp_calculator_helper(base, (exponent-1)/2)*base*exp_calculator_helper(base, (exponent-1)/2);}
        
    }




