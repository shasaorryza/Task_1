/*
    Nama       : Orryza Dwi Juni Ayuningtyas
    NIM        : 1301144416
    Kelas      : IF 38-06
*/

#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>



using namespace std;

int main()


{
    int h,i;
    char op;
    string operasi;
    cout<<"==============Kalkulator==============="<<endl;
    cout<<"Penjelasan Program"<<endl;
    cout<<"1 -> Masukkan Bilangan Pertama"<<endl;
    cout<<"2 -> Masukkan Bilangan Kedua"<<endl;
    cout<<"operasi -> Masukkan simbol bilangan +,-,*,/ umtuk operasi menghitungnya"<<endl;

    cout<<"========================================="<<endl;
    cout<<"Masukkan Bilangan 1:";
    cin>>h;
    cout<<"Masukkan Bilangan 2:";
    cin>>i;
    cout<<"\nMasukkan Operator : ";
    cin>>op;
    if (op == '+') {
        cout<<h<<"+"<<i<<"="<<h+i<<endl;
    }
    else if (op == '-') {
        cout<<h<<"+"<<i<<"="<<h-i<<endl;
    }
    else if (op == '*') {
        cout<<h<<"+"<<i<<"="<<h*i<<endl;
    }
    else (op == '/') {
        cout<<h<<"+"<<i<<"="<<h/i<<endl;
    }
    getch();


}
