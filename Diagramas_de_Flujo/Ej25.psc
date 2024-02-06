Algoritmo sin_titulo
	rea = -1
	Escribir "Hola, ingrese el valor de la parte real"
	Mientras rea<0 Hacer
		Leer rea
		Si rea<0 Entonces
			Escribir "Ingrese un valor positivo"
		FinSi
	FinMientras
	Escribir "Ingresa el valor de la parte imaginaria"
	Leer img
	Escribir "Ingrese la frecuencia de trabajo"
	Mientras hrz<=0 Hacer
		Leer hrz
		Si hrz<=0 Entonces
			Escribir "Ingresa un valor mayor a cero"
		FinSi
	FinMientras
	Si rea=0 Entonces
		resistencia = 0
		Si img=0 Entonces
			Escribir "El valor de la resistencia es ",resistencia," y no hay un capacitor o inductor en la impedancia porque el valor imaginario es ",img," por lo tanto se puede concluir que en esta impedancia no hay parte real ni imaginaria cosa que no puede pasar"
		SiNo
			Si img<0 Entonces
				capacitor = 1/(hrz*img)
				Escribir "El valor de la resistencia es ", resistencia," por lo tanto no hay una resistencia en la impedancia y el vlaor del capacitor es ",capacitor
			SiNo
				inductor = img/hrz
				Escribir "El valor de la resistencia es ",resistencia," por lo tanto no hay una resistencia en la impedancia y el valor del inductor es ",inductor
			FinSi
		FinSi
	SiNo
		resistencia = rea
		Si img=0 Entonces
			Escribir "El valor de la resistencia es ",resistencia," y este circuito no posee capacitores o inductores debido a que el valor imaginario es ",img
		SiNo
			Si img<0 Entonces
				capacitor = 1/(hrz*img)
				Escribir "El valor de la resistencia es ",resistencia," y el valor del capacitor es ",capacitor
			SiNo
				inductor = img/hrz
				Escribir "El valor de la resistencia es ",resistencia," y el valor del inductor es ",inductor
			FinSi
		FinSi
	FinSi
FinAlgoritmo
