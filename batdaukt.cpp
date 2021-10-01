#include<stdio.h>
int main(){
	int a,m,t,h,n; 
	scanf("%d",&n);
	for (int i=0; i<n; i++){
		scanf("%d",&a);
		t=a;
		m=a%10;
		while(t>10){
			t=t/10;
			}
		if( t==m) printf("YES\n");
			else printf("NO\n");
	}
}
