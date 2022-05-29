#include<bits/stdc++.h>

using namespace std;

int primeChecker(int n)
{

    for(int i=2; i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }

    return n;

}

int main()
{
    int i;
    for(i=2;i<=100;i++)
    {
        if(primeChecker(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
