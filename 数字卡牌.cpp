#include<stdio.h>
main()
{
	int a[10],i,m,n,t; 
	for(i=0;i<10;i++)
	{
		a[i]=2021; //卡牌赋值
	}
	for(m=1;;m++)    //当前数值
	{
		t=m;       //
		while(t!=0)    //判断一个数是否已判断完成
		{
			n=t%10;   //判断一个数的各个位上所用到的卡牌
			t=t/10;	  //取数的个十百千位
			switch(n)
			{
				case 1:a[1]--;break;
				case 2:a[2]--;break;
				case 3:a[3]--;break;
				case 4:a[4]--;break;
				case 5:a[5]--;break;
				case 6:a[6]--;break;
				case 7:a[7]--;break;
				case 8:a[8]--;break;
				case 9:a[9]--;break;
				case 0:a[0]--;break;
			}
			if(a[n]==0)  //如果0-9中的其中一种卡牌用完，则退出
				break;
		}
		if(a[n]==0)     //如果0-9中的其中一种卡牌用完，则退出
				break;

	}
	printf("%d\n",m);
}

