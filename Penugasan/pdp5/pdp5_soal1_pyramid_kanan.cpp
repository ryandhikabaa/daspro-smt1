#include <iostream>
using namespace std;
int main()
{

    int outer, inner, iBaris;
    cout << "Masukkan jumlah baris:  ";
    cin >> iBaris;
    for (outer = 1; outer <= iBaris; outer++)
    {
        for (inner = 1; inner <= outer; inner++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (outer = iBaris-1; outer >= 1; outer--)
    {
        for (inner = 1; inner <= outer; inner++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}