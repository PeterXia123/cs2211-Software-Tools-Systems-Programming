#include "bstree.h"
#include "matrix.h"
#include "datatype.h"
#include <stdlib.h>
Matrix matrix_construction(void){
    BStree bst;
    bst = bstree_ini();
    return bst;
}
//If location (index1, index2) is defined in Matrix m, then return 1. Otherwise, return 0.
unsigned char matrix_isin(Matrix m, Index index1, Index index2){
    Key key = key_gen(index1, index2);
    Data data = bstree_search(m, key);
    if(data == NULL){
        return '0';
    }
    else{
        return '1';
    }
}

//If location (index1, index2) is defined in Matrix m, then return a pointer to the associated value. 
////Otherwise, return NULL.
Value *matrix_get(Matrix m, Index index1, Index index2) {
    Data data;
    Key key;
    key = key_gen(index1, index2);
    data = bstree_search(m, key);
    if (data != NULL) {
        return data;
    }
    else {
        return NULL;
    }
}


//Assign value to Matrix m at location (index1, index2). If that location already has value, then overwrite.
void matrix_set(Matrix m, Index index1, Index index2, Value value){
    Key key = key_gen(index1, index2);
    Data data = bstree_search(m, key);
    if(data == NULL){
        bstree_insert(m, key, data_gen(value));
    }
    else{
        data_set(data, value);
    }
}



////If location (index1, index2) is defined in Matrix m, then increase the associated value by value.else report error.
void matrix_inc(Matrix m, Index index1, Index index2, Value value){
    Key key = key_gen(index1, index2);
    Data data = bstree_search(m, key);
    if(data == NULL){
        printf("we can't find the point");
    }
    else{
        value = value + *data;
       data_set(data,value);
    }
}


//to print out the matrix in order sequence.
void matrix_list(Matrix m){
    bstree_traversal(m);
}

//to free the momery allocated.
void matrix_destruction(Matrix m){
    bstree_free(m);
}

