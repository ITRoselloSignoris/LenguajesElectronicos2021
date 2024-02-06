Algoritmo sin_titulo
	rad = pi/180
	Escribir 'Hola, ingrese el modulo de la tension'
	Mientras modu_V<=0 Hacer
		Leer modu_V
		Si modu_V<=0 Entonces
			Escribir 'Ingrese un valor mayor a cero'
		FinSi
	FinMientras
	Escribir 'Ingrese el angulo de la tension'
	Leer ang_V
	Escribir "Ingrese el modulo de la corriente"
	Mientras modu_I<=0 Hacer
		Leer modu_I
		Si modu_I<=0 Entonces
			Escribir "Ingrese un valor mayor a cero"
		FinSi
	FinMientras
	Escribir "Ingrese el angulo de la corriente"
	Leer ang_I
	Escribir 'Ingrese la frecuencia de trabajo'
	Mientras hrz<=0 Hacer
		Leer hrz
		Si hrz<=0 Entonces
			Escribir 'Ingresa un valor mayor a cero'
		FinSi
	FinMientras
	modu_Z = modu_V/modu_I
	ang_Z = ang_V-ang_I
	ang_Z = ang_Z*rad
	rea = modu_Z*(cos(ang_Z))
	img = modu_Z*(sen(ang_Z))
	Si rea=0 Entonces
		resistencia <- 0
		Si img=0 Entonces
			Escribir 'El valor de la resistencia es ',resistencia,' y no hay un capacitor o inductor en la impedancia porque el valor imaginario es ',img,' por lo tanto se puede concluir que en esta impedancia no hay parte real ni imaginaria cosa que no puede pasar'
		SiNo
			Si img<0 Entonces
				capacitor <- 1/(hrz*img)
				Escribir 'El valor de la resistencia es ',resistencia,' por lo tanto no hay una resistencia en la impedancia y el vlaor del capacitor es ',capacitor
			SiNo
				inductor <- img/hrz
				Escribir 'El valor de la resistencia es ',resistencia,' por lo tanto no hay una resistencia en la impedancia y el valor del inductor es ',inductor
			FinSi
		FinSi
	SiNo
		resistencia <- rea
		Si img=0 Entonces
			Escribir 'El valor de la resistencia es ',resistencia,' y este circuito no posee capacitores o inductores debido a que el valor imaginario es ',img
		SiNo
			Si img<0 Entonces
				capacitor <- 1/(hrz*img)
				Escribir 'El valor de la resistencia es ',resistencia,' y el valor del capacitor es ',capacitor
			SiNo
				inductor <- img/hrz
				Escribir 'El valor de la resistencia es ',resistencia,' y el valor del inductor es ',inductor
			FinSi
		FinSi
	FinSi
FinAlgoritmo
