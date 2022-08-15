#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

bool iszhishu(int n)
{
    for (short i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    int n; cin >> n;
    int a = 1, b = n;
    if (n % 2 == 0)
    {a = 2; b = n / 2;}
    else
    {
        for (a = 3; a <= sqrt(n); a++)
        {
            if (n % a == 0)
            {
                b = n / a;
                if (iszhishu(a) && iszhishu(b)) break; 
            }
        }
        if ((a == 3) && (b != n / a)) a = 1;
    }
    printf("%d %d", a, b);
    return 0;
}