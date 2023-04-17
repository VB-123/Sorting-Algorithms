#include <stdio.h>
#include <stdlib.h>

int box(int var1, int rows, int columns);
int multiply(int m, int n);

// taking input
int main()
{
    int num1, num2;
    printf("Enter number: ");
    scanf("%d", &num1);
    printf("Enter number upto which the table is required: ");
    scanf("%d", &num2);
    box(num1, num2+1, 17);
    return 0;
}

function to multiply and print the table along with the |
int multiply(int m, int n)
{
    printf("|%2d * %2d = %3d  |\n", m, n, m*n);
    return 0;
}

// size of the top side is taken for alignment
int n = sizeof("+-----------------+");

//function to print the box
int box(int var1, int rows, int columns)
{
    //iterate each row
    for (int i = 0; i <= rows; i++)
    {
        //setting a flag variable to break out of loop 
        int printed_result = 0;
        //  iterate each coloumn
        for (int j = 0; j < columns; j++)
        {
            //check for corners
            if ((i==0 && j==0) || (i==0 && j==columns-1) || (i==rows && j==0) || (i==rows && j==columns-1))
            {
                printf("+");
            }
            //print the - in the top and bottom
            else if (i==0 || i==rows)
            {
                printf("-");
            }
            //print the table inside
            else
            {
                if (i>0 && i<rows && !printed_result)
                {
                    multiply(var1, i);
                    printed_result = 1;
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
