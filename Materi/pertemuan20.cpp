#include <iostream>
using namespace std;
int main()
{
    int nilaiMatriks = 1, outer, inner, kolom, baris;
    cout << "Jumlah Baris : ";
    cin >> baris;
    cout << "Jumlah Kolom : ";
    cin >> kolom;
    for (outer = 0; outer < baris; outer++)
    {
        for (inner = 0; inner < kolom; inner++)
        {
            if (nilaiMatriks % 2 == 1)
            {
                cout << "* ";
            }
            else
            {
                cout << nilaiMatriks << " ";
            }
            nilaiMatriks++;
        }
        cout << endl;
    }
}