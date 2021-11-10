#include <iostream>

using namespace std;

int main()
{
    //UTS NO 1
    // int w = 0;
    // int x = 0;
    // int y = 0;
    // int z = 0;

    // w=x=y=z=1*2+3-4;
    // cout << "Line 1 ==> " << "W:" << w << " X:" << x << " Y:" << y << " Z:" << z;

    // w=x*2-2;
    // cout << "\n" << "Line 2 ==> " << "W:" << w << " X:" << x << " Y:" << y << " Z:" << z;

    // y=w-x;
    // cout << "\n" << "Line 3 ==> " << "W:" << w << " X:" << x << " Y:" << y << " Z:" << z;

    // z=x-w+5;
    // cout << "\n" << "Line 4 ==> " << "W:" << w << " X:" << x << " Y:" << y << " Z:" << z;

    // x=z+z-w;
    // cout << "\n" << "Line 5 ==> " << "W:" << w << " X:" << x << " Y:" << y << " Z:" << z;

    // z=w+x;
    // cout << "\n" << "Line 6 ==> " << "W:" << w << " X:" << x << " Y:" << y << " Z:" << z;

    //UTS NO 2
    int pinATM = 0;
    int saldoATM = 1000000;
    int pilihanMenu = 0;
    int jumlahLain = 0;

    cout << "---------------------------------------------\n";
    cout << "          Selamat Datang di ATM 'C'          \n";
    cout << "---------------------------------------------\n";
retryPinAtm:
    cout << "Masukkan PIN Anda : ";
    cin >> pinATM;
    if (pinATM != 123456)
    {
        cout << "PIN anda salah, silahkan ulangi kembali\n";
        goto retryPinAtm;
    }
    else
    {
        cout << "=============================================\n";
        cout << "                     MENU                    \n";
        cout << "=============================================\n";
        cout << "|1. 100000               5. 1000000         |\n";
        cout << "|2. 200000               6. Jumlah lain     |\n";
        cout << "|3. 500000               7. Informasi saldo |\n";
        cout << "|4. 800000               8. Keluar          |\n";
        cout << "=============================================\n";
    ulangiNominal:
        cout << "Masukkan Pilihan : ";
        cin >> pilihanMenu;
        switch (pilihanMenu)
        {
        case 1:
            if (saldoATM <= 100000)
            {
                cout << "Saldo Anda tidak Mencukupi Silahkan ulangi kembali\n";
                goto ulangiNominal;
            }
            else
            {
                saldoATM - 100000;
                cout << "Anda melakukan penarikan sebesar 100000\n";
                cout << "Sisa saldo anda = " << saldoATM << "\n";
                cout << "Terimakasih atas kunjungan anda\n";
            }
            break;
        case 2:
            if (saldoATM <= 200000)
            {
                cout << "Saldo Anda tidak Mencukupi Silahkan ulangi kembali\n";
                goto ulangiNominal;
            }
            else
            {
                saldoATM - 200000;
                cout << "Anda melakukan penarikan sebesar 200000\n";
                cout << "Sisa saldo anda = " << saldoATM << "\n";
                cout << "Terimakasih atas kunjungan anda\n";
            }
            break;
        case 3:
            if (saldoATM <= 500000)
            {
                cout << "Saldo Anda tidak Mencukupi Silahkan ulangi kembali\n";
                goto ulangiNominal;
            }
            else
            {
                saldoATM - 500000;
                cout << "Anda melakukan penarikan sebesar 500000\n";
                cout << "Sisa saldo anda = " << saldoATM << "\n";
                cout << "Terimakasih atas kunjungan anda\n";
            }
            break;
        case 4:
            if (saldoATM <= 800000)
            {
                cout << "Saldo Anda tidak Mencukupi Silahkan ulangi kembali\n";
                goto ulangiNominal;
            }
            else
            {
                saldoATM - 800000;
                cout << "Anda melakukan penarikan sebesar 800000\n";
                cout << "Sisa saldo anda = " << saldoATM << "\n";
                cout << "Terimakasih atas kunjungan anda\n";
            }
            break;
        case 5:
            if (saldoATM < 1000000)
            {
                cout << "Saldo Anda tidak Mencukupi Silahkan ulangi kembali\n";
                goto ulangiNominal;
            }
            else
            {
                saldoATM - 1000000;
                cout << "Anda melakukan penarikan sebesar 1000000\n";
                cout << "Sisa saldo anda = " << saldoATM << "\n";
                cout << "Terimakasih atas kunjungan anda\n";
            }
            break;
        case 6:
            cout << "Maksimal Tarik Tunai 1250000: \n";
        ulangiJumlahLain:
            cout << "Jumlah uang yang anda ambil : ";
            cin >> jumlahLain;
            if (saldoATM < jumlahLain)
            {
                cout << "Saldo Anda tidak Mencukupi Silahkan ulangi kembali\n";
                goto ulangiJumlahLain;
            }
            else if (jumlahLain % 50000 != 0)
            {
                cout << "Yang anda masukkan bukan kelipatan 50.000\n";
                goto ulangiJumlahLain;
            }
            else
            {
                saldoATM - jumlahLain;
                cout << "Sisa saldo anda = " << saldoATM << "\n";
                cout << "Terimakasih atas kunjungan anda\n";
            }
            break;
        case 7:
            cout << "Sisa saldo anda = " << saldoATM << "\n";
            cout << "Terimakasih atas kunjungan anda\n";
            break;
        case 8:
            cout << "Anda keluar dari sistem\n";
            cout << "Terimakasih atas kunjungan anda\n";
            break;

        default:
            cout << "Pilihan tidak valid, silahkan coba lagi\n";
            goto ulangiNominal;
            break;
        }
    }

    return 0;
}