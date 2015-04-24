// Lab4 - Challenge 5
// Jason Thai
// Allman style

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

void countN(int, char*);
void sort(char*, int*);
char letter[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int countLetter[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

int main()
{
    string text = "CIJXJMWFAOZWBRSETBPNMKNBZKTUAOFUKCWFCXZYISCKKHPBUAFNFTHRLYSOVBGYKNBCAPMBOIEEULDCXUTCBWVGRSYYKCCPSOWXCEAFMLDOZPVAHCTKXEYSBVHRGEYINRFTUJZJLNRDQUCORRTPZXWJSRSDWXHSHUSJBCKQVGPUKYWISTBCUDQAADABTQPOGPSZUGJBQQBIDCUQGMZVCOLUBIXDAJOQOVIURUNJWTSMSJFUJNCISMLRGXWKSXPGKGYHZEEUHVNIFEYHCLQNNBOUHMBLSIYHCLXPESDCVFDQTMZHVKMZZS";
    char *a = new char[text.size()+1];
    a[text.size()] = 0;
    memcpy(a, text.c_str(), text.size());
    for(int i = 0; i < text.size(); i++)
    {
        countN(i, a);
    }
/*    for(int i = 0; i < 26; i++)
    {
        cout << countLetter[i] << endl;
    }*/
    sort(letter, countLetter);
    cout << "335 Lab-4 Challenge #5\n" << endl;
    cout << "running..." << endl;
    cout << "complete.\n" << endl;
    cout << "Sorted string is below:\n" << endl;
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < countLetter[i]; j++)
        {
            cout << letter[i];
        }
    }
    cout << endl;

    return 0;
}

void countN(int num, char* text)
{
    for(int i = 0; i < 26; i++)
    {
        if(text[num] == letter[i])
        {
            countLetter[i]++;
        }
    }
}

void sort(char* letter, int* num)
{
    char ctmp;
    int itmp = 0;
    for(int i = 0; i < 26; i++)
    {
        for(int j = i; j < 26; j++)
        {
            if(num[i] < num[j])
            {
                itmp = num[i];
                ctmp = letter[i];
                num[i] = num[j];
                letter[i] = letter[j];
                num[j] = itmp;
                letter[j] = ctmp;
            }
        }
    }
}
