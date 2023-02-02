#include<stdio.h>
int main()
{
	int initial,final,a,b,c;
	printf("enter range");
	scanf("%d",&final);
	printf("pythagorean triplet of a given range");
	for(a=1;a<=final;a++)
	{
		for(b=a;b<=final;b++)
		{
			for(c=b;c<=final;c++)
			{
			if(c*c==a*a+b*b)
			printf("%d,%d,%d",a,b,c);
		}
	}
}
return 0;
}
