#include <stdio.h>

int main()
{
	int a,b;
	int c,ans=-1,i;
	scanf("%d %d %d",&a,&b,&c);
	/*double fracinp=(a/b);
	int fracint=(a/b);
	double frac=fracinp-fracint;*/
	/*printf("%0.18lf\n", frac);*/
	/*int arr[18]={0};int i; */
	for (i = 0; i < 100000; i++)
	{
		a*=10;
		if (a/b==c)
		{
			ans=i+1;
			break;
		}
		else
		{
			a=a%b;
		}
		/*int dig=10*frac;*//*
		arr[i]=dig;
		frac=(10*frac)-dig;*/
	}
	/*for (i = 0; i < 6; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");*/
	/*for (i = 0; i < 18; i++)
	{
		if (arr[i]==c){
			ans=i+1;
			break;
		}
	}*/
	printf("%d\n", ans);
	return 0;
}