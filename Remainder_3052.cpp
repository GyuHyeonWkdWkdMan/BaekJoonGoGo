#include<iostream>
using namespace std;


int main()
{
    int cnt=10;
    int array[10];
    int remainder[10];
    for(int i=0;i<10;i++)
    {
        cin>>array[i];
        remainder[i] = array[i]%42;
    }
    for(int j = 0; j < 10;j++)
    {
        for(int k = 0 ; k < j ; k++)
        {
            if(remainder[j]==remainder[k])
            {
                cnt--;
                break;
            }
        }
    }
    cout<<cnt;
}