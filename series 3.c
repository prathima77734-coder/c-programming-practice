#include<stdio.h>
int series3 ();
int main (){
	double result;
	result=series3();
	printf("%.6f",result);
	return 0;
}
int series3 (){
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
		sum =sum+i/fact;
	}
	return sum ;
}