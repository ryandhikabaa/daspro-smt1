#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* Sqeuntial 1 */
    // int i;
    // float x;
    // int hasil;

    // cin >> i;
    // x = 12.5;
    // hasil = i * 10;
    // cout << i << endl;
    // cout << (x+5.4) << endl;
    // cout << i << x << hasil << endl;

    /* Persegi panjang */
    int p, l;
    float hasilLuas, hasilKeliling;
    cout << "Masukkan Panjang : " ; cin >> p;
    cout << "Masukkan Lebar : " ; cin >> l;

    hasilLuas = p*l;
    hasilKeliling = 2 * (p + l);

    cout << "===============================\n";
    cout << "Luas : " << hasilLuas << "\n"; 
    cout << "Keliling : " << hasilKeliling << "\n"; 
    cout << "===============================";

    return 0;
}
