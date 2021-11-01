#include <iostream>

using namespace std;

int main()
{
    // int a, b;

    // cout << "Input a : " ; cin >> a;
    // cout << "Input b : " ; cin >> b;

    // if (a>=b)
    // {
    //    cout << "A lebih besar dari sama dengam B \n";
    // }else {
    //     cout << "B lebih besar dari sama dengam A \n";
    // }

    int iInputan;

    cout << "Input bilangan : " ; cin >> iInputan;

    if(iInputan<0){
        iInputan = iInputan * -1;
        if (iInputan%5==0)
        {
            cout << "hore ketemu bilangan kelipatan 5 \n";
        }else {
            cout << "yah... bukan bilangan kelipatan 5 \n";
        }
    }else {
        if (iInputan%5==0)
        {
            cout << "hore ketemu bilangan kelipatan 5 \n";
        }else {
            cout << "yah... bukan bilangan kelipatan 5 \n";
        }
    }

}