#include<stdio.h>
#include<string.h>
int main()
{
    int t,count,length;
    char s[100000];
    scanf("%d",&t);
    while(t--)
    {
        memset(s,0,100000);
        scanf("%s\n",&s);
        count=0;
        length=strlen(s);
        for(int j=0;j<length;j++)
        {
            if(s[j]=='B')
            {
                if(s[j-1]=='W') {s[j-1]='C';count++;}
                if(s[j-2]=='W') {s[j-2]='C';count++;}
                if(s[j+1]=='W') {s[j+1]='C';count++;}
                if(s[j+2]=='W') {s[j+2]='C';count++;}
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
