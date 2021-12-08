#include <iostream>

using namespace std;

int main()
{
    // Soal No 2 ==> Bilangan Prima Antara
    int iLoopPrimary, iLoopScnd, iPrima, nilaiAwal, nilaiBatas;
    cout << "Nilai Bilangan Awal : ";
    cin >> nilaiAwal;
    cout << endl;
    cout << "Nilai Bilangan Akhir : ";
    cin >> nilaiBatas;
    cout << endl;
    cout << "Bilangan prima dari " << nilaiAwal << " Sampai " << nilaiBatas << " Adalah : ";
    for (iLoopPrimary = nilaiAwal; iLoopPrimary <= nilaiBatas; iLoopPrimary++)
    {
        iPrima = 0;
        for (iLoopScnd = iLoopPrimary; iLoopScnd >= 1; iLoopScnd--)
        {
            //Check dimod dirinya sendiri apakah 0?
            if (iLoopPrimary % iLoopScnd == 0)
            {
                iPrima = iPrima + 1;
            }
        }
        if (iPrima == 2)
        {
            cout << " " << iLoopPrimary << " ";
        }
    }
    return 0;
}