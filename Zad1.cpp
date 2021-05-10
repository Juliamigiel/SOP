#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
string imie;
int main()
{
    cout<<"Hello";
    fstream zapis;
    zapis.open("s01-hello-me.cpp",ios::out | ios::app);
    cout<<"podaj imie: ";
    cin>>imie;
    zapis<<"imie: "<<imie<<endl;
    zapis.close();
    return 0;
}