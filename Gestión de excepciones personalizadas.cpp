#include <iostream>
#include <stdexcept>
#include <string>
#include <unordered_set>

class MateriaYaRegistradaException : public std::runtime_error {
public:MateriaYaRegistradaException(const std::string& materia)
 : std::runtime_error("Error: La materia ya ha sido registrada - " + materia) {}};

class RegistroMaterias {
public:
void registrar_materia(const std::string& materia) {
if (materias_registradas.find(materia) != materias_registradas.end()) {
throw MateriaYaRegistradaException(materia);}
materias_registradas.insert(materia);
std::cout << "Materia registrada: " << materia << std::endl;}

private:
std::unordered_set<std::string> materias_registradas;};

int main() {
RegistroMaterias registro;

try {
registro.registrar_materia("Programción");
registro.registrar_materia("Matematicas");
registro.registrar_materia("Comunicación");}

catch (const MateriaYaRegistradaException& e) {
std::cerr << e.what() << std::endl;}
 return 0;}
