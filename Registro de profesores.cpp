#include <iostream>
#include <string>

class Profesor {
public:
Profesor(std::string nombre, int edad, std::string materia, int experiencia)
: nombre(nombre), edad(edad), materia(materia), experiencia(experiencia) {}

void mostrar_info_profesor() const {
std::cout << "Nombre: " << nombre << std::endl;
std::cout << "Edad: " << edad << " años" << std::endl;
std::cout << "Asignatura que da: " << materia << std::endl;
std::cout << "Años de experiencia: " << experiencia << " años" << std::endl;}

private:
std::string nombre;
int edad;
std::string materia;
int experiencia;};

int main() {
    Profesor profesor1("Jose Luis ", 33, "Programación", 13);
Profesor profesor2("María Juarez", 69, "Matematicas", 40);
std::cout << "Información del Profesor 1:" << std::endl;
profesor1.mostrar_info_profesor();
std::cout << "\nInformación del Profesor 2:" << std::endl;
profesor2.mostrar_info_profesor();

    return 0;
}
