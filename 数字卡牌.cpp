#include<stdio.h>
main()
{
	int a[10],i,m,n,t; 
	for(i=0;i<10;i++)
	{
		a[i]=2021; //���Ƹ�ֵ
	}
	for(m=1;;m++)    //��ǰ��ֵ
	{
		t=m;       //
		while(t!=0)    //�ж�һ�����Ƿ����ж����
		{
			n=t%10;   //�ж�һ�����ĸ���λ�����õ��Ŀ���
			t=t/10;	  //ȡ���ĸ�ʮ��ǧλ
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
			if(a[n]==0)  //���0-9�е�����һ�ֿ������꣬���˳�
				break;
		}
		if(a[n]==0)     //���0-9�е�����һ�ֿ������꣬���˳�
				break;

	}
	printf("%d\n",m);
}

