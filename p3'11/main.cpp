#include <iostream>

using namespace std;

int main()
{
    cin >> x;
    b=x;
    while (x!=0)
    {
        k+=1;
        x=x/10;
    }
    x=b;
    f=x;
    while (x!=0)
    {
        n=x%10;
        if (max < n)
            {
            max = n;
        }
        x=x/10;
    }
    while (f!=0)
        {
            n1=f%10;
            if (n1==n){
                k2+=1;
            }
            f=f/10;
        }
}

//plan : scot maximul , gasesc de cate ori se gaseste in numar , fac un numar nou care il oglindeste , iar dupa accea parcurg numarul initial si elimin maximurile
