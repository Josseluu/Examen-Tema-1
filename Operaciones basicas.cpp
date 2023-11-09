#include <iostream>

int suma(int num1, int num2)
{return num1 + num2;}

int main ()
{int numero1, numero2;
std::cout << "Primer número que quieres sumar:";
std::cin >> numero1;
std::cout <<"Numero por el cual será sumado:";
std::cin >> numero2;

int resultado = suma(numero1, numero2);
std::cout <<"La suma da:" << resultado << std:: endl;
return 0;}