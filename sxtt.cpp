#include<stdio.h>
#include<math.h>
#include<string.h>
struct thisinh{
	int ma;
	char ten[100];
	char ns[100];
	double d1,d2,d3,dt;
};
int main(){
	int n;
	scanf("%d",&n);
	struct thisinh t[n],std;
	for (int i=0; i<n; i++){
		scanf("\n");
		gets(t[i].ten);
		scanf("\n");
		gets(t[i].ns);
		scanf("\n");
		scanf("%lf %lf %lf",&t[i].d1,&t[i].d2,&t[i].d3);
		t[i].ma=i+1;
		t[i].dt=t[i].d1+t[i].d2+t[i].d3;
	}
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (t[i].dt<t[j].dt){
				std=t[i];
				t[i]=t[j];
				t[j]=std;
			}
		}
	}
	for (int i=0; i<n; i++){
		printf("%d %s %s %.1lf\n",t[i].ma,t[i].ten,t[i].ns,t[i].dt);
	}
	return 0;
}

