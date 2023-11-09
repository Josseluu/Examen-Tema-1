#include <iostream>

void intercambiar(int*a, int*b)
{int temp = *a;
*a = *b;
*b = temp}

int main ()
{int numero1 =33;
int numero2 =14;
std::cout << "Numeros con sus valores originales:" <<numero1<< "y" <<numero2<<std:: endl;
intercambiar (&numero1, &numero2);
std::cout << "Numeros despues del intercambio:"  <<numero1<< "y" <<numero2<<std:: endl;
return 0;}