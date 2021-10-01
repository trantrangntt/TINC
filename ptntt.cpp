#include<stdio.h>
int main(){
	int t;
//	scanf("%d",&t);
//	for (int i=0; i<t; i++){
		int n;
		 scanf("%d",&n);
		 for (int j=2; j<=n; j++){
		 	while(n%j==0){
		 		printf ("%d",j);
		 	//	dem++;
		 		
		 		n=n/j;
		 		if (n>1) printf("x");
			 }
		 }
	//	 printf("\n");
	}
	
//}


