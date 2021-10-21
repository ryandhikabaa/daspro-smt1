#include <iostream>

using namespace std;

int main()
{
    int inputNilai;
    cout << "===== Penghitungan Grade Nilai (Konversi Nilai) =====\n";
    cout << "Masukkan Nilai : " ; cin >> inputNilai;

    if((inputNilai > 100)){
        cout << "===============================================\n";
        cout << "Nilai yang di input melebihi standart penilaian\n"; 
        cout << "===============================================";
    }

    if((inputNilai >= 85) && (inputNilai <= 100)){
        cout << "===============================\n";
        cout << "Grade Nilai yang Diperoleh : A\n"; 
        cout << "===============================";
    }

    if((inputNilai >= 70) && (inputNilai < 85)){
        cout << "===============================\n";
        cout << "Grade Nilai yang Diperoleh : B\n"; 
        cout << "===============================";
    }

    if((inputNilai >= 60) && (inputNilai < 70)){
        cout << "===============================\n";
        cout << "Grade Nilai yang Diperoleh : C\n"; 
        cout << "===============================";
    }

    if((inputNilai >= 50) && (inputNilai < 60)){
        cout << "===============================\n";
        cout << "Grade Nilai yang Diperoleh : D\n"; 
        cout << "===============================";
    }

    if(inputNilai < 50){
        cout << "===============================\n";
        cout << "Grade Nilai yang Diperoleh : E\n"; 
        cout << "===============================";
    }

    
    return 0;
}
