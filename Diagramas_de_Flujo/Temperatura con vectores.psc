Algoritmo sin_titulo
	Dimension tmp[100]
	i <- 1
	Repetir
		Escribir 'Ingrese una temperatura'
		Leer tmp[i]
		Si tmp[i]>tmp_max O tmp_max=0 Entonces
			tmp_max <- tmp[i]
		FinSi
		Si tmp[i]<20 Y tmp[i]>10 Entonces
			tmpx <- tmpx+1
		FinSi
		Si tmp[i]<tmp_min O tmp_min=0 Entonces
			tmp_min <- tmp[i]
		FinSi
		tmp1 <- tmp1+tmp[i]
		times <- times+1
		tmp[i] <- tmp[i]+1
		Escribir '¿Quiere continuar con el programa? Si=1 No=0'
		Leer val
	Hasta Que val=0
	tmp_promedio <- tmp1/times
	Escribir 'El valor de la temperatura maxima es ',tmp_max,' grados'
	Escribir 'El valor de la temperatura minima es ',tmp_min,' grados'
	Escribir 'El promedio es de ',tmp_promedio,' grados'
	Si tmpx=1 Entonces
		Escribir 'Se ingreso un solo valor que se encuentra entre 10 grados y 20 grados'
	SiNo
		Escribir 'Se ingresaron valores entre 10 grados y 20 grados ',tmpx,' veces'
	FinSi
FinAlgoritmo
