#int compara(float a, float b) {
compara:
#if (a < b) return(-1);
	c.lt.s $f1, $f0
	bc1f if_2
	li $v0, -1
#if (a > b) return(1);
	if_2:
	c.le.s $f0, $f1
	bc1t if_3
	li $v0, 1
#if (a == b) return(0);
	if_3:
	li $v0, 0
#}
#float max_fil(structMat *mat, int indF) {
max_fil_funcion:
	addi $sp, $sp, -4
	sw $ra, 0($sp)
	
	move $t0, $a1
#int numCol = mat->nCol;
	lw $t1, nCol($a0)
#float* datos = mat->elementos;
	la $t2, elementos($a0)
#float max = datos[indF*numCol]; // asumo que el maximo es el primero de la fila indF
	mul $t3, $t0, $t1
	mul $t3, $t3, 4
	add $t3, $t3, $t2
	l.s $f0, 0($t3)
#for(int c = 1; c < numCol; c++) {
	li $t4, 1 # c
	for_max_fil:
		blt, $t4, $t1, fin_for_max_fil
#float elemento = datos[indF*numCol+c];
		mul $t5, $t0, $t1
		add $t5, $t5, $t4
		mul $t5, $t5, 4
		add $t5, $t5, $t2
		l.s $f1, 0($t5)
#int res = compara(max,elemento);
		jal compara
		move $t6, $v0
#if (res<0)
		bge $t6, 0, fin_for_max_fil
#max = elemento;
		mov.s $f12, $f1
		addi $t4, 1
		j for_max_fil
#}
	fin_for_max_fil:
#return(max);
	mov.s $f0, $f12
	lw $ra, 0($sp)
	addi $sp, $sp, 4
	jr $ra
#}

#float max_fil(structMat *mat, int indF) {
max_fil_funcion:
	addi $sp, $sp, -4
	sw $ra, 0($sp)
	
	move $t0, $a1
#int numCol = mat->nCol;
	lw $t1, nCol($a0)
#float* datos = mat->elementos;
	la $t2, elementos($a0)
#float max = datos[indF*numCol]; // asumo que el maximo es el primero de la fila indF
	mul $t3, $t0, $t1
	mul $t3, $t3, 4
	add $t3, $t3, $t2
	l.s $f0, 0($t3)
#for(int c = 1; c < numCol; c++) {
	li $t4, 1 # c
	for_max_fil:
		blt, $t4, $t1, fin_for_max_fil
#float elemento = datos[indF*numCol+c];
		mul $t5, $t0, $t1
		add $t5, $t5, $t4
		mul $t5, $t5, 4
		add $t5, $t5, $t2
		l.s $f1, 0($t5)
#int res = compara(max,elemento);
		jal compara
		move $t6, $v0
#if (res<0)
		bge $t6, 0, fin_for_max_fil
#max = elemento;
		mov.s $f12, $f1
		addi $t4, 1
		j for_max_fil
#}
	fin_for_max_fil:
#return(max);
	mov.s $f0, $f12
	lw $ra, 0($sp)
	addi $sp, $sp, 4
	jr $ra
#}

main:
#float maximo = max_fil(matTrabajo,nf-1);
	addi $t0, -1
	move $a0, $s7
	move $a1, $t0
	jal max_fil_funcion
	mov.s $f24, $f0
	
#std::cout << "\nEl maximo de la última fila es: " << maximo << std::endl;
	li $v0, 4
	la $a0, max_fil
	syscall
	
	li $v0, 2
	mov.s $f12, $f24
	syscall
	
	li $v0, 11 # imprimo \n
	la $a0, LF
	syscall
#}