#include <iostream>

int x=0;
int y=0;
int b=0;
int i=0;
int j=1;
int k=0;

using namespace std;

int main()
{
    cin >>x;
    b=x;
    cin >>y;
    while (x!=0)
    {
        x=x/10;
        k+=1;
    }
    for (i=0;i<k;++i){
        j=j*10;
        }
    y=y*j+b;
    cout << y;
    x=b;


}
