Algoritmo Calculadora
    repetir
        Escribir "¿Cuál es su nombre?: "
        Leer nombre
        Escribir "Hola ", nombre, ", ¿qué operación desea realizar?"
        Escribir " 1) Suma"
        Escribir " 2) Resta"
        Escribir " 3) Multiplicación"
        Escribir " 4) División"
        Escribir " 0) Salir"
        Leer opcion
		
        Si opcion = 1 Entonces
            Escribir "Ingrese un primer valor: "
            Leer primero
            Escribir "Ingrese un segundo valor: "
            Leer segundo
            resultado <- primero + segundo
            Escribir "El resultado de ", primero, " + ", segundo, " = ", resultado
        Sino
            Si opcion = 2 Entonces
                Escribir "Ingrese un primer valor: "
                Leer primero
                Escribir "Ingrese un segundo valor: "
                Leer segundo
                resultado <- primero - segundo
                Escribir "El resultado de ", primero, " - ", segundo, " = ", resultado
				
            Sino
                Si opcion = 3 Entonces
                    Escribir "Ingrese un primer valor: "
                    Leer primero
                    Escribir "Ingrese un segundo valor: "
                    Leer segundo
                    resultado <- primero * segundo
                    Escribir "El resultado de ", primero, " * ", segundo, " = ", resultado
                Sino
                    Si opcion = 4 Entonces
                        repetir
                            Escribir "Ingrese un primer valor (no puede ser 0): "
                            Leer primero
                        hasta que primero <> 0
						
                        repetir
                            Escribir "Ingrese un segundo valor (no puede ser 0): "
                            Leer segundo
                        hasta que segundo <> 0
						
                        resultado <- primero / segundo
                        Escribir "El resultado de ", primero, " / ", segundo, " = ", resultado
                    Sino
                        Si opcion = 0 Entonces
                            Escribir "Hasta luego ", nombre, "..."
                        FinSi
                    FinSi
                FinSi
            FinSi
        FinSi
		
        Escribir "¿Desea realizar otra operación? (1: Sí, 0: No): "
        Leer opcionRegresar
    hasta que opcionRegresar = 0
FinAlgoritmo