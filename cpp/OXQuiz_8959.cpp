#include<iostream>
using namespace std;


int main()
{
    int Quiz_cnt;
    cin>>Quiz_cnt;
    string* Quiz = new string[Quiz_cnt];
    int* score = new int[Quiz_cnt];
    for(int i = 0 ; i < Quiz_cnt ; i++)
    {
        cin >> Quiz[i];
        score[i] = 0;
    }
    for(int i = 0 ; i < Quiz_cnt ; i++)
    {
        int j = 0;
        int cnt= 0;
        while(Quiz[i][j])
        {
            if(Quiz[i][j] == 'O')
            {
                cnt++;
                score[i]+=cnt;
            }
            else
            {
                cnt = 0;
            }
            j++;
        }
    }
    for(int i = 0 ; i < Quiz_cnt ; i++)
    {
        cout<<score[i] << endl;
    }
}