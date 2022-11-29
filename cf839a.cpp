#include<iostream>
using namespace std;
int main()
{
    int a, b, sum = 0, days = 0;
    cin >> a >> b;
    int c[a];
    for(int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
    for(int i = 0; i < a; i++)
    {
        if(c[i] < 8)
        {
            sum = sum + c[i];
        }
        if(c[i] >= 8)
        {
            sum = sum + 8;
        }
        days = days + 1;
        if(sum > b)
        {
            cout << days;
        }
    }
    if(sum < b)
    {
        cout << "-1";
    }
}