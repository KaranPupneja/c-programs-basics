#include<stdio.h>
#include<string.h>
void main()
{
int a[10][10],i,n,j,big,sum=0,c;
printf("Enter the order of matrix");
scanf("%d",&n);
printf("Enter the element of array");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}

for(i=0;i<n;i++)
{
sum=sum+a[i][i];
sum=sum+a[i][n-i-1];
}
printf("Sum of diagonal elements are %d",sum);
}
