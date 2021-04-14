
void numsys(int ch,int num1)
{
	if(ch==1)
	{
	    int binary_val, decimal_val = 0, base = 1, rem;
	    binary_val=num1;
    while (num1 > 0)
    {
        rem=num1%10;
        decimal_val = decimal_val + rem * base;
        num1 = num1 / 10 ;
        base = base * 2;
    }
    printf("The decimal equivalent of a %d binary number = %d \n\n",binary_val,decimal_val);
	}
	else if(ch==2)
	{
	    int a[10],i;
	    int decimal_val=num1;
	    for(i=0;decimal_val>0;i++)
	    {
	        a[i]=decimal_val%2;
	        decimal_val=decimal_val/2;
	    }
	    printf("\nBinary equivalent of %d is= ",num1);
	    for(i=i-1;i>=0;i--)
	    {
	        printf("%d",a[i]);
	    }
	    printf("\n\n");
	}
	else
	{
        printf("Enter a valid unit choice number\n");
	}
}
