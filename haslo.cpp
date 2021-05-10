#include <iostream>
using namespace std;
int main()
{
 string n;
 string a;
 cout << "Podaj haslo:";
 cin >> n;
 while (n!=a)
 {
 cout << "Podałeś zle haslo.Podaj haslo: ";
 cin >> a;
 }
 cout << "Haslo poprawne" << endl;
 system("PAUSE");
 return 0;
}
