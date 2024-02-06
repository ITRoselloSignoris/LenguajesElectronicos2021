Algoritmo sin_titulo
	Repetir
		Escribir 'Ingrese una temperatura'
		Leer tmp
		times <- times+1
		tmp1 <- tmp1+tmp
		Si (tmp>10) Y (tmp<20) Entonces
			tmpx <- tmpx+1
		FinSi
		Si tmp>tmp_max Entonces
			tmp_max <- tmp
		FinSi
		Si tmp_min=0 Entonces
			tmp_min <- tmp
		SiNo
			Si tmp<tmp_min Entonces
				tmp_min <- tmp
			FinSi
		FinSi
		Escribir '¿Quiere continuar con el programa?, Si=0 No=1'
		Leer val
	Hasta Que val=0
	tmp_Promedio <- tmp1/times
	Escribir 'El valor de la temperatura maxima es ',tmp_max,' grados y el valor de la temperatura minima es ',tmp_min,' grados'
	Escribir 'El promedio es de ',tmp_Promedio
	Si tmpx=1 Entonces
		Escribir 'Se ingreso un solo valor que se encuentra entre 10 grados y 20 grados'
	SiNo
		Escribir 'Se ingresaron temperaturas entre 10 grados y 20 grados ',tmpx,' veces'
	FinSi
FinAlgoritmo
