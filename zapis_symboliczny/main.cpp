#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;
//o + *


int trojki(string ciong)
{
    int cyfra,liczba=0;
    for(int i=11;i>=0;i--)
    {
        switch (ciong[i])
        {
        case 'o':
            cyfra=0;
            break;
        case '+':
            cyfra=1;
            break;
        case '*':
            cyfra=2;
            break;
        }
        liczba+=cyfra*pow(3,11-i);
    }
    return liczba;
}

string dziesiatki(int liczba)
{
    string ciong="";
    while (liczba>0)
    {
        switch (liczba%3)
        {
        case 0:
            ciong.insert(ciong.begin(),'o');
            break;
        case 1:
            ciong.insert(ciong.begin(),'+');
            break;
        case 2:
            ciong.insert(ciong.begin(),'*');
            break;
        }
        liczba/=3;
    }

    return ciong;
}

int main()
{
    fstream wejscie("symbole.txt");
    string we,trojk;
    int dzies=0;
    for(int i=0;i<2000;i++)
    {
        wejscie>>we;
        dzies+=trojki(we);
    }

    cout<<dzies<<" "<<dziesiatki(dzies);



}
