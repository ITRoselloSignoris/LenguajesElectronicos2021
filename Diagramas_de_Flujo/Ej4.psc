Algoritmo sin_titulo
	Escribir "Hola, a continuaci�n introduzca el valor del radio del circulo"
	Mientras rad<=0 Hacer
		Leer rad
		Si rad<=0 Entonces
			Escribir "ERROR, ingrese un valor superior a cero"
		FinSi
	FinMientras
	per�metro = 2*3.14*rad
	�rea = 3.14*rad*rad
	Escribir "El valor del �rea es de ",�rea," y el valor del per�metro es de ",per�metro," si el radio tiene un valor de ", rad
FinAlgoritmo
