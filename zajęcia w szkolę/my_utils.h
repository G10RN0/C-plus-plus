#ifndef UTILS

#include <iostream>
#include <math.h>
#include <vector>
#define UTILS

#endif // UTILS

//do czegoœ tam
int power(int x, int y)
{
    int z = 1;

    for(int i = 0; i < y; i++)
    {
        z = z*x;
    }

    if(y == 0)
        return 0;
    else
        return z;
}

//ci¹g fibonaciego
long long int fibonacci_number(int x)
{
    if(x==0)
    {
        return 2;
    }
    else
    {
        if(x==1)
            return 1;
        else
        {
            return fibonacci_number(x-1) + fibonacci_number(x-1);
        }
    }
}

//main for fibinaci
void main_F()
{
    //fibonaci nuber
    int x = 0;
    while(true)
    {
        std::cout << fibonacci_number(x) << std::endl;
        x++;
    }
}

//rozdzielamy wszystkie liczby
void get_each_digit(int x, std::vector<int> &y)
{
    if(x >= 10)
       get_each_digit(x / 10, y);

    int digit = x % 10;

    y.push_back(digit);
}

//z binarnych do normlanych
void FromBinary(int x)
{
    //poczatkowe
    std::vector<int> y;
    int z = 0;
    //a to jest potega przez ktora potegujemy
    int a = 0;

    //zdobywamy kazda liczbe z X i wpakowujemy
    get_each_digit(x, y);

    for(int i = y.size()-1; i >= 0; i--)
    {
        if(y[i] != 0)
            z = z + (y[i]*power(2, a));
        a++;
    }
    std::cout << z << std::endl;
}

//z normalnych do binarnych
void ToBinary(int x)
{
    // liczby w systemie binarnym
    int n = (int)log2(x) + 1;
    //lista na liczby o
    int z[n];
    //przerabiamy na 1 i 0
    for(int i=0; i < n; i++)
    {
        if(x%2 == 0)
            z[i] = 0;
        else
            z[i] = 1;
        x = x/2;
    }
    //odwracamy
    for(int i = n-1; i >= 0; i--)
        std::cout << z[i];
}
void draw(int x, int y, std::vector<char> alfabet)
{
    int z;

    for(int b = 0; b < x; b++)
        cout <<" ";
    cout << "A" << endl;

    for(int a = 0; a <= y; a++)
    {
        for(int b = 0; b < x-1; b++)
            cout <<" ";
        for(int i = 0; i <= a; i++)
        {
            cout << alfabet[i];
            z = i;
        }

        cout << alfabet[z+1];

        for(int i = a; i >= 0; i--)
            cout << alfabet[i];

        cout << endl;
        x--;
    }
}
void tri_main()
{
    //zbieramy alfabet w vector
    std::vector<char> alfabet;
    int temp = (int)'A';
    const int maxnumber = 26;
    for(int i = temp; i < temp+maxnumber; i++)
         alfabet.push_back((char)i);

    char input;
    int x, y;
    while(true)
    {
        cout << "Jaka cyfra ma zaczac podstawe: ";
        cin >> input;

        if(input-65 < 26)
            break;
    }

    x = (int)input - 65;
    y = x-1;

    draw(x, y, alfabet);
}
void tri_main_beyond()
{
    //zbieramy alfabet w vector
    std::vector<char> alfabet;
    int temp = (int)'A';
    const int maxnumber = 26;
    for(int i = temp; i < temp+maxnumber; i++)
         alfabet.push_back((char)i);

    char input;
    int x, y;

    cout << "Jaka cyfra ma zaczac podstawe: ";
    cin >> input;


    x = (int)input - 65;
    y = x-1;

    draw(x, y, alfabet);
}
