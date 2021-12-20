#include <iostream>

using namespace std;

int main()
{
    int N, i;
    float sum;
    cout << "Banyak data array :"; cin >> N;
    float arrNilai[N];
    i = 0;
    while (i < N)
    {
        cout << "Masukkan data array index ke- " << i << " = " ; cin >> arrNilai[i];
        i++;
    }
    i = 0;
    sum = 0.0f;
    while (i < N)
    {
        sum = sum + arrNilai[i];
        i++;
    }
    cout << "Nilai Sum = " << sum << endl;
    cout << "Nilai Rata-rata = " << sum/N << endl;
    cout << "Nilai Count = " << sizeof(arrNilai)/sizeof(arrNilai[0]);
    return 0;
}