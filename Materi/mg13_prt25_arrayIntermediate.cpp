#include <iostream>

using namespace std;

int main()
{
    //mengisi arrqy dan deklarasi
    int a[4][4] = {
        {2018, 50, 60, 35}, 
        {2019, 55, 62, 40}, 
        {2020, 52, 65, 37}, 
        {2021, 56, 65, 38}};
    int i, j;
    int rataPerTahun = 0, rataPerProdi = 0;
    cout << "Tahun    Prodi A    Prodi B    Prodi C    \x1B[33mRata2/tahun\033[0m\n";
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            //untuk print array yang telah dimasukkan
            cout << a[i][j] << "        ";
            //counting / menambahkan data secara baris ke dalam variable
            if (j > 0)
            {
                rataPerTahun += (a[i][j]);
            }
        }
        //cout hasil perhitungan
        cout << "\x1B[33m" << rataPerTahun / 3 << "\033[0m";
        rataPerTahun = 0;
        cout << "\n";
    }

    cout << "\x1B[33mRata2/prodi \033[0m";
    for (j = 1; j < 4; j++)
    {
        // if (j > 0)
        // {
            for (i = 0; i < 4; i++)
            {
                //counting / menambahkan data secara kolom ke dalam variable
                rataPerProdi += (a[i][j]);
            }
            //cout hasil perhitungan
            cout << "\x1B[33m" << rataPerProdi / 4 << "\033[0m"
                 << "        ";
            rataPerProdi = 0;
        // }
    }
    return 0;
}