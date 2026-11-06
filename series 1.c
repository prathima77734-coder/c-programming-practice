#include<stdio.h>
double series1 ();
int main (){
	int result;
	result=series1();
	printf("%.6f",result);
	return 0;
}
double series1 (){
	int n,i,j;
	double fact,sum=0;
	printf("enter n value :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact = fact *j;
		}
		sum =sum + 1.0/fact;
	}
	return sum ;
}