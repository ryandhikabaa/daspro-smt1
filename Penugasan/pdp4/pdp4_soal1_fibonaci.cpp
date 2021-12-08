#include <iostream>

using namespace std;

int main()
{
    // Soal No 1 == >Fibonacci
    int inputBanyakDeret;
    int derFib1 = 0;
    int derFib2 = 1;
    int derFebNext = 0;
    cout << "Input Banyak Data Fibonacci (n) :  "; cin >> inputBanyakDeret;
    cout << endl << inputBanyakDeret << " Deret Fibonacci: ";

    for (int i = 1; i <= inputBanyakDeret; ++i)
    {
        if(i == 1)
        {
            cout << " " << derFib1<<" ";
            continue;
        }
        if(i == 2)
        {
            cout << derFib2 << " ";
            continue;
        }
        derFebNext = derFib1 + derFib2;
        derFib1 = derFib2;
        derFib2 = derFebNext;
        cout << derFebNext << " ";
    }
    return 0;

}