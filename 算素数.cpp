#include<stdio.h>
#include<math.h>
#include<iostream>
int main()
{
	
	int n,i=2;
	scanf("%d",&n);
	for(i=2;i<100;i++)
	{
		if(n<=1)
		{	
			printf("no"); 
		}
		else if(n==2)
		{
			printf("yes");
		}
		else{
			i=2;  
			while(n%i!=0&&i<=sqrt(n))
			i++;
			if(n%i==0)
			printf("no");
			else
			{
				printf("yes");
			}
		}
		system("pause");
	}
	
	return 0;
}
