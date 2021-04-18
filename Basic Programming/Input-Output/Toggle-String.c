#include<stdio.h>
int main()
{
	char s[101];
	int i;
	printf("%s",s);
	gets(s);
	for(i = 0;s[i] != '\0'; i++) {
    if(s[i] >= 'a' && s[i] <= 'z')
	     s[i] = s[i] - 32;
		 else
		 s[i] = s[i] +32;
	}
	printf("\n%s",s);
	return 0;
}
