#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the number to check if prime or not ");
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
	 if(n%i==0)
	    {
	 	sum=sum+1;
		}	
	}
	if(sum>=1)
	{
		printf("Not a prime number");
	}
	else
	{
		printf("Prime number");
		
	}
}
