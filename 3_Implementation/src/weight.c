void weight(int ch,float num)
{
    const float KG = 0.453592;
    const float POUND = 2.20462;
	if(ch==1)
	{
	    printf("Weight in kilograms is %f kgms\n\n", (num * KG));
	}
	else if(ch==2)
	{
        printf("Weight in pounds is %f pounds\n\n", (num* POUND));
	}
	else
    {
        printf("Enter a valid unit choice number\n");
    }
}
