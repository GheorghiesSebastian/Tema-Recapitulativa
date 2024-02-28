#include <iostream>

int x = 0;
int n =0;
int nr =0;
int b=0;

using namespace std;

int main()
{
    cin >> x;
    b= x;

    while (x!=0){
        n = x%10;
        x =x/10;
        nr = nr*10+n;
    }
    if (nr==b){
        cout << "este palindrom";
    }
}
