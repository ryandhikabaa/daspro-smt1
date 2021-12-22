#include <iostream>

using namespace std;

int main()
{
    cout << "\x1B[33mNIM    : A11.2021.13498\033[0m\t\t\n";
    cout << "\x1B[33mNama   : Ryandhika Bintang Abiyyi\033[0m\t\t\n";
    cout << "\x1B[33mKelas  : 4105\033[0m\t\t\n";
    int arrNilai[10] = {12, 55, 4, 2, 2, 3, 4, 20, 10, 11};
    int nMax = arrNilai[0], nMin = arrNilai[0];
    int valueSearch = 0, countTrue = 0;
    string sInIndex, sArrNilai;
    for (int a = 0; a < sizeof(arrNilai) / sizeof(arrNilai[0]); a++)
    {
        sArrNilai += to_string(arrNilai[a]) + ", ";
    }

    cout << sArrNilai;    
    cout << "\nCari data : "; cin >> valueSearch;

    for (int i = 0; i < sizeof(arrNilai) / sizeof(arrNilai[0]); i++)
    {
        if (valueSearch == arrNilai[i])
        {
            countTrue++;
            sInIndex += to_string(i) + " ";
        }
        
        if (arrNilai[i] > nMax)
        {
            nMax = arrNilai[i];
        }
        if (nMin > arrNilai[i])
        {
            nMin = arrNilai[i];
        }
    }

    cout << valueSearch << " Ketemu sejumlah: " << countTrue << ", pada index: " << sInIndex;
    cout  << "\nAngka terbesar adalah: " << nMax;
    cout  << "\nAngka terkecil adalah: " << nMin;

    return 0;
}