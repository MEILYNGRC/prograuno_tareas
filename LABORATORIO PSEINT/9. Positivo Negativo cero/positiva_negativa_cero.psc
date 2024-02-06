Algoritmo positiva_negativa_cero
	
	Escribir "Ingrese el primer valor:"
    Leer v1
	
    Escribir "Ingrese el segundo valor:"
    Leer v2
	
    suma <- v1 + v2
	
    Si suma > 0 Entonces
        Escribir "La suma es positiva"
    Sino Si suma < 0 Entonces
			Escribir "La suma es negativa"
		Sino
			Escribir "La suma es cero"
		FinSi
	FinSi
FinAlgoritmo
