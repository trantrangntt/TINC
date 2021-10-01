#include<stdio.h>
#include<math.h>
#include<string.h>
int snt(int a){
	if (a<2) return 0;
	for (int i=2; i<=sqrt(a); i++){
		if (a%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n; 
		scanf("%d", &n);
		if(snt(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}

