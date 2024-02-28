#include <iostream>

int x = 0;
int p =1;
int n=0;
int s=0;
int k=0;

using namespace std;

int main()
{
    cin >> x;

    while (x!=0){
        n = x%10;
        x =x/10;
        k +=1;
        s += n;
        p = p*n;
    }
    cout << k << " " << s << " " << p;
}
