#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_EQUIPOS = 6;

// Función para generar un número aleatorio entre min y max
int generarNumeroAleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Función para simular un partido entre dos equipos y actualizar la tabla de posiciones
void simularPartido(int& equipo1Goles, int& equipo2Goles, int& partidosJugados, int& partidosGanados, int& partidosPerdidos, int& partidosEmpatados) {
    equipo1Goles = generarNumeroAleatorio(0, 10);
    equipo2Goles = generarNumeroAleatorio(0, 10);
    partidosJugados++;

    if (equipo1Goles > equipo2Goles) {
        partidosGanados++;
    } else if (equipo1Goles < equipo2Goles) {
        partidosPerdidos++;
    } else {
        partidosEmpatados++;
    }
}

// Función para imprimir la tabla de posiciones
void imprimirTabla(const string equipos[], const int partidosJugados[], const int partidosGanados[], const int partidosPerdidos[], const int partidosEmpatados[]) {
    cout << "Tabla de Posiciones:" << endl;
    cout << "Equipo\tPartidos Jugados\tPartidos Ganados\tPartidos Perdidos\tPartidos Empatados" << endl;
    for (int i = 0; i < NUM_EQUIPOS; ++i) {
        cout << equipos[i] << "\t" << partidosJugados[i] << "\t\t" << partidosGanados[i] << "\t\t" << partidosPerdidos[i] << "\t\t" << partidosEmpatados[i] << endl;
    }
}

int main() {
    srand(time(nullptr)); // Inicializar la semilla para los números aleatorios

    string equipos[NUM_EQUIPOS];
    int partidosJugados[NUM_EQUIPOS] = {0};
    int partidosGanados[NUM_EQUIPOS] = {0};
    int partidosPerdidos[NUM_EQUIPOS] = {0};
    int partidosEmpatados[NUM_EQUIPOS] = {0};

    // Ingreso de nombres de equipos
    cout << "Ingrese los nombres de los equipos:" << endl;
    for (int i = 0; i < NUM_EQUIPOS; ++i) {
        cout << "Equipo " << i + 1 << ": ";
        getline(cin, equipos[i]);
    }

    // Simulación de partidos
    for (int i = 0; i < NUM_EQUIPOS; ++i) {
        for (int j = i + 1; j < NUM_EQUIPOS; ++j) {
            int equipo1Goles, equipo2Goles;
            cout << "Simulación de partido entre " << equipos[i] << " y " << equipos[j] << endl;
            simularPartido(equipo1Goles, equipo2Goles, partidosJugados[i], partidosGanados[i], partidosPerdidos[i], partidosEmpatados[i]);
            simularPartido(equipo2Goles, equipo1Goles, partidosJugados[j], partidosGanados[j], partidosPerdidos[j], partidosEmpatados[j]);
            cout << equipos[i] << " " << equipo1Goles << " - " << equipo2Goles << " " << equipos[j] << endl;
        }
    }

    // Mostrar tabla de posiciones
    imprimirTabla(equipos, partidosJugados, partidosGanados, partidosPerdidos, partidosEmpatados);

    // Calcular equipo ganador
    int maxPartidosGanadosIndex = 0;
    for (int i = 1; i < NUM_EQUIPOS; ++i) {
        if (partidosGanados[i] > partidosGanados[maxPartidosGanadosIndex]) {
            maxPartidosGanadosIndex = i;
        }
    }
    cout << "El equipo ganador del campeonato es: " << equipos[maxPartidosGanadosIndex] << endl;

    // Calcular equipo que desciende
    int minPartidosGanadosIndex = 0;
    for (int i = 1; i < NUM_EQUIPOS; ++i) {
        if (partidosGanados[i] < partidosGanados[minPartidosGanadosIndex]) {
            minPartidosGanadosIndex = i;
        }
    }
    cout << "El equipo que desciende de categoría es: " << equipos[minPartidosGanadosIndex] << endl;

    return 0;
}
