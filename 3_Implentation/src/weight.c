#include "conversion.h"
float weight(int ch,float num)
{
	if(ch>2 || ch<1)
	{
		return 0;
	}
    const float KG = 0.453592;
    const float POUND = 2.20462;
	if(ch==1)
	{
	    printf("Weight in kilograms is %f kgms\n\n", (num * KG));
		return num*KG;
	}
	else if(ch==2)
	{
        printf("Weight in pounds is %f pounds\n\n", (num* POUND));
		return num*POUND;
	}
	else
    {
        printf("Enter a valid unit choice number\n");
		return 0;
    }
}
