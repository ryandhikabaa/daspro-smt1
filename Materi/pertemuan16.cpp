#include <iostream>

using namespace std;

int main()
{
    //Fibonacci
    // int inputBanyakDeret;
    // int derFib1 = 0;
    // int derFib2 = 1;
    // int derFebNext = 0;
    // cout << "Input Banyak Data Fibonacci :  "; cin >> inputBanyakDeret;
    // cout << endl << inputBanyakDeret << " Deret Fibonacci: ";

    // for (int i = 1; i <= inputBanyakDeret; ++i)
    // {
    //     if(i == 1)
    //     {
    //         cout << " " << derFib1<<" ";
    //         continue;
    //     }
    //     if(i == 2)
    //     {
    //         cout << derFib2 << " ";
    //         continue;
    //     }
    //     derFebNext = derFib1 + derFib2;
    //     derFib1 = derFib2;
    //     derFib2 = derFebNext;
    //     cout << derFebNext << " ";
    // }

    //Faktorial
    // int angka = 5;
    // int faktorial = 1;
    // for (int i = 1; i < angka; i++)
    // {
    //     faktorial  *= i;
    // }
    // cout << faktorial;

    int i = 1;
    int j = 5;
    int sum =0;

    while (i <= j)
    {
        sum += i*i;
        i++;
    }
    cout << "Hasilnya adalah : " << sum; 
    
    return 0;
}
