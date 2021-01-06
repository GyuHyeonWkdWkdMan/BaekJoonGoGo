#include <iostream>
using namespace std;

class Amount
{
private:
    int A;
    int B;

public:
    int Sum();
    void SetA(int A) { this->A = A; }
    void SetB(int B) { this->B = B; }
};
int Amount::Sum()
{
    int sum = A + B;
    return sum;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tmp1;
    int tmp2;
    int T;
    cin >> T;
    Amount *N = new Amount[T];
    for (int i = 1; i <= T; i++)
    {
        cin>>tmp1;
        cin>>tmp2;
        N[i].SetA(tmp1);
        N[i].SetB(tmp2);
    }
    for (int i = 1; i <= T; i++)
    {
        cout << "Case #" << i << ": " << N[i].Sum() << "\n";
    }
}