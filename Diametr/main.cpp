#include <iostream>
#include <stdlib.h>
using namespace std; 
int main()
{
	setlocale(LC_ALL,"Russian");
   int radius; 
   cout << "Введите радиус окружности:  ";
   cin >> radius; 

   cout << "Диаметр  " << radius * 2.0 << "\n Окружность " << 2 * 3.14159 * radius
      << "\n Площадь равна " << 3.14159 * radius * radius << endl;
     system("pause");
}