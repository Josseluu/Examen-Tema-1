#include <iostream>
#include <string>

class RegistroAsistencia {
public:
RegistroAsistencia(std::string fecha, std::string estado) : fecha(fecha), estado(estado) {}
void mostrar_asistencia()
{std::cout << "Fecha: " << fecha << "  Estado: " << estado << std::endl;}

private:
std::string fecha;
std::string estado;};

int main() {
RegistroAsistencia clase_1("09-11-2023", "Asistió");
RegistroAsistencia clase_2("08-11-2023", "Falta");
RegistroAsistencia clase_3("08-11-2023", "Tardanza");

clase_1.mostrar_asistencia();
clase_2.mostrar_asistencia();
clase_3.mostrar_asistencia();
return 0;}
