// print the following code
//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *
// * * * * * * *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int check;
    for (int i = 1; i <= n; i++)
    {
        check = 1;
        for (int j = 1; j <= n - 1 + i; j++)
        {
            if (j >= n - i + 1)
            {
                if (check)
                {
                    printf("*");
                    check = 0;
                }
                else
                {
                    printf(" ");
                    check = 1;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        check = 1;
        for (int j = 1; j <= n * 2 - i; j++)
        {
            if (j >= i)
            {
                if (check)
                {
                    printf("*");
                    check = 0;
                }
                else
                {
                    printf(" ");
                    check = 1;
                }
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}