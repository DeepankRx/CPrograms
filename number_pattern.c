#include <stdio.h>
int main()
{
int n,i,j;
printf("~~~~Deepank Pushpad~~~~\n");
scanf("%d",&n);
int p=n;
for(i=1;i<=n;i+=2)
{
int k=(i-1)*n+1;
for(j=0;j<n-1;j++)
{
printf("%d*",k);
k++;
}
printf("%d",k);
printf("\n");
}
if(n%2!=0)
{
p=n-1;
}
for( i=p;i>0;i-=2)
{
int k=(i-1)*n+1;
for(j=0;j<n-1;j++)
{
printf("%d*",k);
k++;
}
printf("%d",k);
printf("\n");
}
return 0;
}
