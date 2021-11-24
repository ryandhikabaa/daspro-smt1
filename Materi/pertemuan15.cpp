#include <iostream>

using namespace std;

int main()
{

    //1
    // for (int i = 1; i <=10 ; i+=2)
    // {
    //     cout << i ;
    // }

    //2
    // for (int i = 5; i >=1 ; i--)
    // {
    //     cout << i ;
    // }

    //3
    // for (int i = 2; i <=35 ; i*=2)
    // {
    //     cout << " " << i ;
    // }

    //4
    // for (int i = 5; i <= 25; i += 5)
    // {
    //     cout << " " << i;
    // }

    //5
    // for (int i = 32; i >=2 ; i /= 2)
    // {
    //     cout << " " << i ;
    // }

    // 6)1 4 9 16 25
    // 7)1 5 8 10 11 11
    // 8)1 3 7 13 21
    // 9)1 4 8 13 19

    //6) 1 4 9 16 25 ==> 1x1 | 2x2| 3x3 |4x4|5x5 
    // int i;
    // int j = 1;
    // for (int i = 1; i<=5 ; i++, j=i*i)
    // {
    //     cout << j << endl;
    // }

    //7) 1 5 8 10 11 11 ==> +4|+3|+2|+1|+0
    // int i = 5;
    // int j = 1;
    // for (i = 5; i <= 5 && i >= 0;  i--, j+=i)
    // {
    //     cout << j << endl;
    // }

    //8) 1 3 7 13 21 ==> +2|+4|+6|+8
    int i = 0;
    int j = 1;
    for (i; i < 5; i++, j = j + 2 * i)
    {
        cout << j << endl;
    }

    //9) 1 4 8 13 19 ==> +3|+4|+5|+6
    // int i, j;
    // for (int i = 1; j<5 ; j++, i=j+i+2)
    // {
    //     cout << i << endl;
    // }

    return 0;
}
