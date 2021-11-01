#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int p;
    masukanpin:
    cout << "Masukkan pin : ";
    cin >> p;
    if (p == 12345)
    {
        cout << "Login Berhasil" << endl;
    }
    else
    {
        cout << a << endl;
        if (a < 3)
        {
            a++;
            goto masukanpin;
        }
        else
        {
            cout << "Terblokir" << endl;
        }
    }
    cout << "Finish";
    return 0;
}