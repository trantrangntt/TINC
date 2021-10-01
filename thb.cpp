#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int m,to=0;
		while(n>0){
			m=n%10;
			to+=m;
			n/=10;
		}
		if (to%10==0)	printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}

