# elección -> $s0
# valor -> $s1
# valor_temporal_1 -> $t0
# valor_temporal_2 -> $t1
# valor_temporal_3 -> $t2
# valor_temporal_4 -> $t3

main: 
# std::cin >> eleccion;
		li   $v0, 5
		syscall
		move $s0, $v0

# switch(eleccion) {
# case 1:
		beq  $s0, 1, case_1_modificar_valor
    
# case 2:
		beq  $s0, 2, case_2_modificar_valor

# case_3:
		beq  $s0, 3, case_3_modificar_valor 

# case 4:
		beq  $s0, 4, case_4_modificar_valor

# default:
#	valor++;
    addi $s1, $s1, 1
    b    break_program
# }

case_1_modificar_valor: 
#	valor *= 2;
		li   $t0, 2
		mul  $s1, $s1, $t0
#	break;
    b     break_program

case_2_modificar_valor: 
#	valor /= 2;
		li   $t0, 2
		div  $s1, $t0
		mflo $s1
#	break;
    b     break_program

case_3_modificar_valor: 
#	valor += 5;
		addi  $s1, $s1, 5
#	break;
		b     break_program

case_4_modificar_valor: 
#	valor *= 3;
		li   $t0, 3
		mul  $s1, $s1, $t0
#	break;
		b    break_program

break_program:
	li   $v0, 10
	syscall