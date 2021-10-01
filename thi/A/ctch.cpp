#include<stdio.h>
#include<string.h>

int main() {
   char s[100];
   gets(s);
   for(int i=0;i<strlen(s);i++){
        if(97<=s[i]&&s[i]<=122) printf("%c",s[i]-32);
        else printf("%c",s[i]);}
}
