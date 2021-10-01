#include<stdio.h>
#include<math.h>
int nt(int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main(){
	int a;
	scanf("%d",&a);
	int i=2,dem=0;
	while (dem<a){
		if (nt(i)) {
			printf("%d\n",i);
			dem++;
		}
		i++;
	}
	
}

