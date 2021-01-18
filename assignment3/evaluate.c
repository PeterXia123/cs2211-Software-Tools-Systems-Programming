#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
float s_exp(float sub_exp, char op);
int main(int argc, const char * argv[]) {
bool stay = true;
while (stay == true){
   printf("please input the simple arithmetic expression\n");
   float result = s_exp(0, '+');
   printf("the result is %.2f\n", result);
    printf("do you want to continue, Y for yes, N for quit.");
    char q;
    scanf(" %c",&q);
        while (q !='Y' && q != 'N'){
            printf("do you want to continue, Y for yes, N for quit.");
            scanf(" %c",&q);
        }
    if(q == 'Y')
        stay = true;
    if (q == 'N')
        stay = false;
        }
  
   
}
// Input: none, read from stdin
// // Effect: get the next numeric value of the expression
// // Output: return the next numeric value of the expression.
float get_num(){
    float num;
    scanf("%f",&num);
    while(num ==' '){
        scanf("%f",&num);
    }
    return num;
}
// Input: none, read from stdin
// // Effect: get the next operator of the expression
// // this operator can be +, -, *, /, or ’\n’
// // ’\n’ indicates the end of the expression input
// // leading spaces should skipped
// // Output: return the next operator of the expression.

char get_op(){
    char cha;
    scanf("%c",&cha);
    while(cha ==' '){
        scanf("%c",&cha);
    }
    if(cha =='\n'||cha =='+'||cha =='-'||cha =='*'||cha =='/')
       return cha;
    else
        exit(EXIT_FAILURE);
}

// Input: ’sub_exp’: the value of the current sub m_expression
// // to the left of ’op’ location in stdin.
// // ’op’ : an operator, ’*’ or ’/’. ’op’ could also be
// // ’+’, ’-’, or ’\n’ indicating the end of the m_expression.
// // "+’, ’-’, or ’\n’ should be pushed back to stdin.
// // the rest of the m_expression will be read in from stdin
// // Effect: the m_expression is evaluated using recursion:
// // get next_num with get_num() and then get next_op with get_op()
// // use ’sub_exp op next_num’ and ’next_op’ to do recursive call
// // Output: this function returns the value of the current m_expression
float m_exp(float sub_exp, char op){
    if (op == '\n'|| op == '+'|| op == '-'){
        ungetc(op, stdin);
        return sub_exp;
    }
    else{
        float next_num = get_num();
        if(op == '*'){
            sub_exp = sub_exp * next_num;
        }
        if(op == '/'){
            sub_exp = sub_exp / next_num;
        }
        char next_op = get_op();
        return m_exp(sub_exp,next_op);
        
    }
    
    
}

// Input: ’sub_exp’: the value of the sub s_expression to the left of ’op’
// // location in stdin.
// // ’op’ : an operator, ’+’ or ’-’. ’op’ could also be
// // ’\n’ indicating the end of the s_expression
// // the rest of the expression will be read in from stdin
// // Effect: the whole s_expression is evaluated using recursion:
// // get next_num with m_exp() and then get next_op with get_op()
// // use ’sub_exp op next_num’ and ’next_op’ to do recursive call
// // Output: this function returns the value of the s_expression
float s_exp(float sub_exp, char op){
    if(op == '\n'){
        return sub_exp;
    }
    else{
        float next_exp = m_exp(1, '*');
        if(op =='+'){
            sub_exp = sub_exp + next_exp;
        }
        if(op == '-'){
            sub_exp = sub_exp - next_exp;
        }
        char next_op = get_op();
        return s_exp(sub_exp,next_op);
    }
}



