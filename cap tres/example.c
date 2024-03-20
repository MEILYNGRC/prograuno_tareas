#include <iostream>
#include <string>

class Empleado {
private:
    std::string primerNombre;
    std::string apellidoPaterno;
    int salarioMensual;

public:
    // Constructor que inicializa los datos miembros
    Empleado(std::string primerNombre, std::string apellidoPaterno, int salarioMensual) {
        this->primerNombre = primerNombre;
        this->apellidoPaterno = apellidoPaterno;
        // Validar salario mensual
        if (salarioMensual > 0) {
            this->salarioMensual = salarioMensual;
        } else {
            this->salarioMensual = 0;
            std::cout << "Error: Salario mensual no válido. Se estableció en 0." << std::endl;
        }
    }

    // Funciones para establecer y obtener el primer nombre
    void establecerPrimerNombre(std::string primerNombre) {
        this->primerNombre = primerNombre;
    }

    std::string obtenerPrimerNombre() {
        return primerNombre;
    }

    // Funciones para establecer y obtener el apellido paterno
    void establecerApellidoPaterno(std::string apellidoPaterno) {
        this->apellidoPaterno = apellidoPaterno;
    }

    std::string obtenerApellidoPaterno() {
        return apellidoPaterno;
    }

    // Funciones para establecer y obtener el salario mensual
    void establecerSalarioMensual(int salarioMensual) {
        if (salarioMensual > 0) {
            this->salarioMensual = salarioMensual;
        } else {
            this->salarioMensual = 0;
            std::cout << "Error: Salario mensual no válido. Se estableció en 0." << std::endl;
        }
    }

    int obtenerSalarioMensual() {
        return salarioMensual;
    }

    // Función para obtener el salario anual
    int obtenerSalarioAnual() {
        return salarioMensual * 12;
    }

    // Función para aplicar un aumento del 10% al salario mensual
    void aplicarAumento() {
        salarioMensual *= 1.1; // Aumento del 10%
    }
};

int main() {
    // Crear dos objetos Empleado
    Empleado empleado1("John", "Doe", 3000);
    Empleado empleado2("Jane", "Smith", 4000);

    // Mostrar salario anual de cada empleado
    std::cout << "Salario anual de " << empleado1.obtenerPrimerNombre() << " "
              << empleado1.obtenerApellidoPaterno() << ": $" << empleado1.obtenerSalarioAnual() << std::endl;

    std::cout << "Salario anual de " << empleado2.obtenerPrimerNombre() << " "
              << empleado2.obtenerApellidoPaterno() << ": $" << empleado2.obtenerSalarioAnual() << std::endl;

    // Aplicar un aumento del 10% a cada empleado
    empleado1.aplicarAumento();
    empleado2.aplicarAumento();

    // Mostrar salario anual después del aumento
    std::cout << "\nSalario anual después del aumento del 10%:" << std::endl;
    std::cout << "Salario anual de " << empleado1.obtenerPrimerNombre() << " "
              << empleado1.obtenerApellidoPaterno() << ": $" << empleado1.obtenerSalarioAnual() << std::endl;

    std::cout << "Salario anual de " << empleado2.obtenerPrimerNombre() << " "
              << empleado2.obtenerApellidoPaterno() << ": $" << empleado2.obtenerSalarioAnual() << std::endl;

    return 0;
}
