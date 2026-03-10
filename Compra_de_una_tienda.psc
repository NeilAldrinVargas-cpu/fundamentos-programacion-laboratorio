Algoritmo Compra_de_una_tienda
	Definir nombre como cadena
	Definir total_a_pagar Como Real
	Definir precio_unitario, cantidad_de_cuadernos Como Entero
	
	Precio_Unitario<-8
	Escribir "ingrese su nombre:"
	leer nombre
	
	Escribir " Ingrese la cantidad de cuadernos:"
	leer cantidad_de_cuadernos
	
	total_a_pagar<- precio_unitario*cantidad_de_cuadernos
	
	Escribir "========"
	Escribir " Cliente:", nombre
	Escribir " su total a pagar es:", total_a_pagar,"bs"
	Escribir "======="
	
FinAlgoritmo