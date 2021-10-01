#include<stdio.h>
int ucln(int a, int b){
	while (a!=b){
		if (a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
//int bcnn(int a, int b){
//	int c=ucln(a,b);
//	return (a*b)/c;
//}
int main(){
	int t;
	for (int i=0; i<t ;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		int	m=ucln(a,b);
		int	d=a * b / m;
		printf ("%d %d", d,m);
		printf ("\n");
	}
	
}

