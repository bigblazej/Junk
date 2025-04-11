#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int k = 0, m = 0;
    string pesel;
    ifstream file_data("dane.txt");
    ofstream file_save("wynik.txt");
    if(!file_data.good() || !file_save.good())
    {
        cout<<"[FATAL] File opening error!";
        return 0;
    }
    while(getline(file_data, pesel))
    {
        if(pesel[9] == '0' || pesel[9] == '2' || pesel[9] == '4' || pesel[9] == '6' || pesel[9] == '8')
        {
            k++;
        }
        else
        {
            m++;
        }
    }
    file_data.close();
    cout<<"Liczba kobiet to: "<<k<<" a mezczyzn to: "<<m<<endl;
    file_save<<"Liczba kobiet to: "<<m<<" a mezczyzn to: "<<m<<endl;
    file_save.close();
    return 0;
}