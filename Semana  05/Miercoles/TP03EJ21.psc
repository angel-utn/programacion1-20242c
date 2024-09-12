Algoritmo TP03EJ21
	acumDivisores = 0
	Leer num
	Para i<-1 Hasta num-1 Con Paso 1 Hacer
		Si (num%i==0) Entonces
			acumDivisores = acumDivisores+i
		FinSi
	FinPara
	Si acumDivisores==num Entonces
		Escribir "PERFECTO"
	SiNo
		Escribir "NO PERFECTO"
	FinSi
FinAlgoritmo
