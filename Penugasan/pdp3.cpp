#include <iostream>

using namespace std;

int main()
{
    int menuMakananDipilih, menuMinumanDipilih, hargaMakananDipilih, hargaMinumanDipilih, totalBayar;
    string selectMenuReturn, namaMakananDipilih, namaMinumanDipilih;

    returnPilihMakanan:
    returnPilihMinuman:
    cout << "===============================================\n";
    cout << "               Kasir Menu Makanan              \n";
    cout << "===============================================\n";
    cout << "Daftar Menu Makanan : \n";
    cout << "1. Bakso           15000\n";
    cout << "2. Soto            8000\n";
    cout << "3. Mie Ayam        11000\n";
    cout << "4. Pecel           8000\n";
    cout << "5. Sate            20000\n";
    cout << "-----------------------------------------------\n";
    cout << "Daftar Menu Minuman : \n";
    cout << "1. Kopi Item       5000\n";
    cout << "2. Teh             3500\n";
    cout << "3. Soju            50000\n";
    cout << "4. Bir Pletok      10000\n";
    cout << "5. Bakso           2500\n";
    cout << "===============================================\n";
    cout << "Makanan dipilih : "; cin >> menuMakananDipilih;
    cout << "Minuman dipilih : "; cin >> menuMinumanDipilih;

    switch (menuMakananDipilih)
    {
    case 1:
        hargaMakananDipilih = 15000;
        namaMakananDipilih = "Bakso";
        break;
    case 2:
        hargaMakananDipilih = 8000;
        namaMakananDipilih = "Soto";
        break;
    case 3:
        hargaMakananDipilih = 11000;
        namaMakananDipilih = "Mie Ayam";
        break;
    case 4:
        hargaMakananDipilih = 8000;
        namaMakananDipilih = "Pecel";
        break;
    case 5:
        hargaMakananDipilih = 20000;
        namaMakananDipilih = "Sate";
        break;
    default:
        cout << "Pilihan makanan anda tidak tersedia\n";
        goto returnPilihMakanan;
        break;
    }

    switch (menuMinumanDipilih)
    {
    case 1:
        hargaMinumanDipilih = 5000;
        namaMinumanDipilih = "Kopi Item";
        break;
    case 2:
        hargaMinumanDipilih = 3500;
        namaMinumanDipilih = "Teh";
        break;
    case 3:
        hargaMinumanDipilih = 50000;
        namaMinumanDipilih = "Soju";
        break;
    case 4:
        hargaMinumanDipilih = 10000;
        namaMinumanDipilih = "Bir Pletok";
        break;
    case 5:
        hargaMinumanDipilih = 2500;
        namaMinumanDipilih = "Air Mineral";
        break;
    default:
        cout << "Pilihan minuman anda tidak tersedia\n";
        goto returnPilihMinuman;
        break;
    }

    totalBayar = hargaMakananDipilih + hargaMinumanDipilih;
    cout << "Total yang harus dibayar : " << totalBayar << "\n";
    cout << "===============================================\n\n";

    returnKonfirmasi:
    cout << "Pesanan sudah benar ? (y/n) : "; cin >> selectMenuReturn;
    if (selectMenuReturn=="y")
    {
        cout << "Pesanan yang sudah anda pesan:\n";
        cout << namaMakananDipilih << "             " << hargaMakananDipilih << "\n";
        cout << namaMinumanDipilih << "             " << hargaMinumanDipilih << "\n";

    }else if(selectMenuReturn=="n"){
        goto returnPilihMinuman;
    }else{
        cout << "Konfirmasi tidak tersedia, silakan ulangi kembali\n";
        goto returnKonfirmasi;
    }
    


    return 0;
}