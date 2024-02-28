#include <iostream>

int x=0;
int b=0;
int n=0;
int k=0;
int max1=0;

using namespace std;

int main()
{
    cin >> x;
    n = x%10;
    while (x!=0)
    {
        b = x%10;
        if (b!=n){
            cout << (" nu este identic");
        }
        x=x/10;
    }
}

