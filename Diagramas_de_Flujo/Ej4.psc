Algoritmo sin_titulo
	Escribir "Hola, a continuación introduzca el valor del radio del circulo"
	Mientras rad<=0 Hacer
		Leer rad
		Si rad<=0 Entonces
			Escribir "ERROR, ingrese un valor superior a cero"
		FinSi
	FinMientras
	perímetro = 2*3.14*rad
	área = 3.14*rad*rad
	Escribir "El valor del área es de ",área," y el valor del perímetro es de ",perímetro," si el radio tiene un valor de ", rad
FinAlgoritmo
