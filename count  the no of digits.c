#include<stdio.h>
int main (){
	int n,c=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	while(n>0)
	{
		c++;
		n=n/10;
	}
	printf("no of digits are %d",c);
	return 0;
}