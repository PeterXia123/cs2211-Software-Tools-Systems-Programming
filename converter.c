#include <stdio.h>
#define KILO_METER 1000.0f
#define METER_FEET 3.28084f
#define CENTIMETRE_INCH 0.393701f
#define CELSIUS_FAHRENHEIT 9.0f/5.0f
#define FAHRENHEIT_CELSIUS 5.0f/9.0f
#define FROZEN_POINT 32.0f
void  converter();
int main(int argc, const char * argv[]) {
    converter();
}

void converter(){
    char num;
    printf("please input the character of unit,1 for the conversion between Kilometer and Mile.\n");
    printf("please input the character of unit,2 for the conversion between Meter and feet.\n");
    printf("please input the character of unit,3 for the conversion between Centimetre and Inch.\n");
    printf("please input the character of unit,4 for the conversion between Celsius and Fahrenhiet.\n");
    printf("please input the character of unit,5 quit the program.\n");
    scanf(" %c",&num);
    while(num!='1'&&num!='2'&&num!='3'&&num!='4'&&num!='5'){
        printf("please input the character of unit,1 for the conversion between Kilometer and Mile.\n");
        printf("please input the character of unit,2 for the conversion between Meter and feet.\n");
        printf("please input the character of unit,3 for the conversion between Centimetre and Inch.\n");
        printf("please input the character of unit,4 for the conversion between Celsius and Fahrenhiet.\n");
        printf("please input the character of unit,5 quit the program.\n");
        scanf(" %c",&num);
    }
    while(num!='5'){
        if(num  == '1'){
            char m;
            printf("plaese choose the two different choose K or M.\n");
            scanf(" %c",&m);
            while(m != 'K' && m !='M' ){
                printf("plaese choose the two different choose K or M.\n");
                scanf(" %c",&m);
            }
          if(m =='K'){
                float kilo;
                float meters;
                printf("plaese input the kilometer\n");
                scanf(" %f", &kilo);
                meters = kilo*KILO_METER;
                printf("meters equivalent: %f\n", meters);
            }
            else {
                float kilo;
                float meters;
                printf("plaese input the meters\n");
                scanf(" %f", &meters);
                kilo = meters/KILO_METER;
                printf("kilo equivalent: %f\n", kilo);
            }
    }
        
        if(num  == '2'){
            char m;
            printf("plaese choose the two different choose M or F.\n");
            scanf(" %c",&m);
            while(m !='M' && m!= 'F' ){
                printf("plaese choose the two different choose M or F.\n");
                scanf(" %c",&m);
            }
            if(m == 'M'){
                float meters;
                float feet;
                printf("plaese input the meters\n");
                scanf(" %f", &meters);
                feet = meters*METER_FEET;
                printf("feet equivalent: %f\n", feet);
            }
            else{
                float meters;
                float feet;
                printf("plaese input the feet\n");
                scanf(" %f", &feet);
                meters = feet/METER_FEET;
                printf("meters equivalent: %f\n", meters);
            }
        }
        
        if(num  == '3'){
            char cha;
            printf("plaese choose the two different choose C or I.\n");
            scanf(" %c",&cha);
            while(cha!='C' && cha!='I' ){
                printf("plaese choose the two different choose C or I.\n");
                scanf(" %c",&cha);
            }
            if(cha =='C'){
                float centimetre;
                float inch;
                printf("plaese input the centimetre\n");
                scanf(" %f", &centimetre);
                inch = centimetre*CENTIMETRE_INCH;
                printf("inch equivalent: %f\n", inch);
            }
            else {
                float centimetre;
                float inch;
                printf("plaese input the inch\n");
                scanf(" %f", &inch);
                centimetre = inch/CENTIMETRE_INCH;
                printf("centimetre equivalent: %f\n",centimetre);
                
            }
        }
        
        
        if(num  == '4'){
            char cha;
            printf("plaese choose the two different choose C or F.\n");
            scanf(" %c",&cha);
            while(cha!='C' && cha!='F'){
                printf("plaese choose the two different choose C or F.\n");
                scanf(" %c",&cha);
            }
            if(cha == 'C'){
                float celsius;
                float fahrenheit;
                printf("plaese input the celsius\n");
                scanf(" %f", &celsius);
                fahrenheit = celsius * CELSIUS_FAHRENHEIT +FROZEN_POINT;
                printf("fahrenheit equivalent: %f\n", fahrenheit);
            }
            else {
                float celsius;
                float fahrenheit;
                printf("plaese input the fahrenheit\n");
                scanf(" %f", &fahrenheit);
                celsius = (fahrenheit-FROZEN_POINT)*FAHRENHEIT_CELSIUS;
                printf("celsius equivalent: %f\n", celsius);
            }
        }
        
        
        printf("please input the character of unit,1 for the conversion between Kilometer and Mile.\n");
        printf("please input the character of unit,2 for the conversion between Meter and feet.\n");
        printf("please input the character of unit,3 for the conversion between Centimetre and Inch.\n");
        printf("please input the character of unit,4 for the conversion between Celsius and Fahrenhiet.\n");
        printf("please input the character of unit,5 quit the program.\n");
        scanf(" %c",&num);
        while(num!='1'&&num!='2'&&num!='3'&&num!='4'&&num!='5'){
            printf("please input the character of unit,1 for the conversion between Kilometer and Mile.\n");
            printf("please input the character of unit,2 for the conversion between Meter and feet.\n");
            printf("please input the character of unit,3 for the conversion between Centimetre and Inch.\n");
            printf("please input the character of unit,4 for the conversion between Celsius and Fahrenhiet.\n");
            printf("please input the character of unit,5 quit the program.\n");
            scanf(" %c",&num);
        }
        
      
        }
    }



