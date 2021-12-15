#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    string namaBuah[5];
    string konfirmasi;
retryInput:
    cout << "=====================================================" << endl;
    cout << "Program Beli Buah" << endl;
    cout << "=====================================================" << endl;
    cout << "Masukkan buah : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> namaBuah[i];
    }
    cout << "=====================================================" << endl;
    cout << "Daftar buah yang akan dibeli : " << endl;
    cout << "=====================================================" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "Buah ke- " << i << " = " << namaBuah[i] << endl;
    }
    cout << "=====================================================" << endl;
    cout << "Apakah daftar buah sudah benar ? (ya/tidak) = ";
    cin >> konfirmasi;
    if (konfirmasi == "tidak")
    {
        goto retryInput;
    }
    else
    {
        cout << "=====================================================" << endl;
        cout << "Terimakasih sudah melakukan konfirmasi pemesanan buah";
    }

    return 0;
}
