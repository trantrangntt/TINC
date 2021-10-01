#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int n, a[30],dem=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=1;i<=n;i++){
			if(a[i]==a[i-1]){
				dem++;
			}
		}
		printf("%d\n",dem);
	}
}
