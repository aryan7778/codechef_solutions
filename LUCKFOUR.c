#include<stdio.h>
int main()
{
   long	int num;
   int t,c;
	scanf("%d",&t);
	while(t--)
	{   c=0;
		scanf("%ld",&num);
		while(num>0)
		{
			if(num%10==4)
		    	c++;
			num=num/10;
	
		}
		printf("%d \n",c);
	}
return 0;
}
