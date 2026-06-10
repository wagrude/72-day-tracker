#include <bits/stdc++.h>
using namespace std;

void gcd()
{
    int a, b;
    a = 12;
    b = 24;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i;
            break;
        }
    }
}
int gcdeuclidean()
{
    int a, b;
    a = 12;
    b = 24;
    while (a>0 &&b>0)
    {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
    
}
int main(void)
{

    gcdeuclidean();
    return 0;
}