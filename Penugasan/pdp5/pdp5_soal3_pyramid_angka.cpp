#include <iostream>
using namespace std;
int main()
{
    int outer, inner, iBaris;
    cout << "Masukkan jumlah baris:  ";
    cin >> iBaris;
    for (outer = 1; outer <= iBaris; outer++)
    {
        for (inner = outer; inner < iBaris; inner++)
        {
            cout << " ";
        }
        
        for (inner = 1; inner <= outer; inner++)
        {
            cout << " "  << outer;
        }
        cout << endl;
    }

    return 0;
}