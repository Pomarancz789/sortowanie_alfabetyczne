#include <iostream>
using namespace std;

void zadanie1()
{
    string slowo;
    
    cout << "podaj slowo: ";
    cin >> slowo;
    
    int dlugosc = slowo.length();
        
        for (int i=0; i<dlugosc; i++)
        {
            for (int j=0; j<dlugosc; j++)
            {
                if (slowo[i]<slowo[j])
                    swap(slowo[i], slowo[j]);
            }
        }
    
    cout << slowo << endl;
}


void zadanie2()
{
    string slowo[4];
    
    cout << "podaj slowo: ";
    cin >> slowo[0];
    cout << "podaj slowo: ";
    cin >> slowo[1];
    cout << "podaj slowo: ";
    cin >> slowo[2];
    cout << "podaj slowo: ";
    cin >> slowo[3];
    
    for (int i=0; i<4; i++)
    {
        for (int j=i; j<4; j++)
        {
            if (slowo[i][0]>slowo[j][0])
                swap(slowo[i], slowo[j]);
        }
    }
    
    for (int y=0; y<4; y++)
    {
        cout << slowo[y]<<endl;
    }
}


void zadanie3()
{
    string imiona[]={"ada", "ewa", "iza", "ela"};
    
    
    for (int i=0; i<4; i++)
    {
        for (int j=i; j<4; j++)
        {
            if (imiona[i][0]<imiona[j][0])
                swap(imiona[i], imiona[j]);
        }
    }
    
    for (int y=0; y<4; y++)
    {
        cout << imiona[y]<<endl;
    }
}


void zadanie4()
{
    int ileslow=3;
    string slowa[3]={};
    
    for (int i=0; i<ileslow; i++)
    {
        cin >> slowa[i];
    }
    
    for (int i=0; i<ileslow; i++)
    {
        for (int j=i; j<ileslow; j++)
        {
            if (slowa[i].length()<slowa[j].length())
                swap(slowa[i], slowa[j]);
        }
    }
    
    
    for (int i=0; i<ileslow; i++)
    {
        for (int y=0; y<slowa[i].length(); y++)
        {
            for (int j=y; j<slowa[i].length(); j++)
            {
                if (slowa[i][y]>slowa[i][j])
                    swap(slowa[i][y], slowa[i][j]);
            }
        }
    }
    
    
    for (int y=0; y<ileslow; y++)
    {
        cout << slowa[y]<<endl;
    }
}


int main() {
    //zadanie1();
    //zadanie2();
    //zadanie3();
    zadanie4();
    
    return 0;
}
