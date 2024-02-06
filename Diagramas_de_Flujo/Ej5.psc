Algoritmo sin_titulo
	Escribir "Hola, ingrese el valor de la altura y de la base del triangulo para poder calcular su superficie"
	Mientras (h<=0)|(b<=0) Hacer
		Escribir "Ingrese el valor de la altura: "
		Leer h
		Escribir "Ingrese el valor de la base: "
		Leer b
		Si (h<=0)|(b<=0) Entonces
			Escribir "Error, ingrese valores mayores a cero en ambos casos"
		FinSi
	FinMientras
	superficie = (h*b)/2
	Escribir  "La superficie del triangulo es de ",superficie," si el valor de la base es ",b," y el valor de la altura es ",h
FinAlgoritmo
