#include<stdio.h>
int main(){
int i,j,m,n;
printf("Enter the values of m and n \n");
scanf("%d %d",&m,&n);
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{ 
printf("!");
}
printf("\n");
}
 return 0;
}