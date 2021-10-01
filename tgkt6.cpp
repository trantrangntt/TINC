#include<stdio.h>
int main(){
	int t,a,k=1;
	scanf("%d",&t);
	for (int i=1; i<=t; i++){
		for (int j=1; j<=i; j++){
			if (i%2!=0){
				printf("%c ",k + 96);
				k++;//in truowsc cong sau
			}
				else {
						a=k+i-j;
					printf("%c ",a + 96);
					a--;
				}
	}
	if (i%2==0) k=k+i;
		printf("\n");
}

}
