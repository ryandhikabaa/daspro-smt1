#include <iostream>

using namespace std;

int main()
{
    // Soal no 3 ==> FPB
    int angka1, angka2;
    string faktor1 = " ", faktor2;
    cout << "Faktor : ";
    cin >> angka1;
    cout << "Faktor dari " << angka1 << " adalah : ";
    for (int i = 1; i <= angka1; i++)
    {
        if (angka1 % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "dan Faktor dari : ";
    cin >> angka2;
    cout << "Faktor dari " << angka2 << " adalah : ";
    for (int b = 1; b <= angka2; b++)
    {
        if (angka2 % b == 0)
        {
            cout << b << " ";
        }
    }
    cout << endl;
    int iFPB = abs(angka1 - angka2);
    while (angka1 % iFPB != 0)
    {
        iFPB = angka1 % iFPB;
    }
    cout << "FPB dari " << angka1 << " dan " << angka2 << " adalah : " << iFPB;
    return 0;
}