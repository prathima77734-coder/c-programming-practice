#include<stdio.h>
int main(){
int i,j,n;
printf("Enter the values of n \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{ 
if (i==n||j==n||i+j==n+1)
printf("*");
else
printf(" ");
}
printf("\n");
}
 return 0;
}