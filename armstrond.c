#include<stdio.h>
int main()
{
int n, temp,sum=0;rem=0;
scanf("%d",&n);
temp=n;
while(n!=0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(sum==temp)
printf("armstrong number");
else
printf("not armstrong number");
return 0;
}
