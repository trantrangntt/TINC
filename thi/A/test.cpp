#include<stdio.h>


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n; 
		int m=1;
		scanf("%d",&n);
		int a[100];
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<n;i++){
			if(a[i]!=a[n-1-i])
			{
				m=0; break;
			}
			
		}
		if(m=0) printf("NO");
		else printf("YES");
		
	printf("\n");		
	}
}
