int numsys(int ch,int num1)
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
		return decimal_val;
	}
}
