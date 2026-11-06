#include<stdio.h>
int main (){
	int f=0,s=1,t,n,c=2;
	printf("enter n value \n");
	scanf("%d",&n);
	printf("%d\t %d\t",f,s);
	do{
		t=f+s;
		printf("%d\t",t);
		f=s;
		s=t;
		c++;
	   } while (c > n);
	   return 0;
}