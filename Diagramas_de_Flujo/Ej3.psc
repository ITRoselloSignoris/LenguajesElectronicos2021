Algoritmo sin_titulo
	Escribir 'Hola, ingrese 10 valores'
	Para s<-0 Hasta 9 Hacer
		Leer Val
		Si Val>=0 Entonces
			Si Val!=0 Entonces
				Mayores <- Mayores+1
			FinSi
		SiNo
			Menores <- Menores+1
		FinSi
	FinPara
	Escribir 'De los 10 valores ingresados, ',Mayores,' son mayores a cero y ',Menores,' son menores a cero'
FinAlgoritmo
