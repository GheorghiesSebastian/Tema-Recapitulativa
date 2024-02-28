#include <iostream>

int x=0;
int b=0;
int c1=0;
int c2=0;
int c3 =0;
int h=0;
int c4=0;
int k=0;

using namespace std;

int main()
{
    cin >> x;
    int b=x;
    while (x!=0)
        {
        x =x/10;
        k+=1;
        }
    if (k>2 && k<<10){
        x=b;
        while (x!=0)
        {
            if(x>=0 && x<10)
                c1 = x;
                x=x/10;
        }
                x=b;
        while (x!=0)
        {
            if(x>=9 && x<100){
                    h = x%10;
                c2 = h;
            }
            x=x/10;
        }
        x=b;
        while (x!=0)
        {
            if(x>9 && x<100){
                    h = x%100;
                c4 = h;
            }
            x=x/10;
        }
        x=b;
        c3 = x%100;
        cout << c1 << " " << c2 << " " << c3 << " "<<c4;
    }
}
