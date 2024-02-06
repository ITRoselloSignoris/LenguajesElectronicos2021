Algoritmo Calculadora
	Escribir 'Bienvenido a la calculadora de impedancias!'
	Escribir 'A continuación vamos a mencionar algunas consideraciones a tener en cuenta:'
	Escribir 'Cuando pongamos el valor analogico que se nos pide, lo tenemos que poner en la equivalencia en 1 de su respectiva unidad de medida'
	Escribir 'Una vez aclarado esto pasaremos a usar la calculadora'
	Repetir
		Escribir 'Hola, ¿que tipo de impedancia va a ingresar? ZL=0; ZC=1; Z=2'
		Leer Impedancia
		Segun Impedancia  Hacer
			0:
				Escribir 'Ingresar parte real del inductor'
				Leer InductorR
				Escribir 'Ingresar parte imaginaria del inductor'
				Leer InductorI
				InductorModulo = RAIZ((InductorR*InductorR)+(InductorI*InductorI))
				InductorAngulo = TAN(InductorI/InductorR)
				Escribir 'Ingresar frecuencia (Hz)'
				Leer FrecuenciaZL
				W <- FrecuenciaZL*6.28
				ComponenteZL <- InductorModulo*W
				Escribir 'El valor de su componente es de ',ComponenteZL,' OHMS'
			1:
				Escribir 'Ingresar parte real del capacitor'
				Leer CapacitorR
				Escribir 'Ingresar parte imaginaria del capacitor
				Leer CapacitorI
				CapacitorModulo = RAIZ((CapacitorR*CapacitorR)+(CapacitorI*CapacitorI))
				CapacitorAngulo = TAN(CapacitorI/CapacitorR)
				Escribir 'Ingresar frecuencia(Hz)'
				Leer FrecuenciaZC
				W <- FrecuenciaZC*6.28
				ComponenteZC <- 1/CapacitorModulo*W
				Escribir 'El valor de su componente es de ',ComponenteZC,' OHMS'
			2:
				Escribir 'Ingresar parte real de la impedancia'
				Leer ImpedanciaZR
				Escribir 'El valor de su componente es de ',ImpedanciaZR,' OHMS'
			De Otro Modo:
				Escribir 'Lo sentimos, el valor ingresado, no es correcto'
		FinSegun
		Si (Impedancia!=0) Y (Impedancia!=1) Y (Impedancia!=2) Entonces
			Escribir 'El valor ingresado no corresponde a ninguna de las impedancias'
		FinSi
		Escribir 'Gracias por usar el programa. Desea volver a usarlo? Si=0; No=1'
		Leer Volver
	Hasta Que Volver=1
FinAlgoritmo
