// Lab4 - Challenge 4
// Jason Thai
// Allman style

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void prime(int*);

int max_num = 100;

int main()
{
    int height;
    int num;
    int spaces = 0;
    int countP = 0;
    int sum = 0;

    cout << "335 Lab-4 Challenge #4\n\n";
    cout << "How many rows do you want the hourglass? ";
    cin >> height;
    num = ceil((double)height/2);

    int arr[max_num];
    prime(arr);

    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < spaces; j++)
        {
            cout << "\t";
        }
        for(int k = 0; k < num; k++)
        {
            cout << arr[countP] << "\t\t";
            countP++;
            if(k + 1 == num && i < (height / 2) && num > 1)
                sum += arr[countP - 1];
            if(k == 0 && i > (height / 2))
                sum += arr[countP - 1];
            if(k == 0 && num == 1)
                sum += arr[countP - 1];
        }
        if(i < height / 2 && num > 1)
        {
            num--;
            spaces++;
        }
        if(i >= height / 2)
        {
            num++;
            spaces--;
        }
        cout << endl << endl;
    }
    cout << "The sum of the diagonal is: " << sum << endl;
    return 0;
}

void prime(int* num)
{
    num[0] = 2;
    num[1] = 3;
    int count = 2;
    for(int j = 3; j < 500; j++)
    {
        if(count == max_num)
            return;
        if(j % (int)sqrt(j) == 0)
            continue;
        if(j % 2 == 0)
            continue;
        if(j > 3 && j % 3 == 0)
            continue;
        if(j > 5 && j % 5 == 0)
            continue;
        if(j > 11 && j % 11 == 0)
            continue;
        num[count] = j;
        count++;
    }
}
