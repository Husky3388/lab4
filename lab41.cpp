// Lab4 - Challenge 1
// Jason Thai
// Allman style

#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

void divide(int);
void countN(int);


int countNum[6] = {0,0,0,0,0,0};
int countText[6] = {0,0,0,0,0,0};

int main()
{
    int num[14] = {111111111, 222222222, 333333333, 444444444, 555555555, 666666666, 777777777, 888888888, 999999999, 123456789, 234567890, 345678901, 456789012, 3141592};
    string text = "In computer programming, an indent style is a convention governing the indentation of blocks of code to convey the program's structure. This article largely addresses the free-form languages, such as C programming language and its descendants, but can be applied to most other programming languages, especially those in the curly bracket family, where whitespace is otherwise insignificant.";

    for(int i = 0; i < 13; i++)
    {
        divide(num[i]);
    }
    countText[0] = count(text.begin(), text.end(), 'a');
    countText[1] = count(text.begin(), text.end(), 'b');
    countText[2] = count(text.begin(), text.end(), 'c');
    countText[3] = count(text.begin(), text.end(), 'd');
    countText[4] = count(text.begin(), text.end(), 'e');
    countText[5] = count(text.begin(), text.end(), 'f');

    cout << "335 Lab-4 Challenge #1\n" << endl;
    cout << "letter:\t\ta\tb\tc\td\te\tf" << endl;
    cout << "\t\t--\t--\t--\t--\t--\t--" << endl;
    cout << "numbers:\t" << countNum[0] << "\t" << countNum[1] << "\t" << countNum[2] << "\t" << countNum[3] << "\t" << countNum[4] << "\t" << countNum[5] << endl;
    cout << "text:\t\t" << countText[0] << "\t" << countText[1] << "\t" << countText[2] << "\t" << countText[3] << "\t" << countText[4] << "\t" << countText[5] << endl;

    char letter[6] = {'a','b','c','d','e','f'};
    for(int i = 0; i < 6; i++)
    {
        if(countNum[i] == countText[i])
        {
            cout << "\nLetter " << letter[i] << " has same count!" << endl;
            return 1;
        }
    }
    cout << "\nNo letter has same count." << endl;
    return 0;
}

void divide(int num)
{
    int result = num / 16;
    int remainder = num % 16;
    if(num / 16 == 0)
    {
        countN(remainder);
        return;
    }
    countN(remainder);
    divide(result);
}
void countN(int num)
{
    if(num == 10)
        countNum[0]++;
    if(num == 11)
        countNum[1]++;
    if(num == 12)
        countNum[2]++;
    if(num == 13)
        countNum[3]++;
    if(num == 14)
        countNum[4]++;
    if(num == 15)
        countNum[5]++;
}
