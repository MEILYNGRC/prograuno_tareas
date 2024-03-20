#include <iostream>

class Cuenta {
private:
    int saldo;

public:
    // Constructor que recibe un saldo inicial
    Cuenta(int saldoInicial) {
        if (saldoInicial >= 0) {
            saldo = saldoInicial;
        } else {
            saldo = 0;
            std::cout << "Error: saldo inicial inválido. El saldo se estableció en 0." << std::endl;
        }
    }

    // Función para abonar un monto al saldo
    void abonar(int monto) {
        saldo += monto;
    }

    // Función para cargar un monto del saldo
    void cargar(int monto) {
        if (monto > saldo) {
            std::cout << "El monto a cargar excede el saldo de la cuenta." << std::endl;
        } else {
            saldo -= monto;
        }
    }

    // Función para obtener el saldo actual
    int obtenerSaldo() {
        return saldo;
    }
};

int main() {
    // Crear dos objetos Cuenta
    Cuenta cuenta1(1000);
    Cuenta cuenta2(500);

    // Evaluar las funciones miembro
    std::cout << "Saldo inicial de cuenta1: " << cuenta1.obtenerSaldo() << std::endl;
    std::cout << "Saldo inicial de cuenta2: " << cuenta2.obtenerSaldo() << std::endl;

    cuenta1.abonar(500);
    cuenta2.cargar(200);

    std::cout << "Saldo después de abonar a cuenta1: " << cuenta1.obtenerSaldo() << std::endl;
    std::cout << "Saldo después de cargar a cuenta2: " << cuenta2.obtenerSaldo() << std::endl;

    return 0;
}
