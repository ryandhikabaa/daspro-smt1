#include <iostream>

using namespace std;

int main()
{
    int berapaKaliInput = 0;
    int inputanAngka = 0;
    cout << "Berapa kali melakukan percobaan: ";
    cin >> berapaKaliInput;
    int arrayInput[berapaKaliInput];
    int arrayPentol[berapaKaliInput];
    for (int i = 0; i < berapaKaliInput; i++)
    {
        cout << "Input angka " << i + 1 << ": ";
        cin >> inputanAngka;
        switch (inputanAngka)
        {
        case 0:
            arrayInput[i] = inputanAngka;
            arrayPentol[i] = 6;
            break;
        case 1:
            arrayInput[i] = inputanAngka;
            arrayPentol[i] = 2;
            break;
        case 2:
            arrayInput[i] = inputanAngka;
            arrayPentol[i] = 5;
            break;
        case 3:
            arrayInput[i] = inputanAngka;
            arrayPentol[i] = 5;
            break;
        case 4:
            arrayInput[i] = inputanAngka;
            arrayPentol[i] = 4;
            break;
        case 5:
            arrayInput[i] = inputanAngka;
            arrayPentol[i] = 5;
            break;
        case 6:
            arrayInput[i] = inputanAngka;
            arrayPentol[i] = 6;
            break;
        case 7:
            arrayInput[i] = inputanAngka;
            arrayPentol[i] = 3;
            break;
        case 8:
            arrayInput[i] = inputanAngka;
            arrayPentol[i] = 7;
            break;
        case 9:
            arrayInput[i] = inputanAngka;
            arrayPentol[i] = 6;
            break;
        default:
            cout << "Angka yang boleh di input adalah bilangan bulat kurang dari 10\n";
            arrayInput[i] = inputanAngka;
            arrayPentol[i] = 0;
            break;
        }
    }

    cout << "Maka Mawar harus menyiapkan, sebagai berikut: \n";
    for (int loopTampil = 0; loopTampil < berapaKaliInput; loopTampil++)
    {
        cout << "Input angka " << loopTampil + 1 << ": " << arrayInput[loopTampil] << " Membutuhkan => " << arrayPentol[loopTampil] << " Pentol korek\n";
    }

    return 0;
}