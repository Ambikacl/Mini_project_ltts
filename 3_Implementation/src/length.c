void length(int ch,float num)
{
    float f;
	float Feet;
	if(ch==1)
	{
        f =num*12;
        printf("length in inches : %f inches\n\n",f);
	}
	else if(ch==2)
	{
        Feet = num / 12;
        printf("length in feet : %f feet\n\n",Feet);
	}
	else
	{
        printf("Enter a valid unit choice number\n");
	}
}
