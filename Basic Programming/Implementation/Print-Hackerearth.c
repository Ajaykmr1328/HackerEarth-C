#include<stdio.h>
int smallest(int count[7])
{
    int smallest = 1000000;
    for(int i=0;i<7;++i)
    {
        if(count[i] < smallest)
        {
            smallest=count[i];
        }
    }
    return smallest;
}
int main()
{
    int n,count[7];
    count[0]=0,count[1]=0,count[2]=0,count[3]=0,count[4]=0,count[5]=0,count[6]=0;
    char s[1000000];
    scanf("%d\n%s",&n,&s);
    for(int i=0;i<n;i++)
    {
      switch(s[i])
      {
        case 'h':
        count[0]++;
        break;
        case 'a':
        count[1]++;
        break;
        case 'c':
        count[2]++;
        break;
        case 'k':
        count[3]++;
        break;
        case 'e':
        count[4]++;
        break;
        case 'r':
        count[5]++;
        break;
        case 't':
        count[6]++;
        break;
      }
    }
    count[0]/=2,count[1]/=2,count[4]/=2,count[5]/=2;
    printf("%d",smallest(count));
    return 0;
}
