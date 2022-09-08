/* Write a CPP Program to Find Frequency (count) of vowels and consonants (character
wise) in below String.
“CPP is easy and great and Python is also great” */
#include <iostream>
#include <string.h>
using namespace std;

void check_freq(string &s, int &v, int &c)
{
    int vowel[] = {97, 101, 105, 111, 117, 85, 79, 73, 69, 65};
    for (int i = 0; i < s.length(); i++)
    {
        for (int k = 0; k < 10; k++)
        {

            if (s.at(i) == vowel[k])
            {
                v++;
                goto label;
            }
        }

        if ((s.at(i) > 64 && s.at(i) < 91) || (s.at(i) > 96 && s.at(i) < 123))
        {
            c++;
        }
    label:
        continue;
    }
}

int main()
{
    int f_vowel = 0, f_consonant = 0;
    string test = "CPP is easy and great and Python is also great";
    check_freq(test, f_vowel, f_consonant);
    cout << "\nThe frequency of vowels is " << f_vowel << ".\nThe frequency of consonants is " << f_consonant << ".\n\n";
    return 0;
}
