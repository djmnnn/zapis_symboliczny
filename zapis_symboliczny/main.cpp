#include <iostream>
#include <fstream>
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

int main()
{
    fstream wejscie("symbole.txt");
    string we;
    for(int i=0;i<2000;i++)
    {
        wejscie>>we;
        if(palindrom(we))
        {
            cout<<we<<endl;
        }
    }

}
