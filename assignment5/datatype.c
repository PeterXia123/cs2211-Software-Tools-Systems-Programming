#include "datatype.h"
#include <stdlib.h>
#include <string.h>
//Duplicate string pointed to by str with dynamic memory allocation.
Key key_gen(char *skey1, char *skey2) {
    Key key;
    key = (Key_struct *)malloc(sizeof(Key_struct));
    key->skey1 = string_dup(skey1);
    key->skey2 = string_dup(skey2);
    return key;
}

//Generate a key with dynamic memory allocation.
char * string_dup(char *str) {
    char *dup;
    int i;
    dup = (char *)malloc((strlen(str) + 1) * sizeof(char));
    for (i = 0; i <= strlen(str); i++) {
        dup[i] = str[i];
    }
    return dup;
}

////Use strcmp( ) to do comparison. 
int key_comp(Key key1, Key key2) {
    if (strcmp(key1->skey1, key2->skey1) == 0) {
        return strcmp(key1->skey2, key2->skey2);
    }
    else {
        return strcmp(key1->skey1, key2->skey1);
    }
}

//print the key
void key_print(Key key){
    printf("%-15s%-15s", (*key).skey1, (*key).skey2);
}
//free moemory
void key_free(Key key){
    free(key->skey1);
    free(key->skey2);
    free(key);
}

//generate a data with pointer to it.
Data data_gen(int idata){
    Data data;
    data = (Data)malloc(sizeof(int));
    *data = idata;
    return data;
}

//assign data with idata
void data_set(Data data, int idata){
    *data = idata;
}
//print the data
void data_print(Data data){
    printf("%-15d\n",*data);
}
//free momery for the data.
void data_free(Data data){
    free(data);
}

