#include<stdio.h>
#include<math.h>
#include<string.h>
struct thisinh{
	int ma;
	char ten[100];
	float d1,d2,d3,dt;
};
int main(){
	int n;
	scanf("%d",&n);
	if (n==1){
		int m;
		struct thisinh t[m],tg;
		for (int i=1; i<=m; i++){
			t[i].ma=i;
			scanf("\n");
			gets(t[i].ten);
			scanf("\n");
			scanf("%f%f%f",&t[i].d1,,&t[i].d2,&t[i].d3);
			t[i].dt=t[i].d1+t[i].d2+t[i].d3;
			}
		}
	if (n==2){
		int k;
		scanf("%d",&k);
		
	}
	}
	return 0;
}

