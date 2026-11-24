#include <iostream>
using namespace std;

int main()
{
  int num1, num2, temp;

cout << "Inserisci il primo numero: ";
cin >> num1;

  cout << "Inserisci il secondo numero: ";
 cin >> num2;

if (num1 > num2)
{
 temp = num1;
num1 = num2;
 num2 = temp;
}

cout << "Il minore e' " << num1 << endl;
  cout << "Il maggiore e' " << num2 << endl;

}
