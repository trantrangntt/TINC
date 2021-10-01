#include<stdio.h>
#include<math.h>
int nt(int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int tn(int n){
	long long m, temp=0;
	m=n;
	while (m>0){
		temp=temp*10+m%10;
		m/=10;
	}
	if (temp==n) return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	for (int i=0; i<t; i++){
		int a,b,dem=0;
		scanf("%d%d",&a,&b);
		for (int j=a; j<=b; j++){
			if (nt(j)==1 && tn(j)==1) {
				printf("%d ",j);
//				dem++;
//			}
//			if (dem>=10){			
//				printf("\n");dem=0;
//			}
//				
//		
//	
//	}	printf("\n");
	printf("\n");
}

}}
}

