#include <iostream>
using namespace std;
int main()
{
    //for loop matriks 
    // 1 2 3 
    // 4 5 6
    // 7 8 9
    // int nilaiMatriks = 1, outer, inner, kolom, baris; 
    // cout << "Jumlah Baris : "; cin >> baris;
    // cout << "Jumlah Kolom : "; cin >> kolom;
    // for (outer = 0; outer < baris; outer++)
    // {
    //     for (inner = 0; inner < kolom; inner++)
    //     {
    //         cout << nilaiMatriks << " ";
    //         nilaiMatriks++;
    //     }
    //     cout << endl;
    // }
    

    //while loop matriks 
    // 1 2 3 
    // 4 5 6
    // 7 8 9
    // int nilaiMatriks = 1, outer=0, inner, kolom, baris; 
    // cout << "Jumlah Baris : "; cin >> baris;
    // cout << "Jumlah Kolom : "; cin >> kolom;
    // while (outer < baris)
    // {
    //     for (inner = 0; inner < kolom; inner++)
    //     {
    //         cout << nilaiMatriks << " ";
    //         nilaiMatriks++;
    //     }
    //     outer++;
    //     cout<<endl;
    // }


    //Pola Piramida Output * ==> Kecil ke besar
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    int outer, inner, iBaris;
    cout << "Masukkan jumlah baris:  ";
    cin >> iBaris;
    for (outer = 1; outer <= iBaris; outer++)
    {
        for (inner = 1; inner <= outer; inner++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    


    //Pola Piramida Output * ==> Besar ke kecil
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    // int outer, inner, iBaris;
    // cout << "Masukkan jumlah baris:  ";
    // cin >> iBaris;
    // for (outer = iBaris; outer >= 1; outer--)
    // {
    //     for (inner = 1; inner <= outer; inner++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    //Pola Piramida output angka
    // 1
    // 123
    // 12345
    // 1234567
    // int outer, inner, iBaris;
    // cout << "Masukkan jumlah baris:  ";
    // cin >> iBaris;
    // for (outer = 1; outer <= iBaris; outer += 2)
    // {
    //     for (inner = 1; inner <= outer; inner++)
    //     {
    //         cout << inner;
    //     }
    //     cout << "" << endl;
    // }

    return 0;
}