#include<stdio.h>
#include<string.h>
int demsotu(char *s);
int main()
{
	int t;
	scanf ("%d\n",&t);
	while (t--){
		char s[90];
   	   scanf("%d",&s);
    	gets(s);
    	int kq = demsotu(s);
		printf("%d",kq);
		printf ("\n");
	}

}
int demsotu(char *s)
{
	int n = strlen(s),i;
	int dem = 0;
	if(s[0]!=' ')
		dem = 1;
	for( i = 0;i < n-1; i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
			dem++;
	}
	return dem;
}
