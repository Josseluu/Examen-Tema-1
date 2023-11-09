#include <iostream>
#include <string>
class Estudiante {

private:std::string nombre;
int edad;
std::string grado;

public:
Estudiante(const std::string& nombre, int edad, const std::string& grado)
: nombre(nombre), edad(edad), grado(grado) {}

void mostrar_info() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Grado: " << grado << std::endl;}
};
int main() {
Estudiante estudiante("Fernando Alonso", 33, "Ingenieria en automoviles");
estudiante.mostrar_info();
return 0;}
