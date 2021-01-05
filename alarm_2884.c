#include <stdio.h>

int main()
{
    int H;
    int M;
    scanf("%d", &H);
    scanf("%d", &M);
    if (M >= 45)
    {
        printf("%d %d", H, M - 45);
    }
    else if(H==0&&M<45)
    {
        printf("%d %d", H + 23, M + 60 - 45);
    }
    else
    {
        printf("%d %d", H - 1, M + 60 - 45);
    }
}