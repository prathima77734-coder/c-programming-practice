#include<stdio.h>
int series2 ();
int main (){
	int result;
	result=series2();
	printf("%d",result);
	return 0;
}
int series2 (){
	int n,i,j;
	int fact,sum=0;
	printf("enter n value :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact = fact *j;
		}
		sum =sum +fact;
	}
	return sum ;
}