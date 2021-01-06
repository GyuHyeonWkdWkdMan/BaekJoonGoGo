#include <iostream>
using namespace std;

int main()
{
    int cnt;
    cin >> cnt;
    int *array = new int[cnt];
    for (int i = 0; i < cnt; i++)
    {
        cin >> array[i];
    }
    int max = array[0];
    int min = array[0];
    for (int i = 1; i < cnt; i++)
    {
        if (max < array[i])
            max = array[i];
        if (min > array[i])
            min = array[i];
    }
    cout << min << " " << max << endl;
}