#include<stdio.h>
void AP (int a,int d,int n){
	for(int i=0;i<n;i++)
	printf("%d",a+i*d);
}
int main (){
	int a,d,n;
	scanf("%d%d%d",&a,&n,&d);
	AP(a,d,n);
	return 0;
}