#include <iostream>
using namespace std;
int main()
{
 string n;

 cout << "Podaj liczbe:";
 cin >> n;
 while (n!=0)
 {
 cout << n << endl;
 n=n-1;
 }
 cout << "Haslo poprawne" << endl;
 system("PAUSE");
 return 0;
}
