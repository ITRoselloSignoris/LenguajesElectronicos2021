Algoritmo sin_titulo
	Escribir "Hola, a continuacion ingrese 10 valores"
	Para x<-0 Hasta 9 Hacer
		val = 0
		Mientras val=0 Hacer
			Leer val
			Si val=0 Entonces
				Escribir "No se pueden ingresar valores iguales a cero"
			SiNo
				Si val>0 Entonces
					sum = sum+val
				SiNo
					Si pro=0 Entonces
						pro = val
					SiNo
						pro = val*pro
					FinSi
				FinSi
			FinSi
		FinMientras
	FinPara
	Escribir "El resultado de la suma de los positivos es ",sum," y el resultado del producto de los negativos es ",pro
FinAlgoritmo
