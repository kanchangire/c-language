#include<stdio.h>
void main()
{
	int num,rem,sum,ori;
	printf("enter your number ");
	scanf("%d",&num);
	ori=num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(ori==sum)
	{
		printf("%d number is armstrong ",ori);
	}
	else
	{
		printf("%d number is not armstrong",ori);
	}
}
