#include <stdio.h>

int main(){
		int n,x;
		scanf("%d", &n);
		printf("%d=",n);
		while(1){
			x=2;
			while(1){
				if(n%x==0){
						printf("%d",x);
						break;
					}
					x++;
				if(x>n)
					break;
			}
			n=n/x;
				if(x>n)
					break;
			printf("x");
		}
	return 0;
}
	


