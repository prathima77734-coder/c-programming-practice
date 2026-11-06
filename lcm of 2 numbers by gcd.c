#include<stdio.h>
int main (){
	int a,b,dividend,divisor,r,l;
	scanf("%d %d",&a,&b);
	if(a>b){
		dividend = a;
		divisor = b;
	}
		else {
		if (a<b)
		dividend = b;
		divisor = a;
	}
	
	while(divisor>0)
	{
		r=dividend % divisor;
		dividend = divisor;
		divisor = r;
	}
	printf("GCD of %d & %d is %d",a,b,dividend);
	l=(a*b)/dividend;
	printf(" lcm of %d & %d is %d",a,b,l);
	return 0;
	
}
