#include <iostream>

using namespace std;

int main()
{
    cout << "NIM    : A11.2021.13498\n";
    cout << "Nama   : Ryandhika Bintang Abiyyi\n";
    cout << "Kelas  : 4105\n";

    // string sAngka;
    // cout << "Masukan bilangan bulat: ";
    // cin >> sAngka;
    // int lengthInput = sAngka.length();
    // int hasilAkhir = 0;

    // cout << "Hasil penjumlahan: ";
    // for (int i = 0; i < lengthInput; i++)
    // {
    //     if (i == lengthInput-1)
    //     {
    //         cout << sAngka.at(i) << " = ";
    //     }
    //     else
    //     {
    //         cout << sAngka.at(i) << " + ";
    //     }
    //     hasilAkhir += (int)sAngka.at(i) - '0';
    // }
    // cout << hasilAkhir;

    int number, reverse_number = 0;
    cout << "Enter a number to reverse value:"; // allow user to enter a number
    cin >> number;                              // takes value from user
    while (number != 0)
    {
        reverse_number = reverse_number * 10;
        reverse_number = reverse_number + number % 10;
        cout << number;
        number = number / 10;
    }
    // cout << "Reverse of entered number is:";
    // cout << reverse_number; //print reverse value

    return 0;
}