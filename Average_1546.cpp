#include<iostream>
using namespace std;


int main()
{
    int cnt;
    cin>>cnt;
    float* subjects = new float[cnt];
    float average = 0;
    for(int i = 0 ; i < cnt ; i++)
    {
        cin>>subjects[i];
    }
    int max = subjects[0];
    for(int j = 1 ; j < cnt ; j++)
    {
        if(max<subjects[j]) 
        {
            max=subjects[j];
        }
    }
    for (int k = 0 ; k < cnt ; k++)
    {
        average += subjects[k]/max*100;
    }
    cout<< average/cnt;
}