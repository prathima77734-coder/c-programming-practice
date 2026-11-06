#include<stdio.h>
int main(){
	int a,b,max,l;
	printf("enter 2 numbers \n");
	scanf("%d %d",&a,&b);
	if(a>b)
	max=a;
	else
	max=b;
	while (l)
	{
		if(max%a==0 && max%b==0)
		break;
		max++;
	}
	if("LCM of %d & %d is %d",a,b,max);
	return 0;
}