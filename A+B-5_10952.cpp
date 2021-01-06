#include<iostream>
using namespace std;


int main()
{
    int a;
    int b;
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    while(true)
    {
        cin>>a>>b;
        int c = a+b;
        if(a==0&&b==0)
        {
            break;
        }
        cout<<c<<"\n";
    }
}