Algoritmo sin_titulo
	C = 0
	Para I<-1 Hasta 10 Con Paso 1 Hacer
		Escribir "Curso #", I
		Escribir "Legajo: "
		Leer legajo
		Mientras legajo != 0 Hacer
			Escribir "Nota: "
			Leer nota
			Si nota >= 6 Entonces
				C = C + 1
			FinSi
			Escribir "Legajo: "
			Leer legajo
		FinMientras
		Escribir "Cantidad de aprobados: " , C
	FinPara
FinAlgoritmo
