#include<stdio.h>
int gcd();
int main (){
	int result;
	result=gcd();
	printf("gcd id %d",result);
	return 0;
}
int gcd(){
	int a,b,dividend,divisor,r;
	printf("enter 2 numbers:\n");
	scanf("%d %d ",&a,&b);
	if(a>b){
		dividend=a;
		divisor=b;
	}
	else {
		dividend=b;
		divisor=a;
	}
	while(divisor>0){
		r=dividend%divisor;
		dividend=divisor;
		divisor=r;
	}
	return dividend;
}