#include <iostream>

using namespace std;

int main()
{
    cout << "NIM    : A11.2021.13498\n";
    cout << "Nama   : Ryandhika Bintang Abiyyi\n";
    cout << "Kelas  : 4105\n";

    string sAngka;
    cout << "Masukan bilangan bulat: ";
    cin >> sAngka;
    int lengthInput = sAngka.length();
    int hasilAkhir = 0;
    int iModulus = 0;
    int stoiAngka = stoi(sAngka);

        /*
        Split dengan at
        */
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

        /*
        Reverse dan Split dengan at
        */
    cout << "Hasil penjumlahan: ";
    for (int i = lengthInput - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            cout << sAngka.at(i) << " = ";
        }
        else
        {
            cout << sAngka.at(i) << " + ";
        }
        hasilAkhir += (int)sAngka.at(i) - '0';
    }
    cout << hasilAkhir;

        /*
        Reverse dan Split dengan Modulus
        */
    // for (int i = 0; i < sAngka.length(); i++)
    // {
    //     iModulus = stoiAngka % 10;
    //     if (i < sAngka.length()-1){
    //         cout << iModulus << " + ";
    //     }else{
    //         cout << iModulus << " = ";
    //     }
    //     hasilAkhir += iModulus;
    //     stoiAngka /= 10;
    // }
    // cout << hasilAkhir;

    return 0;
}