// Lab4 - Challenge 2
// Jason Thai
// Allman style


#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string text = "feeenhpoorilumayngtumseatsdmepotositnsfrlerruepsrennurdaorantiedbeunrtioradarahe";
    ifstream myfile;
    string word;
    myfile.open("cracklib-small");
    cout << "335 Lab-4 Challenge #2\n" << endl;
    if(myfile.is_open())
    {
        cout << "forward----------" << endl;
        while(getline(myfile, word))
        {
            if(strlen(word.c_str()) >= 3)
            {
                if(text.find(word) != -1)
                {
                    cout << word << endl;
                }
            }
        }
        myfile.close();
    }
    else
    {
        cout << "Unable to open file." << endl;
        return 0;
    }
    myfile.open("cracklib-small");
    if(myfile.is_open())
    {
        reverse(text.begin(), text.end());
        cout << "backward--------" << endl;
        while(getline(myfile, word))
        {
            if(strlen(word.c_str()) >= 3)
            {
                if(text.find(word) != -1)
                {
                    cout << word << endl;
                }
            }
        }
        myfile.close();
    }
    return 0;
}
