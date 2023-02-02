#include<stdio.h>
int main()
{
	int num,originalnum,remainder,result=0;
	printf("enter integer");
	scanf("%d",&num);
	originalnum=num;
	while(originalnum!=0)
	{
		remainder=originalnum%10;
		result=remainder*remainder*remainder;
		originalnum=originalnum/10;
	}
    if(result==num)
    printf("%d is amstrong number");
    else
    printf("%d is not amstrong number");
    return 0;
}
