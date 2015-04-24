// Lab4 - Challenge 3
// Jason Thai
// Allman style

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

void divide(int);

int countb = 0;

int main()
{
    //int count = 0;
    for(int i = 0; i < 100000000; i++)
    {
        divide(i);
    }
    cout << "335 Lab-4 Challenge #3\n" << endl;
    cout << "Total number of B pairs: " << countb << endl;
    return 0;
}

void divide(int num)
{
    int result = num / 16;
    int remainder = num % 16;
    if(result == 0)
    {
        return;
    }
    if(result == 11)
    {
        if(remainder == 11)
        {
            if(remainder % 16 == 11)
            {
                divide(result);
            }
            countb++;
        }
    }
    divide(result);
    return;
}
