#include <stdio.h>
#include <string.h>

int main ()
{
   char str[50];
   int len;

   strcpy(str, "Hoc C co ban va nang cao tai QTM !!!");

   len = strlen(str);
   printf("Do dai cua chuoi:\n |%s| \nla bang:\n |%d|\n", str, len);
   
   return(0);
}
