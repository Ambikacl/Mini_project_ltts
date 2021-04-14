#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

#include "conversion.h"

int main(){
int choice,ch,num1;
float num;
while(1)
{
printf("Press 1 to convert temperature units(c,F,k).\n");
printf("Press 2 to convert length units(inches,feet).\n");
printf("Press 3 to convert weight units(kgms,pounds).\n");
printf("Press 4 for number system conversion(binary,decimal).\n");
printf("Press 5 to caluculate percentage.\n");
printf("Press 0 to exit.\n");
scanf("%d", &choice);
switch(choice){
    case 0:
        exit(0);
        break;
    case 1:
        printf("Enter 1 if unit in degree celcius or 2 if unit in degree fahrenheit or 3 if unit in kelvin :\n");
        scanf("%d",&ch);
        printf("Enter temperature in degree celcius or degree fahrenheit or kelvin:\n");
        scanf("%f", &num);
        temp(ch,num);
        break;
    case 2:
        printf("Enter 1 if unit in feet or 2 if unit in inches :\n");
        scanf("%d",&ch);
        printf("Enter length in feet or inches:\n");
        scanf("%f", &num);
        length(ch,num);
        break;
    case 3:
        printf("Enter 1 if unit in pounds or if 2 unit in kgms :\n");
        scanf("%d",&ch);
        printf("Enter weight in pounds or kg:\n");
        scanf("%f",&num);
        weight(ch,num);
        break;
    case 4:
        printf("Enter 1 if binary or 2 if unit in decimal :\n");
        scanf("%d",&ch);
        printf("Enter binary or decimal number:\n");
        scanf("%d",&num1);
        numsys(ch,num1);
        break;
    case 5:
        printf("Enter total value : \n");
        scanf("%d",&ch);
        printf("Enter obtained value : \n");
        scanf("%d",&num1);
        percentage(ch,num1);
        break;
    default:
        printf("Enter a valid choice\n");
        break;
}
}
return 0;
}
