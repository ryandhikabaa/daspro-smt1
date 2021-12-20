#include <iostream>

using namespace std;

int main()
{
    int nDeret,i;
    cout << "Masukan jumlah deret fibonacci : ";
    cin >> nDeret;
    int arrayIndex[nDeret];
    arrayIndex[0]=0;
    arrayIndex[1]=1;
    for(i=2;i<nDeret;i++){
        arrayIndex[i] = arrayIndex[i-1] + arrayIndex[i-2];
    }
    cout << "Hasil " << nDeret << " Deret Fibonaci : ";
    for(i=0;i<nDeret;i++){
        cout << arrayIndex[i] << " ";
    }
    return 0;
}

