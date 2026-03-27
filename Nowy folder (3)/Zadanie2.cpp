#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	ifstream file("PARY_LICZB.TXT");
	ofstream out_file("ZAD_2_OUTPUT.TXT");
	string s, s1, s2;
	int temp_i, temp_i1, temp_i2, out_p1 = 0, out_p2 = 0, out_p3 = 0;
	while(!file.eof())
	{
		getline(file, s);
		stringstream ss(s);
		ss>>temp_i>>temp_i1;
		stringstream ss2(s);
		ss2>>s1>>s2;
		//cout<<s1<<"   "<<s2<<endl;
		//temp_i1 = istringstream(s1);
		//temp_i2 = istringstream(s2);
		
		//Podpunkt 1
		if(temp_i % temp_i1 == 0)
		{
			out_p1++;
		}
		else
		{
			if(temp_i1 % temp_i == 0)
			{
				out_p1++;
			}
		}
		
		//Podpunkt 2
		int _temp_i2, _temp_i1 = temp_i1, _temp_i = temp_i;
		while(_temp_i1!=0)
		{
			_temp_i2 = _temp_i % _temp_i1;
			_temp_i = _temp_i1;
			_temp_i1 = _temp_i2;
		}
		
		if(_temp_i == 1)
		{
			out_p2++;
		}
		
		
		//Podpunkt 3
		int s1_len, s2_len, temp_temp_int = 0, temp_temp_int2 = 0;
		char temp_char;
		s1_len = s1.length();
		s2_len = s2.length();
		for(int i = 0; i < s1_len; i++)
		{
			temp_char = s1[i];
			temp_temp_int = temp_temp_int + (temp_char - '0');
		}
		
		for(int i = 0; i < s2_len; i++)
		{
			temp_char = s2[i];
			temp_temp_int2 = temp_temp_int2 + (temp_char - '0');
		}
		
		if(temp_temp_int == temp_temp_int2)
		{
			out_p3++;
		}
		
	}
	cout<<"Podpunkt 1: "<<out_p1<<endl;
	cout<<"Podpunkt 2: "<<out_p2<<endl;
	cout<<"Podpunkt 3: "<<out_p3<<endl;
	return 0;
}
