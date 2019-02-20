#include<stdio.h>
#include<match.h>
int main(void)
{
int i,n,t,a=0,b=0;
scanf("%d",&n);
printf("%d\n%d\n",a,b);
for(i=0;i<n-1;i++)
{
t=a+b;
a=b;
b=t;
printf("%d\t",t);
}
return 0;
}
