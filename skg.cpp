#include<stdio.h>
#include<string.h>
int main(){
	int t ;
	char x;
	scanf("%d\n",&t);
	while (t--){
		
		char a[10000];
		
		gets(a);
		int dem=0;
		for (int i=0; i<strlen(a)-1; i++){
			if (a[i+1]-a[i]<0) dem++;
		}
		if(dem==0) printf("YES");
		else printf ("NO");
		printf("\n");
	}
}

