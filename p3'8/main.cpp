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
        k= (x%100)/10;
        if (k>b){
            cout << (" nu este crescator");
        }
        x=x/10;
    }
}

