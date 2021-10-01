#include<stdio.h>
#include<math.h>
#include<string.h>

int main () {
    int row, column;
    scanf ("%d%d", &row, &column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i+j<column) {
                printf ("%c", 'A' + i + j);
            }
            else {
                printf ("%c", 'A' + column - j - 1);
            }
        }
        printf ("\n");
    }

    return 0;
}

