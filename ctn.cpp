#include<stdio.h>
#include<math.h>
#include<string.h>
struct sx{
	int ma;
	char ten[100];
	char nhom[100];
	float mua;
	float ban;
	float lai;
};
int main(){
	int n;
	scanf("%d",&n);
	struct sx t[n],c;
	for (int i=0; i<n; i++){
		scanf("\n");
		gets(t[i].ten);
		scanf("\n");
		gets(t[i].nhom);
		scanf("\n");
		scanf("%f%f",&t[i].mua,&t[i].ban);
		t[i].lai=t[i].ban-t[i].mua;
		t[i].ma=i+1;
	}
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (t[i].lai<t[j].lai){
				c=t[i];
				t[i]=t[j];
				t[j]=c;
			}
		}
	}
	for (int i=0; i<n; i++){
		printf("%d %s %s %.2f\n",t[i].ma,t[i].ten,t[i].nhom,t[i].lai);
	}
	return 0;
}

