#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    string namaHari[7];
    cout << "=====================================================" << endl;
    cout << "Array nama hari dalam 1 minggu" << endl;
    cout << "=====================================================" << endl;
    
    for (i = 0; i < 7; i++)
    {
        cout << "Masukkan hari ke " << i+1 << " : "; cin >> namaHari[i];
    }
    cout << "=====================================================" << endl;
    cout << "Daftar nama hari dalam 1 minggu : " << endl;
    cout << "=====================================================" << endl;
    for (i = 0; i < 7; i++)
    {
        cout << "Hari ke " << i+1 << " : " << namaHari[i] << endl;
    }
    return 0;
}