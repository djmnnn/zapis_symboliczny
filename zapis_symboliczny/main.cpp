#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
using namespace std;
//o + *

vector <string> tab(2000);

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

int main()
{
    fstream wejscie("symbole.txt");
    string we,ciong,maksciong;
    int liczba, maks=-1;
    for(int i=0;i<2000;i++)
    {
        wejscie>>we;
        tab[i]=we;
    }
    for(int i=0;i<2000;i++)
    {
        ciong=tab[i];
        liczba=trojki(ciong);
        if(liczba>maks)
        {
            maks=liczba;
            maksciong=ciong;
        }
    }
    cout<<maks<<" "<<maksciong;


}
