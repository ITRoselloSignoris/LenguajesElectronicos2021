Algoritmo sin_titulo
	Escribir "Hola, ingrese la cantidad de cm"
	Mientras cm<=0 Hacer
		Leer cm
		Si cm<=0 Entonces
			Escribir "Error, ingrese un valor mayor a cero"
		FinSi
	FinMientras
	inch = cm/2.54
	pies = inch/12
	Escribir cm," cm son ",pies," pies y ",inch," pulgadas"
FinAlgoritmo
