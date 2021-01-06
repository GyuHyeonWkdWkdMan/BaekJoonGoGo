#include<iostream>
using namespace std;

class FastSum{
    private:
        int A;
        int B;
    public:
        int Sum();
        void SetA(int A) {this->A = A;}
        void SetB(int B) {this->B = B;}
};

int FastSum::Sum()
{
    int sum = A+B;
    return sum;
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tmp1;
    int tmp2;
    int T;
    cin>>T;
    FastSum* N = new FastSum[T];
    for(int i=0;i<T;i++)
    {
        cin>>tmp1>>tmp2;
        N[i].SetA(tmp1);
        N[i].SetB(tmp2);
    }
    for(int i=0;i<T;i++)
    {
        cout<<N[i].Sum()<<"\n";
    }
}