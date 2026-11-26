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
    char znak=tab[i][j];
    for(int a=2;a>=0;a--)
    {
        for(int b=2;b>=0;b--)
        {
            if(znak!=tab[i-a][j-b])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    fstream wejscie("symbole.txt");
    string we;
    int ile=0;
    for(int i=0;i<2000;i++)
    {
        wejscie>>we;
        tab[i]=we;
    }
    for(int i=2;i<2000;i++)
    {
        for(int j=2;j<12;j++)
        {
            if(kwadrat(i,j))
            {
                cout<<i<<" "<<j<<endl;
                ile++;
            }
        }
    }
    cout<<"ile: "<<ile;

}
