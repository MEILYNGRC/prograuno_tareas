Algoritmo Salario
	Escribir "Ingrese el número de horas trabajadas a la semana: ";
	Leer horast;
	
	Escribir "Ingrese la tarifa horaria del empleado: ";
	Leer th;
	
	Si horasTrabajadas <= 40 Entonces
		salarioSemanal = horast * th
	FinSi
	
	Escribir "El salario semanal del empleado es: ", salarioSemanal
	
FinAlgoritmo
