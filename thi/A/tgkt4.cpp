#include <stdio.h>
#include <stdlib.h>

int main()
{

   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
      {
          for(int j=2; j<=i*2;j+=2)
               printf("%c",j+62);

          for( int k=i*2-2; k>=2; k-=2)
            printf("%c",k+62);


       printf("\n");
      }


}
