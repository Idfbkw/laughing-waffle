#include<stdio.h>
int main() 
{
	
	int i,n,j;
	double a=0,b=0,m=0,p=0;
	scanf("%d",&n);//�������� 
	for(i=1;i<=n;i++)
	{
		scanf("%d",&j);//ÿ�е�ѧ���÷�	
		if(j>=60)
		{
			m++;
		}
		if(j>=85)
		{
			p++;
		}
	}	
	a=m/n*100;
	b=p/n*100;
	printf("%.f%%\n%.f%%",a,b);
	
} 
