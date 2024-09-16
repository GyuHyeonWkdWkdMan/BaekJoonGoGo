#include <iostream>
#include <cstring>
using namespace std;

int CycleCnt(int A, int B, int C)
{
    int cnt = 0;

    while (true) //tmp != C
    {
        cnt++;
        int tmp = A + B;
        int result = B*10+tmp%10;
        if(result==C)
        {
            break;
        }
        A=result/10;
        B=result%10;
    }
    return cnt;
}

int main()
{
    int a;
    int b;
    int c;
    cin >> c;

    a = c / 10;
    b = c % 10;
    cout<<CycleCnt(a,b,c);
}