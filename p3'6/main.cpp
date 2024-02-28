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
    b=x;
    max1=x%10;
    while (x!=0)
    {
        n=x%10;
        if (n>max1){
            max1 = n;
        }
        x=x/10;
    }
    x=b;
    while (x!=0)
    {
        n=x%10;
        if (n==max1){
            k+=1;
        }
        x=x/10;
    }
    cout << max1 << " "<< k;
}

