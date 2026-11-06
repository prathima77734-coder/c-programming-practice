#include<stdio.h>
int series4 ();
int main (){
	int result;
	result=series4();
	printf("%d",result);
	return 0;
}
int series4 (){
	int n,i,j;
	int fact,sum=0;
	printf("enter n value :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
		sum =sum +fact;
	}
	return sum ;
}