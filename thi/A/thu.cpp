#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int t,c;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
		for (int i=0; i<n; i++){
			int t=1;
			int k=a[i];
			while (k>0){
				int m=k%10;
				t=t*m;
				k=k/10;
			}
			for (int j=i+1; j<n; j++){
				int t1=1;
				int h=a[j];
				while (k>0){
					int m=h%10;
					t1=t1*m;
					h=h/10;
			}
				if(t1<t){
			c=a[i];
			a[i]=a[j];
			a[j]=c;
		}
		}
	
	}
	for (int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
}
	return 0;
}

