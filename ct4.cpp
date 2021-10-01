#include<stdio.h>
int main(){
	int t;
	scanf("%d\n",&t);
	char s[1000];
	for (int i=0; i<t; i++){
		scanf("%c",&s[i]);
	}
	int x=0,y=0, huong=2;
	for (int i=0; i<t; i++){
		if (huong ==2){
			if (s[i]=='A') {
				x--;
				huong=3;
			}
			if (s[i]=='B') {
				y--;
				huong=4;
			}
			if (s[i]=='C') {
				y++;
				huong=2;
			}
			if (s[i]=='D') {
				x++;
				huong=1;
			}
		}
	else	if (huong ==1){
			if (s[i]=='A') {
				y++;
				huong=2;
			}
			if (s[i]=='B') {
				x--;
				huong=3;
			}
			if (s[i]=='C') {
				x++;
				huong=1;
			}
			if (s[i]=='D') {
				y--;
				huong=4;
			}
		}
	else	if (huong ==3){
			if (s[i]=='A') {
				y--;
				huong=4;
			}
			if (s[i]=='B') {
				x++;
				huong=1;
			}
			if (s[i]=='C') {
				x--;
				huong=3;
			}
			if (s[i]=='D') {
				y++;
				huong=2;
			}
		}
	else	if (huong ==4){
			if (s[i]=='A') {
				x++;
				huong=1;
			}
			if (s[i]=='B') {
				y++;
				huong=2;
			}
			if (s[i]=='C') {
				y--;
				huong=4;
			}
			if (s[i]=='D') {
				x--;
				huong=3;
			}
		}
	}
	printf ("%d %d",x,y);
}

