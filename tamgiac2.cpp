#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for (int i=1; i<=a; i++){
	if (i%2!=0)
	{
		for (int j=1; j<=2*i-1; j+=2)
		printf("%d",j);
		
	}
	else 
		for (int j=2; j<=2*i; j+=2)
		printf("%d",j);
	printf("\n");
	}
}

