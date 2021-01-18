#include <stdio.h>
#include <stdlib.h>

#include "matrix.h"

#define MAXCHAR 1000

int main() {
   //initialize an matrix.
    Matrix m = matrix_construction();
   //set up two string input
    char skey1[MAXCHAR];
    char skey2[MAXCHAR];
   //read from stardard input.
    printf("please input a seris pair of string.\n");
   //if in good format
    while(scanf("%s%s\n",skey1,skey2)==2){
    //no exsit insert the point
        if (matrix_isin(m, skey1, skey2)=='0'){
            matrix_set(m, skey1, skey2, 1);
        }
    // add occurence by 1.
        else{
            matrix_inc(m,skey1, skey2,1);
            
        }

    }
   //format print
    char str1[] = "String 1";
    char str2[] = "String 2";
    char str3[] = "Occurance";
    printf("%-15s%-15s",str1,str2);
    printf("%-15s\n",str3);
  // use the traversal
    matrix_list(m);
  //deconstruction to free memory
    matrix_destruction(m);
    return 0;
    
}


