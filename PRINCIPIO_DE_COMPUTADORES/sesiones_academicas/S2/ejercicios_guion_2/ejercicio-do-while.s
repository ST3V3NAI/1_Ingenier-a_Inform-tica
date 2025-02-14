# solución usando iterativa do-while
# suma -> $s0
# maximo -> $s1
# numero -> $s3

		.text
main: 
# suma = 0;
	move   $s0, zero
# maximo = 100;
	move   $s1, 100

# do {
 do_while: 
# std::cin >> numero;
	li   $v0, 5   # Leo entero por pantalla
	syscall
	move $s3, $v0

# suma += numero;
	addi $s0, $s0, $s3 # sumamos el número y lo acumulamos

# { while (suma < maximo); 
while: 
	blt   $s0, $s1, do_while
	b     while_fin

while_fin: 
	li $v0, 10
	syscall	

    .data
tituto:     .asciiz "PRINCIPIO DE COMPUTADORES. Ejercicio Do-While.\n"
alumno:     .asciiz "Steven, 70652456K, alu1619613@ull.edu.es\n"