float length(int ch,float num)
{
    float f=0;
	float Feet=0;
	if(ch>2 || ch<1)
	{
		return 0;
	}
	if(ch==1)
	{
        f = num*12;
        printf("length in inches : %f inches\n\n",f);
		return f;
	}
	else if(ch==2)
	{
        Feet = num / 12;
        printf("length in feet : %f feet\n\n",Feet);
		return Feet;
	}
	else
	{
        printf("Enter a valid unit choice number\n");
		return 0;
	}
}
