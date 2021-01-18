#include <stdio.h>
void num_display();
int main(int argc, const char * argv[]) {
    num_display();
    return 0;
}

void num_display(){
    char segements[10][3][3] = {{{' ', '_', ' '}, {'|', ' ', '|'}, {'|', '_', '|'}},
        {{' ', ' ', ' '},{' ', ' ', '|'},{' ', ' ', '|'}},
        {{' ', '_', ' '},{' ', '_', '|'},{'|', '_', ' '}},
        {{' ', '_', ' '},{' ', '_', '|'},{' ', '_', '|'}},
        {{' ', ' ', ' '},{'|', '_', '|'},{' ', ' ', '|'}},
        {{' ', '_', ' '},{'|', '_', ' '},{' ', '_', '|'}},
        {{' ', '_', ' '},{'|', '_', ' '},{'|', '_', '|'}},
        {{' ', '_', ' '},{' ', ' ', '|'},{' ', ' ', '|'}},
        {{' ', '_', ' '},{'|', '_', '|'},{'|', '_', '|'}},
        {{' ', '_', ' '},{'|', '_', '|'},{' ', '_', '|'}}};
   
    char stay = 'Y';
    while(stay == 'Y'){
    char num;
    printf("please input the number");
    scanf(" %c", &num);
    while(num !='0'&&num !='1'&&num !='2'&&num !='3'&&num !='4'&&num !='5'&&num !='6'&&num !='7'&&num !='8'&&num !='9'){
        printf("please input the number");
        scanf(" %c", &num);
        }
    
    if(num == '0'){
            int i;
            int j;
            for(i = 0; i<3; i++){
                for(j = 0; j<3; j++){
                    printf("%c", segements[0][i][j]);
                }
                printf("\n");
            }
        
        }
    if(num == '1'){
        int i;
        int j;
        for(i = 0; i<3; i++){
            for(j = 0; j<3; j++){
                printf("%c", segements[1][i][j]);
            }
            printf("\n");
        }
        
    }
    if(num == '2'){
        int i;
        int j;
        for(i = 0; i<3; i++){
            for(j = 0; j<3; j++){
                    printf("%c", segements[2][i][j]);
                }
                printf("\n");
            }
       
        }
    if(num == '3'){
        int i;
        int j;
        for(i = 0; i<3; i++){
            for(j = 0; j<3; j++){
                    printf("%c", segements[3][i][j]);
                }
                printf("\n");
            }
        
        }
    if(num == '4'){
        int i;
        int j;
        for(i = 0; i<3; i++){
            for(j = 0; j<3; j++){
                    printf("%c", segements[4][i][j]);
                }
                printf("\n");
            }
        
        }
   
        if(num == '5'){
            int i;
            int j;
            for(i = 0; i<3; i++){
                for(j = 0; j<3; j++){
                    printf("%c", segements[5][i][j]);
                }
                printf("\n");
            }
            
        }
        if(num == '6'){
            int i;
            int j;
            for(i = 0; i<3; i++){
                for(j = 0; j<3; j++){
                    printf("%c", segements[6][i][j]);
                }
                printf("\n");
            }
         
        }
        
        if(num == '7'){
            int i;
            int j;
            for(i = 0; i<3; i++){
                for(j = 0; j<3; j++){
                    printf("%c", segements[7][i][j]);
                }
                printf("\n");
            }
            
        }
        if(num == '8'){
            int i;
            int j;
            for(i = 0; i<3; i++){
                for(j = 0; j<3; j++){
                    printf("%c", segements[8][i][j]);
                }
                printf("\n");
            }
            
        }
        if(num == '9'){
            int i;
            int j;
            for(i = 0; i<3; i++){
                for(j = 0; j<3; j++){
                    printf("%c", segements[9][i][j]);
                }
                printf("\n");
            }
            
        }

        printf("do you want to continue, Y for yes, N for quit.");
        scanf(" %c", &stay);
        while(stay != 'Y' && stay != 'N'){
            printf("do you want to continue, Y for yes, N for quit.");
            scanf(" %c", &stay);
        }
        }
}

