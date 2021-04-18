#include<stdio.h>
int main()
{
  int i,n,r,sum=0,count;
  scanf("%d",&n);
  for(i=10;i>=1;i--)
  {
    r=n%10;
    sum=sum+r*i;
    n=n/10;
    count++;
  }
  if(count==10)
  {
    if(sum%11==0)
     printf("Legal ISBN\n");
    else
     printf("Illegal ISBN\n");
  }
  else 
   printf("Illegal ISBN\n");
  return 0;
}
