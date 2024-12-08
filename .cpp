#include <iostream>
using namespace std;
int main()
{
double num;
double sum = 0.0;
// Цикл do...while
do
{
cout << "enter number: ";
cin >> num;
// Перевірка, чи є число тризначним додатнім
if (num > 99 && num < 1000)
sum += num;
{
}
} while (num != 0);
// Кінець циклу при введенні 0
cout << "sum three-digit numbers: " << sum << endl;
return 0;
}
