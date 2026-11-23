#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
//o + *
bool palindrom(string text)
{
    for(int i=0;i<6;i++)
    {
        if(text[i]!=text[11-i])
        {
            return false;
        }
    }
    return true;
}
vector <string> tab(2000);

bool kwadrat(int i, int j)
{
    //dokonczyc zeby sprawdzalo kwadrat w tym miejscu
}

int main()
{
    fstream wejscie("symbole.txt");
    string we;
    for(int i=0;i<2000;i++)
    {
        wejscie>>we;
        tab[i]=we;
    }
    for(int i=0;i<2000;i++)
    {
        for(int j=0;j<12;j++)
        {
            if(kwadrat(i,j))
            {
                //zrobic warunek dla znalezienia kwadratu
            }
        }
    }

}
