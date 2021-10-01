#include<stdio.h>
#include<conio.h>
void bubblesort(float a[], int n)
{
    int i=0;
    while(i<n)
    {
        int j=n-1;
        while(j>=i)
        {
            if(a[j-1]>a[j])
            {
                float temp =a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            j--;
        }
        i++;
    }
}
void doctep(float a[], int &n)
{
    FILE*fin;
    fin=fopen("dayso.in", "r");
    fscanf(fin, "%d", &n);
    int i=0;
    while(i<n)
    {
        fscanf(fin, "%f", &a[i]);
        i++;
    }
    fclose(fin);
}
void ghitep(float a[], int n)
{
    FILE*fout;
    fout=fopen("ketqua.out", "w");
    fprintf(fout, "%d\n", n);
    int i=0;
    while(i<n)
    {
        fprintf(fout, "%.2f ", a[i]);
        i++;
    }
    fclose(fout);
}
main()
{
    float a[100];
    int n;
    doctep(a,n);
    bubblesort(a,n);
    ghitep(a,n);
}
