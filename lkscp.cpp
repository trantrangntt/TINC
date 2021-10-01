#include<stdio.h>
#include<math.h>
int cp(int n){
	int h;
	h=sqrt(n);
	if (h*h==n) return 1;
	return 0;
}
int main(){
	int a,b,dem=0;
	scanf("%d%d",&a,&b);
	for (int i=a; i<=b; i++){
		if (cp(i)) dem++;
	}
	printf("%d\n",dem);
	
	for (int i=a; i<=b; i++){
		if(cp(i)) printf("%d\n",i);
	}
}

