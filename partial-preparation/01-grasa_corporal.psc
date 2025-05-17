Algoritmo grasa_corporal
	Escribir "Ingrese su peso en kilogramos: "
	Leer peso
	Si peso <= 0 Entonces
		Escribir "El peso ingresado no es correcto"
	Sino
		Escribir "Ingrese su talla en metros:"
		Leer altura
		Si altura <= 0 Entonces
			Escribir "La talla ingresada no es correcta"
		SiNo
			Escribir "Ingrese su edad:"
			Leer edad
			Si edad < 20 o edad > 39 Entonces
				Escribir "La edad ingresada no es correcta"
			SiNo
				Escribir "Ingrese si es atleta (S o N):"
				Leer atleta
				Si atleta <> 'S' y atleta <> 'N' Entonces
					Escribir "El indicador de atleta ingresado no es correcto"
				SiNo
					imc <- peso / altura ^ 2
					porcentaje <- 1.2 * imc + 0.23 * edad - 10.8 - 5.4
					Escribir "El porcentaje de grasa corporal calculado es: ", porcentaje
					
					Si atleta = 'S' Entonces
						Si (edad <= 29 y porcentaje > 11) o (edad >= 30 y porcentaje > 12) Entonces
							tipo <- "no "
						FinSi
						Escribir "El porcentaje de grasa ", tipo, "es el ideal para un hombre atleta"
					SiNo
						Si (edad <= 29 y porcentaje <= 11) o (edad >= 30 y porcentaje <= 11) Entonces
							tipo <- "es muy bajo "
						Sino 
							Si (edad <= 29 y porcentaje <= 13) o (edad >= 30 y porcentaje <= 13) Entonces
								tipo <- "es bueno "
							SiNo
								Si (edad <= 29 y porcentaje <= 20) o (edad >= 30 y porcentaje <= 20) Entonces
									tipo <- "es normal "
								SiNo
									Si (edad <= 29 y porcentaje > 20) o (edad >= 30 y porcentaje > 20) Entonces
										tipo <- "es elevado "
									FinSi
								FinSi
							FinSi
						FinSi
						Escribir "El porcentaje de grasa ", tipo, "para un hombre que no es atleta"
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
	
FinAlgoritmo
