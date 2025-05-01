# // Principio de Computadores.
# // Operaciones con funciones y direccionamiento indirecto
# // Autores: Carlos Martín Galán y Alberto Hamilton Castro
# // Fecha última modificación: 2025-04-11
# #include <iostream>

# const int n1 = 10;
# double v1[n1] = {10.5, 9.5, 7.25, 6.25, 5.75, 4.5, 4.25, 3.5, -1.5, -2.0};
# const int n2 = 5;
# double v2[n2] = {5.5, 4.5, 4.25, 2.5, 2.5 };
# const int n3 = 4;
# double v3[n3] = {7.0, 5.0, 2.0, 1.0};


# void printvec(double* v, const int n) {
#     std::cout << "\nVector con dimension " << n << '\n';
#     for (int i = 0; i < n; i++)
#         std::cout << v[i] << " ";

#     std::cout << "\n";
#     return;
# }

# int ordenado(double* v, const int n) {
#     int resultado = 1;
#     int i = 0;
#     while (i < n-1) {
#         if (v[i+1] >= v[i]) {
#             resultado = 0;
#             break;
#         }
#         i++;
#     }
#     return resultado;
# }

# void merge(double* v1, const int n1,double* v2, const int n2) {

#     int  o1 = ordenado(v1,n1);
#     if (o1 == 0) {
#       std::cout << "Primer vector no ordenado. NO se puede mezclar\n";
#       return;
#     }
#     int o2 = ordenado(v2,n2);
#     if (o2 == 0) {
#       std::cout << "Segundo vector no ordenado. NO se puede mezclar\n";
#       return;
#     }
#     int i = 0; // índice para recorrer el v1
#     int j = 0; // índice para recorrer el v2
#     while ( ( i < n1) && (j < n2) ) {
#         if (v1[i] >= v2[j]) {
#             std::cout << v1[i] << ' ';
#             i++;
#         }
#         else {
#             std::cout << v2[j] << ' ';
#             j++;
#         }
#     }
#     while ( i < n1) {
#         std::cout << v1[i] << ' ';
#         i++;
#     }
#     while ( j < n2) {
#         std::cout << v2[j] << ' ';
#         j++;
#     }
#     std::cout << '\n';
#     return;
# }

# int main(void) {
#   std::cout << "\nPrograma de mezcla de vectores\n";

#   printvec(v1,n1);
#   printvec(v2,n2);
#   printvec(v3,n3);

#   std::cout << "\nIntentando mezcla con dos vectores ...\n";
#   merge(v1,n1,v2,n2);

#   std::cout << "\nIntentando mezcla con dos vectores ...\n";
#   merge(v1,n1,v3,n3);

#   std::cout << "\nIntentando mezcla con dos vectores ...\n";
#   merge(v2,n2,v3,n3);

#   std::cout << "\nFIN DEL PROGRAMA\n";
#   return 0;
# }

sizeD = 8

    .data
n1:     .word 10
v1:     .double 10.5, 9.5, 7.25, 6.25, 5.75, 4.5, 4.25, 3.5, -1.5, -2.0
n2:     .word 5
v2:     .double 5.5, 4.5, 4.25, 2.5, 2.5
n3:     .word 4
v3:     .double 7.0, 5.0, 2.0, 1.0

cad0:	.asciiz	"\nPrograma de mezcla de vectores\n"
cad1:   .asciiz "\nVector con dimension "
cad51:	.asciiz	"Primer vector no ordenado. NO se puede mezclar\n"
cad52:	.asciiz	"Segundo vector no ordenado. NO se puede mezclar\n"
cad2:   .asciiz "\nIntentando mezcla con dos vectores ...\n"
cad3:   .asciiz "\nFIN DEL PROGRAMA\n"
    .text

# #include <iostream>

# const int n1 = 10;
# double v1[n1] = {10.5, 9.5, 7.25, 6.25, 5.75, 4.5, 4.25, 3.5, -1.5, -2.0};
# const int n2 = 5;
# double v2[n2] = {5.5, 4.5, 4.25, 2.5, 2.5 };
# const int n3 = 4;
# double v3[n3] = {7.0, 5.0, 2.0, 1.0};

