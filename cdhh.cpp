#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int m,n; 
	scanf("%d%d",&m,&n);
	int t[50][50];
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			scanf("%d",&t[i][j]);
		}
	}
	int a,b,c; 
	scanf("%d%d",&a,&b);
	for (int i=0; i<m; i++){
		if (i==a){
			c=t[a][i];
			t[a][i]=t[b][i];
			t[b][i]=c;
		}
	}
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			printf("%d",t[i][j]);
		}
		printf("\n");
	}	
	return 0;
}

