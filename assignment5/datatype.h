#ifndef datatype_h
#define datatype_h

#include <stdio.h>
typedef int* Data;
typedef struct {char *skey1; char *skey2;} Key_struct;
typedef Key_struct* Key;
char * string_dup(char *str);
Key key_gen(char *skey1, char *skey2);
int key_comp(Key key1, Key key2);
void key_print(Key key);
void key_free(Key key);
Data data_gen(int idata);
void data_set(Data data, int idata);
void data_print(Data data);
void data_free(Data data);
#endif /* data_h */

