Algoritmo sin_titulo
	Escribir "Hola, ingresar la parte real"
	Mientras rea<=0 Hacer
		Leer rea
		Si rea<0 Entonces
			Escribir "El valor real no puede ser negativo"
		FinSi
	FinMientras
	Escribir "Ingrese la parte imaginaria"
	Leer img
	angulo = (atan (img/rea))*57.2958
	modulo = rc(img^2 +rea^2)
	Escribir "El modulo es ",modulo," y el angulo es ",angulo," cuando la parte real es ",rea," y la parte imaginaria es ",img
FinAlgoritmo
