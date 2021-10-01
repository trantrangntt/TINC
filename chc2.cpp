#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while (t--){
		int n;
		scanf("%d",&n);
		int dem=0;
		//if (n%2==0) dem++;
		for (int i=2; i<=sqrt(n); i+=2){
			if (n%i==0) dem++;
			if ((n/i)%2==0 && n/i!=i ) dem++;
		}
		printf ("%d",dem);
		printf("\n");
	}
	
	
}

