#include <iostream>

using namespace std;

int a, b;
int kode;
string sLoop;

void vMenu();
void vLoop();

int main()
{
    // vMenu();
    int a = 0;
    int p;
    masukanpin:
    cout << "Masukkan angka : ";
    cin >> p;
    if (p % 2 != 0)
    {
        cout << "Terimakasih" << endl;
    }
    else
    {
        if (a < 2)
        {
            a++;
            goto masukanpin;
        }
        else
        {
            cout << "Batas Sudah terlampaui" << endl;
        }
    }
    return 0;
}

void vLoop()
{
    cout << "\nMau Lagi ? (y/n) :";
    cin >> sLoop;
    if (sLoop == "y")
    {
        vMenu();
    }
    else if (sLoop == "n")
    {
        cout << "Terimakasih, Sampai jumpa";
    }
    else
    {
        cout << "Input tidak tersedia, silahkan coba lagi";
        vLoop();
    }
}

void vMenu()
{
    cout << "Kalkulator Sederhana\n";
    cout << "Pilihan Menu : \n";
    cout << "1. Penjumlahan (+)\n";
    cout << "2. Pengurangan (-)\n";
    cout << "3. Perkalian (*)\n";
    cout << "4. Pembagian (:)\n";
    cout << "5. Modulus (%)\n";
    cout << "Silahkan masukan kode menu : ";
    cin >> kode;
    cout << "Masukan angka pertama : ";
    cin >> a;
    cout << "Masukan angka kedua :";
    cin >> b;
    switch (kode)
    {
    case 1:
        cout << "\nHasil penjumlahan dari " << a << " + " << b << " adalah : " << a + b << endl;
        vLoop();
        break;

    case 2:
        cout << "\nHasil pengurangan dari " << a << " - " << b << " adalah : " << a - b << endl;
        vLoop();
        break;

    case 3:
        cout << "\nHasil Perkalian dari " << a << " * " << b << " adalah : " << a * b << endl;
        vLoop();
        break;

    case 4:
        cout << "\nHasil Pembagian dari " << a << " / " << b << " adalah : " << a / b << endl;
        vLoop();
        break;

    case 5:
        cout << "\nHasil Modulus dari " << a << " % " << b << " adalah : " << a % b << endl;
        vLoop();
        break;

    default:
        cout << "\nKode yang anda masukan tidak ada \nSilahkan masukan ulang kode.";
        vMenu();
        break;
    }
}