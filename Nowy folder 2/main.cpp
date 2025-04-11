#include <iostream>
#include <Math.h>
#include <windows.h>

using namespace std;

int main()
{
    int a[6];
    int check, guessed = 0;
    bool b[6];
    for(int i = 0; i <= 5;)
    {
        cout<<"Podaj "<<i + 1<<" liczbe:";
        cin>>a[i];
        if(a[i] >= 1 && a[i] <= 49)
        {
            i++;
        }
        else
        {
            cout<<"[ERROR] Podaj poprawna liczbe w zakresie od 1 do 49!!!"<<endl;
        }
    }
    for(int i = 0; i <= 5;)
    {
        check = rand()%49;
        if(check == a[i])
        {
            b[i] = true; 
            cout<<"Trafiłeś."<<check<<endl;
        }
        else
        {
            b[i] = false;
            cout<<"Nie trafiłeś. Wylosowano: "<<check<<endl;
        }
        Sleep(100);
        i++;
    }
    for(int i = 0; i <= 5;)
    {
        if(b[i] == true)
        {
            guessed++;
        }
        i++;
    }
    cout<<"Trafiłeś "<<guessed<<" razy."<<endl;
    switch(guessed)
    {
        case(3):
        {
            cout<<"Wygrałeś 10 zł"<<endl;
            break;
        }
        case(4):
        {
            cout<<"Wygrałeś 100 zł"<<endl;
            break;
        }
        case(5):
        {
            cout<<"Wygrałeś 3500 zł"<<endl;
            break;
        }
        case(6):
        {
            cout<<"Wygrałeś 1000000 zł"<<endl;
            break;
        }
        default:
        {
            cout<<"Nic nie wygrałeś."<<endl;
            break;
        }
    }
    return 0;
}
