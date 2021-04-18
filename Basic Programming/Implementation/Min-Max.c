#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],temp,min=100,max=0;
	for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
	 if(min>a[i])min=a[i];
	 if(max<a[i])max=a[i];
	}
	min+=1;
	while(min<max){
		temp=min;
		for(int i=0;i<n;i++){
			if(a[i]==min){
				min++;
			}
		   }
		if(temp==min){
			printf("NO");
            exit(0);
		}
	}
	printf("YES");
	return 0;
}
