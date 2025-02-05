#include <stdio.h>
#include <stdlib.h>

int main()
{
    int one = 1;
    int ten = 1;
    int hunnit = 1;
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                one = k;
                ten = j * 10;
                hunnit = i * 100;
                if (one + ten + hunnit == b)
                {
                    ten = j;
                    hunnit = i;
                    printf("%d\n%d\n%d\n%d",one*a,ten*a,hunnit*a,a*b);
                    return 0;
                }
            }
        }
    }
    
}