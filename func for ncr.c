#include <stdio.h>
int fact (int);
int main (){
	int n,r,result;
	printf("enter n and r:\n");
	scanf("%d %d",&n,&r);
	result =fact(n)/(fact(r)*fact(n-r));
	printf("nCr = %d",result);
	return 0;
}
int fact(int n)
{
	int i,f=1;
	for (i=1;i<=n;i++)
	{
		f = f * i;
	}
	return f;
}