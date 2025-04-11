#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string dec2bin(int dec_num)
{
    string bin_num = "";
    bool isNeg = false;
    if (dec_num < 0) 
    {
        isNeg =true;
        dec_num = -dec_num;
    }
        

    if (dec_num == 0) 
        return "0";

    while (dec_num > 0)
    {
        bin_num = to_string(dec_num % 2) + bin_num;
        dec_num /= 2;
    }

    if(isNeg == true)
    {
        return "-" + bin_num;
    }

    return bin_num;
}

int main()
{
    ifstream file_in("data_in.txt");
    ofstream file_out("data_out.txt");

    if (!file_in || !file_out)
    {
        cout << "File opening error!" << endl;
        return 0;
    }

    string num_dec_in;
    while (getline(file_in, num_dec_in))
    {
        try
        {
            int num_dec_in_int = stoi(num_dec_in);
            string binary_result = dec2bin(num_dec_in_int);

            cout << "Decimal---> " << num_dec_in_int << " ---> Binary: " << binary_result << endl;
            file_out << binary_result << endl;
        }
        catch (invalid_argument &e)
        {
            cout << "Invalid input: " << num_dec_in << endl;
            file_out << "Error" << endl;
        }
    }

    file_in.close();
    file_out.close();
    return 0;
}