#include <iostream>

using namespace std;

int main()
{
    cout << "Hello Welcome To Library" <<"\n""\n";
    cout <<"Anda bisa memilih nomor sesuai yang anda cari" <<"\n";
    int nilai1,nilai2,nilai3,nilai4,pilihan,hasil;
    cout <<"[1] Arti dari Coding" <<"\n";
    cout <<"[2] Contoh Coding" <<"\n";
    cout <<"[3] Arti Cinta" <<"\n";
    cout <<"[4] Mengerti kan ?" <<"\n";
    cout <<"\n";
    cout <<"Masukkan Angka : "; cin>>pilihan;
    cout <<"\n";
    if (pilihan>4)
    {
        cout <<"Pilihan Anda Salah!!" <<endl;
    }else if (pilihan==1)
    {
        cout <<"Coding adalah sebuah program yang dimasukkan oleh programmer"<<endl;
    }
    else if (pilihan==2)
    {
        cout <<"Contoh doing seperti 1*1=1"<<endl;
    }
    else if (pilihan==3)
    {
        cout <<"Cinta adalah persatuan antara 2 hati 2 karakter 2 manusia, menjadi satu yang disebut 'kita' "<<endl;
    }
    else if (pilihan==4)
    {
        cout <<"Engga"<<endl;
    }
    return 0;
}