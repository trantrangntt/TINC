#include<stdio.h>
#include<math.h>
int main(){
	int n, k;
	scanf("%d %d",&n,&k);
	long long h=pow(2,k);
	long long gt=1;
	for (int i=1; i<=n; i++){
		gt=gt*i;
	}
	if (gt%h==0)
	 printf ("Yes");
	 else printf("N0");
	return 0;
}

