#include<stdio.h>
int min(int x,int y){
	if(x>y) return y;
	return x;
}
int max(int x,int y){
	if(x>y) return x;
	return y;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int x,vt1,vtn,t=0;
		for (int i=1;i<=n;i++){
			scanf("%d",&x);
			if (x==n) vtn=i;
			if (x==1) vt1=i;
		}
		int a,b;
		a=min(vtn,vt1); b=max(vtn,vt1);
		int kc=b-a+1,dau=a-1,cuoi=n-b;
		t=min(min(kc+dau,kc+cuoi),dau+cuoi+2);
		printf("%d\n",t);
	}
}
