#include <iostream>

int n=0;
int f=0;
int x=0;
int nr=0;

using namespace std;

int main()
{
    cin >> x;
    while (x!=0)
    {
        n=x%10;
        if (n%2==0){
            nr = nr*10+n;
        }
        x=x/10;
    }
    while (nr!=0)
    {
        n=nr%10;
        f=f*10+n;
        nr=nr/10;
    }
    cout << f;
}
