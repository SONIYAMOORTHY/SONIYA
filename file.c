#include<stdio.h>
int main()
{
int n,a[10000],i,j,t;
scanf("%d ",&n);
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("The second biggest element of an array is %d",a[1]);
printf("The smallest element in an array is %d",a[n-1]); 

}
