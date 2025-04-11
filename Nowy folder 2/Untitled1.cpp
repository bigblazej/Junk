#include <iostream>
#include <fstream>
using namespace std;
int ile=0;
int f(int liczba,int liczba1){
    if(liczba%liczba1==0){
        ile++;
    }
    if(liczba1%liczba==0){
        ile++;
    }
}
int main()
{
    int liczba,liczba1;
    fstream plik("PARY_LICZB.TXT");
    ofstream wynik("wynik.txt");
    if(!plik){
        cout<<"Brak pliku"<<endl;
        return 1;
    }
    while(plik>>liczba>>liczba1){
            f(liczba,liczba1);
    }
    cout<<"Jest: "<<ile<<"   tych liczb"<<endl;;
    return 0;
}

