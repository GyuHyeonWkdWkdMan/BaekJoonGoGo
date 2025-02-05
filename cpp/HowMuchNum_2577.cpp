#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    int A;
    int B;
    int C;
    int result;
    string result_s;
    int cnt[10] = {0,};
    int i = 0;
    cin>>A;
    cin>>B;
    cin>>C;
    result = A*B*C;
    result_s = to_string(result);
    while(result_s[i])
    {
        switch(result_s[i]){
            case '0':
                cnt[0]++;
                break;
            case '1':
                cnt[1]++;
                break;
            case '2':
                cnt[2]++;
                break;
            case '3':
                cnt[3]++;
                break;
            case '4':
                cnt[4]++;
                break;
            case '5':
                cnt[5]++;
                break;
            case '6':
                cnt[6]++;
                break;
            case '7':
                cnt[7]++;
                break;
            case '8':
                cnt[8]++;
                break;
            case '9':
                cnt[9]++;
                break;
        }
        i++;
    }
    for(int i = 0 ; i < 10 ; i++)
    {
        cout<<cnt[i]<<endl;
    }
}