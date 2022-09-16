#include<stdio.h>
#include<time.h>
#include<math.h>
clock_t start,stop;
double duration;
#define MAXK 1e7
double f1(int n,double a[],double x);
double f2(int n,double a[],double x);

int main()
{
	int i;
	double a[MAXK];
	for (i=0;i<MAXK;i++) a[i]=(double)i;
	
	start=clock();
	for (i=0;i<MAXK;i++)
	f1(MAXK-1,a,1.1);
	stop=clock();
	duration=((double)(stop-start))/CLK_TCK/MAXK;
	printf("ticks1=%f\n",(double)(stop-start));
	printf("duration1=%6.2e\n",duration);
//	f1(MAXN-1,a,1.1);
//	stop=clock();
//	duration=((double)(stop-start))/CLK_TCK;
//	printf("duration1=%6.2e\n",duration);
//	start=clock();
//	f2(MAXN-1,a,1.1);
//	stop=clock();
//	duration=((double)(stop-start))/CLK_TCK;
//	printf("duration2=%6.2e\n",duration);
	
	return 0;
	
 } 