printvec: 
    # funcion que imprime un vector de doubles por la consola separando los elementos
    # con un espacio e imprimiendo un newline al final
    # $a0 direccion de memoria del vector
    # $a1 numnero de elementos
    # esta funcion no devuelve ningun valor

        # PUSH
        addi $sp,-16
        sw $s0,0($sp)
        sw $s1,4($sp)
        sw $s2,8($sp)
        sw $ra,12($sp)
        move $s0,$a0 # dir vector
        move $s1,$a1 # num eltos
# void printvec(double* v, const int n) {
#     std::cout << "\nVector con dimension " << n << '\n';
    li $v0, 4
    la $a0, cad1
    syscall

    li $s2, 0
for_printvec: 
#     for (int i = 0; i < n; i++)
    bge $s2, $s1, for_printvec_fin
#         std::cout << v[i] << " ";
    l.d $f12,0($s0)
    li $v0,3
    syscall
    li $v0, 11
    la $a0, 32
    syscall

    addi $s2, $s2, 1
    addi $s0, sizeD
    j for_printvec
for_printvec_fin: 
#     std::cout << "\n";
    li $v0, 11
    la $a0, 10
    syscall
#     return;
        # POP
        lw $s0,0($sp)
        lw $s1,4($sp)
        lw $s2,8($sp)
        lw $ra,12($sp)
        addi $sp,16
        jr $ra
# }
fin_print_vec: 

ordenado: 
# comprueba si un vector de doubles está ordenador de forma
            # estrictamente decreciente
            # $a0 direccion de memoria del vector a comprobar
            # $a1 numero de elementos del vector a comprobar
            # $v0 devuelve 1 si esta ord. estrictamente dec. 0 en caso contrario

            # TABLA DE REGISTROS
            # i     $t0
            # resultado $v0  # registro de retorno entero 
            # $t1 n-1
            # $f4 v[i] en cada iteracion
            # $f6 v[i+1] en cada iteracion

# int ordenado(double* v, const int n) {
#     int resultado = 1;
#     int i = 0;
    li $v0,1
    li $t0,0
    addi $t1,$a1,-1
while_ord: 
#     while (i < n-1) {
    bge $t0, $t1, fin_while_ord
    mul $t2,$t0,sizeD       
    add $t2,$t2, $a0
    l.d $f4,0($t2)          # v[i]
    l.d $f6,sizeD($t2)      # v[i+1]

if_while_ord: 
#         if (v[i+1] >= v[i]) {
    c.le.d $f4,$f6
    bc1f fin_if_ord
#             resultado = 0;
#             break;
    li $v0,0
    j fin_while_ord
#         }
fin_if_ord: 
    addi $t0,1
    j while_ord
#         i++;
#     }
fin_while_ord: 
#     return resultado;
    jr $ra
# }
ordenado_fin: 

merge: 
# imprime por consola la mezcla ordenada de dos vectores de doubles
        # $a0 dir. del primer vector
        # $a1 numero de elementos del primer vector
        # $a2 dir. del segund vector
        # $a3 numero de elementos del segundo vector

        # TABLA REGISTROS
        # $s0 dir. base de v1
        # $s1 num eltos de v1
        # $s2 dir. base de v2
        # $s3 num eltos de v2
        # $s4 i iterador
        # $s5 j iterador
        # $f4 v1[i] en cada iteracion
        # $f6 v2[j] en cada iteracion
# void merge(double* v1, const int n1,double* v2, const int n2) {
        # PUSH
        addi $sp,-28
        sw $s0,0($sp)
        sw $s1,4($sp)
        sw $s2,8($sp)
        sw $s3,12($sp)
        sw $s4,16($sp)
        sw $s5,20($sp)
        sw $ra,24($sp)

        move $s0,$a0
        move $s1,$a1
        move $s2,$a2
        move $s3,$a3
#     int  o1 = ordenado(v1,n1);
        move $a0,$s0
        move $a1,$s1
        jal ordenado
#     if (o1 == 0) {
        beqz $v0,salir_merge
#       std::cout << "Primer vector no ordenado. NO se puede mezclar\n";
        li $v0, 4
        la $a0, cad51
        syscall
#       return;
        jr $ra
#     }
#     int o2 = ordenado(v2,n2);
        move $a0,$s2
        move $a1,$s3
        jal ordenado
#     if (o2 == 0) {
        beqz $v0,salir_merge
