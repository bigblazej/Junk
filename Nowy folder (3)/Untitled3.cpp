#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	string s;
	char temp_char;
	int temp_int, k_int = 0, m_int = -1, list_int = 0;
	ifstream file("dane.txt");
	//ifstream file("przyklad.txt");
	ofstream out_file("output.txt");
	cout<<"Niepoprawne pesele: "<<endl;
	while(!file.eof())
	{
		getline(file, s);
		temp_char = s[9];
		temp_int = temp_char - '0';
		if(temp_int%2 == 0)
		{
			k_int++;
		}	
		else
		{
			m_int++;
		}
		
		//Podpunkt 2
		temp_char = s[2];
		temp_int = (s[2] - '0') * 10;
		temp_char = s[3];
		temp_int = temp_int + temp_char - '0';
		//cout<<temp_int<<endl;
		if(temp_int > 12)
		{
			temp_int = temp_int - 20;
		}
		if(temp_int == 11)
		{
			list_int++;
		}
		
		//Podpunkt 3
		temp_char = s[0];
		temp_int = temp_char - '0';
		temp_char = s[1];
		temp_int = temp_int + (temp_char - '0') * 3;
		temp_char = s[2];
		temp_int = temp_int + (temp_char - '0') * 7;
		temp_char = s[3];
		temp_int = temp_int + (temp_char - '0') * 9;
		temp_char = s[4];
		temp_int = temp_int + (temp_char - '0');
		temp_char = s[5];
		temp_int = temp_int + (temp_char - '0') * 3;
		temp_char = s[6];
		temp_int = temp_int + (temp_char - '0') * 7;
		temp_char = s[7];
		temp_int = temp_int + (temp_char - '0') * 9;
		temp_char = s[8];
		temp_int = temp_int + (temp_char - '0');
		temp_char = s[9];
		temp_int = temp_int + (temp_char - '0') * 3;
		temp_char = s[10];
		temp_int = temp_int + (temp_char - '0');
		
		if(temp_int%10 != 0)
		{
			cout<<s<<endl;
		} 
	}
	cout<<endl<<"Ilosc Kobiet: "<<k_int<<endl<<"Ilosc Mezczyzn: "<<m_int<<endl<<endl<<"Urodzenia w listopadzie: "<<list_int<<endl<<endl;
	cout<<endl<<endl;
	return 0;
}
