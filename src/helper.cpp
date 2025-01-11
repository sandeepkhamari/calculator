#include "helper.hpp"

int pow1(int a, int b)
{
    int p=1;

    for (int i=0; i<b; i++)
    {
        p*=a;
    }

    return p;
}

int per1(int a, int b)
{
    int p1;

    p1= (b*100)/a;

    return p1;
}

int sqrt1(int a)
{
    return sqrt(a);
}