#       std::cout << "Segundo vector no ordenado. NO se puede mezclar\n";
        li $v0, 4
        la $a0, cad52
        syscall
#       return;
        jr $ra
#     }
#     int i = 0; // índice para recorrer el v1
#     int j = 0; // índice para recorrer el v2
        li $s4,0
        li $s5,0
while1_merge: 
#     while ( ( i < n1) && (j < n2) ) {
        bge $s4,$s1,fin_while1_merge
        bge $s5,$s3,fin_while1_merge
        mul $t0,$s4,sizeD
        add $t0,$t0,$s0
        l.d $f4,0($t0)   # v1[i]
        mul $t0,$s5,sizeD
        add $t0,$t0,$s2
        l.d $f6,0($t0)   # v2[j]
#         if (v1[i] >= v2[j]) {
        c.le.d $f6,$f4
        bc1f else_m
#             std::cout << v1[i] << ' ';
        mov.d $f12,$f4
        li $v0,3
        syscall
        li $v0,11
        la $a0,32
        syscall
#             i++;
        addi $s4,1
        j fin_if_m
#         }
else_m: 
#         else {
#             std::cout << v2[j] << ' ';
#             j++;
#         }
        mov.d $f12,$f6
        li $v0,3
        syscall
        li $v0,11
        la $a0, 32
        syscall
        addi $s5,1
fin_if_m: 
#     }
        j while1_merge
fin_while1_merge: 

while2_merge: 
#     while ( i < n1) {
        bge $s4,$s1,fin_while2_merge
#         std::cout << v1[i] << ' ';
            mul $t0,$s4,sizeD
            add $t0,$t0,$s0
            l.d $f12,0($t0)   # v1[i]       
            li $v0,3
            syscall
            li $v0,11
            la $a0,SPACE
            syscall
#         i++;
        addi $s4, 1
        j while2_merge
#     }
fin_while2_merge: 

while3_merge: 
#     while ( j < n2) {
        bge $s5, $s3, fin_while3_merge
#         std::cout << v2[j] << ' ';
        mul $t0,$s5,sizeD
        add $t0,$t0,$s2
        l.d $f12, 0($t0)
        li $v0, 3
        syscall
        li $v0, 11
        la $a0, 10
        syscall
        addi $s5, 1
        j while3_merge
#         j++;
#     }
fin_while3_merge: 
#     std::cout << '\n';
    li $v0, 11
    la $a0, 32
    syscall
salir_merge: 
        lw $s0,0($sp)
        lw $s1,4($sp)
        lw $s2,8($sp)
        lw $s3,12($sp)
        lw $s4,16($sp)
        lw $s5,20($sp)
        lw $ra,24($sp)
        addi $sp,28
#     return;
        jr $ra
# }
merge_fin: 

main: 
# int main(void) {
#   std::cout << "\nPrograma de mezcla de vectores\n";
    li $v0, 4
    la $a0, cad0
    syscall

    li $v0, 11
    la $a0, 32
    syscall
#   printvec(v1,n1);
    la $a0,v1
    lw $a1,n1
    jal printvec
#   printvec(v2,n2);
    la $a0,v2
    lw $a1,n2
    jal printvec
#   printvec(v3,n3);
    la $a0,v3
    lw $a1,n3
    jal printvec

intentando_mezclas: 
#   std::cout << "\nIntentando mezcla con dos vectores ...\n";
    li $v0, 4
    la $a0, cad2
    syscall
#   merge(v1,n1,v2,n2);
    la $a0,v1
    lw $a1,n1
    la $a2,v2
    lw $a3,n2
    jal merge
#   std::cout << "\nIntentando mezcla con dos vectores ...\n";
    li $v0, 4
    la $a0, cad2
    syscall
#   merge(v1,n1,v3,n3);
    la $a0,v1
    lw $a1,n1
    la $a2,v3
    lw $a3,n3
    jal merge
#   std::cout << "\nIntentando mezcla con dos vectores ...\n";
    li $v0, 4
    la $a0, cad2
    syscall
#   merge(v2,n2,v3,n3);
    la $a0,v2
    lw $a1,n2
    la $a2,v3
    lw $a3,n3
    jal merge
fin_programa: 
#   std::cout << "\nFIN DEL PROGRAMA\n";
    li $v0, 4
    la $a0, cad3
    syscall
#   return 0;
    li $v0, 10
    syscall
# }
