/* Write a Menu driven CPP Program to perform below operations (use seperate functions
for every operation)
a. Binary to Octal
b. Octal to Binary
c. Binary to Hexadecimal
d. Hexadecimal to Binary
e. Octal to Hexadecimal
f. Hexadecimal to Octal */
#include <algorithm>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int fromBinary()
{
    string s;
    int ans = 0;
    cin >> s;
    int mul;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        mul = s.at(i) - 48;
        ans = ans + mul * pow(2, i);
    }
    return ans;
}
int fromOctal()
{
    string s;
    int ans = 0;
    cin >> s;
    int mul;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {

        mul = s.at(i) - 48;
        ans = ans + mul * pow(8, i);
    }
    return ans;
}
int fromHexadecimal()
{
    string s;
    int ans = 0;
    cin >> s;
    int mul;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) < 58 && s.at(i) > 47)
        {

            mul = s.at(i) - 48;
            ans = ans + mul * pow(16, i);
        }
        else if (s.at(i) < 71 && s.at(i) > 64)
        {

            mul = s.at(i) - 48;
            ans = ans + mul * pow(16, i);
        }
    }
    return ans;
}
void toBinary(int x)
{
    int r = x;
    int i = 0;
    string s;
    while (x > 0)
    {
        i++;
        r = x % 2;
        x = x / 2;

        s.push_back(char(48 + r));
    }
    cout << "\nPrinting ans : ";
    cout << s;
}
void toOctal(int x)
{
    int r = x;
    int i = 0;
    string s;
    while (x > 0)
    {
        i++;
        r = x % 8;
        x = x / 8;

        s.push_back(char(48 + r));
    }
    // s.pop_back();
    cout << "\nPrinting ans : ";
    // reverse(s.begin(), s.end());
    cout << s;
}
void toHexadeciaml(int x)
{
    int r = x;
    int i = 0;
    string s;
    while (x > 0)
    {
        i++;
        r = x % 16;
        x = x / 16;
        if (r < 10)
        {
            s.push_back(char(48 + r));
        }
        else
            s.push_back(char(55 + r));
    }
    // s.pop_back();
    cout << "\nPrinting ans : ";
    // reverse(s.begin(), s.end());
    cout << s;
}
int menu(char c)
{
    switch (c)
    {
    case 'a':
        toOctal(fromBinary());
        break;
    case 'b':
        toBinary(fromOctal());
        break;
    case 'c':
        toHexadeciaml(fromBinary());
        break;
    case 'd':
        toBinary(fromHexadecimal());
        break;
    case 'e':
        toHexadeciaml(fromOctal());
        break;
    case 'f':
        toOctal(fromHexadecimal());
        break;
    case '0':
        return 101;
    default:
        cout << "\n***Invalid Input***\n";
        break;
    }
}

int main()
{
reset:
    char opt;
    cout << "\na.Binary to Octal\nb.Octal to Binary\nc.Binary to Hexadecimal\nd.Hexadecimal to Binary\ne.Octal to Hexadecimal\nf.Hexadecimal to Octal \n\n ";
    cout
        << "\n[Enter operation char to be performed] : ";
    cin >> opt;
    menu(opt);
    if (menu(opt) == 101)
    {
        return 0;
    }
    goto reset;
}