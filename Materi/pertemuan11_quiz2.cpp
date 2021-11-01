#include <iostream>

using namespace std;

int main()
{ 

    // 1 
    // int a;
    // cin>>a;
    // if(a<0){
    //     a-=1;
    //     a*=-1;
    // }
    // cout<< a;

    // 3
    int a,b;
    string hasil;
    cin>>a;
    cin>>b;
    a=(a==b?a-1:b);
    hasil=(a%2==0?"genap":"ganjil");
    cout<< b << " "<< hasil;

    //5
    // int a,b;    
    // cin>>a;
    // cin>>b;
    // if(a<b){
    //     b -=a;
    //     a*=-1;
    // }else{
    //     a-=b;
    //     a*=-1;
    // }
    // cout<<a;

    //6
    // int a;
    // cin>>a;
    // if(a<0){
    //     a -= 1;
    //     a *= -1;
    // }
    // else{
    //     a+=-1;
    // }
    // cout<< a;

    //7
    // int a,b,c;
    // string hasil;
    // cin>>a;
    // cin>>b;
    // c=(a<b?a:b);
    // hasil=(c%2==0?"ganjil":"genap");
    // cout<< c << " hasil";

    return 0;
}