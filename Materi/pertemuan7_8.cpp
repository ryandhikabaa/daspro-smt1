#include <iostream>

using namespace std;

int main()
{
    
    //Validasi 
    // int a;
    // cin >> a;
    // if(a > 0){
    //     cout << "valid" << endl;
    // }
    // cout << "selesai";


    //Validasi By Constanta
    // int a;
    // const int X = 10;
    // cin >> a;
    // if (a > X)
    // {
    //     cout << a << endl;
    // }
    // cout << "selesai";

    //Komputasional (Absolut)
    // int x;
    // cin >> x;
    // if(x<0){
    //     x = x * -1;
    // }
    // cout << x;

    // Genap lebih dari 2
    int a;

    cout << "Input angka : " ; cin >> a;
    if ((a%2==0) && (a>2))
    {
       cout << a << endl;
    }
    cout << "selesai";
    

    return 0;
}
