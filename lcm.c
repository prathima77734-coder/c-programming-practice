#include<stdio.h>
int lcm();
int main (){
	int result;
	printf("lcm is %d",result);
	return 0;
}
int lcm(){
	int a,b,max;
	printf("enter 2 number :\n");
	scanf("%d %d",&a,&b);
	if(a>b)
	max=a;
	else 
	max=b;
	while(1)
{
if(max%a==0 && max%b==0)
break;
max++;
}
return max;
}