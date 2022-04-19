#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    do
        n = get_int("Height: ");
    while (n<1 || n>8);

    for (int j=n; j>0; j--)
    {
        for (int i=j; i>0; i--)
        {
            if (i<j)
                printf(" ");
            if (i==1)
                {
                    for(int k=n; k>=j; k--)
                        printf("#");
                    printf("\n");
                }
        }
    }
}
