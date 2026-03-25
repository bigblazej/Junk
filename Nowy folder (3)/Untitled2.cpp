#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>

using namespace std;

int main()
{
	string s;
	bool b = 0;
	int i;
	ifstream plik("liczby.txt");
	ofstream plik2("odpowiedz.txt");
	while(!plik.eof())
	{
		b = 0;
		getline(plik, s);
		istringstream(s) >> i;
		int e = sqrt(i);
		if(i != 1)
		{
			int a = int(sqrt(i));
			for(int j; j <= a; j++)
			{
				if((a % i) != 0)
				{
					b = 1;
					cout<<a<<" , "<<i<<" , "<<j<<" , "<<e<<" , "<<b<<endl;
				}
				cout<<a<<" , "<<i<<" , "<<j<<" , "<<e<<" , "<<b<<endl;
			}
		}
		if(b == 1)
		{
			plik2<<s<<endl;
		}
	}
	return 0;
}
