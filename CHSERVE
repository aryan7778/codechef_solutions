#include<stdio.h>
int main()
{
	
	long int i,t,p1,p2,k;
	scanf("%ld",&t);
	long int a[t];
	for( i=1;i<=t;i++)
	{
		scanf("%ld %ld %ld",&p1,&p2,&k);
		if(((p1+p2)<k)||(((p1+p2)/k)%2==0))
	     	a[i]=1;
	    else
	        a[i]=0;
	}
	for(i=1;i<=t;i++)
	{
		if(a[i]==1)
		printf("CHEF \n");
		else
		printf("COOK \n");
	}
return 0;	
}
