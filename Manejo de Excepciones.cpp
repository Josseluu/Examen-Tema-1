#include <iostream>
int division(int numerador, int denominador)
{if (denominador == 0) {
throw std::runtime_error("No se puede dividir entre 0");}
return numerador / denominador;}

int main ()
{int numerador, denominador;
std::cout << "Numerador:";
std::cin >> numerador;
std::cout << "Denominador:";
std::cin >> denominador;

try{ int resultado = division (numerador, denominador);
std::cout << "La division da" <<resultado << std:: endl;}

catch (std::runtime_error & e)
{std::cout << "Error: " << e.what() << std::endl;}
return 0;}

