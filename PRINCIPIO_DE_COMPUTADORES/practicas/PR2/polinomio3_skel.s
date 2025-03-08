# Nombre del autor: Steven Abolaji Ibidokun
# Fecha de la última modificación: 15:51

#// Programa para evaluar polinomio tercer grado

# #include <iostream>
# #include <iomanip>

# int main(void) {
#   std::cout << std::fixed << std::setprecision(8);  // Ignorar
#   float a,b,c,d;
#   std::cout << "\nEvaluacion polinomio f(x) = a x^3 + b x^2 + c x + d"
#             << " en un intervalo [r,s]\n";
#   std::cout << "\nIntroduzca coeficiente a: ";
#   std::cin >> a;
#   std::cout << "Introduzca coeficiente b: ";
#   std::cin >> b;
#   std::cout << "Introduzca coeficiente c: ";
#   std::cin >> c;
#   std::cout << "Introduzca coeficiente d: ";
#   std::cin >> d;
#   int r,s;
#   do {
#     std::cout << "\nLímite inferior r: ";
#     std::cin >> r;
#     std::cout << "Límite superior s: ";
#     std::cin >> s;
#   } while (r > s);

#   for (int x = r ; x <= s ; x++) {
#     // float f = x*x*x*a + x*x*b + x*c + d;
#     float f = d;
#     f += x*c;
#     f += x*x*b;
#     f += x*x*x*a;
#     if (f >= 2.5) {
#       std::cout << "\nf(" << x << ") = " << f;
#     }
#   }
#   std::cout << "\n\nTermina el programa\n";
# }

	.data
strTitulo:	.ascii	"\nEvaluacion polinomio f(x) = a x^3 + b x^2 + c x + d"
		.asciiz	" en un intervalo [r,s]\n"
strIntroA:	.asciiz	"\nIntroduzca coeficiente a: "
strIntroB:	.asciiz	"Introduzca coeficiente b: "
strIntroC:	.asciiz	"Introduzca coeficiente c: "
strIntroD:	.asciiz	"Introduzca coeficiente d: "

strIntroR:	.asciiz	"\nLímite inferior r: "
strIntroS:	.asciiz	"Límite superior s: "

strF:		.asciiz	"\nf("
strIgual:	.asciiz	") = "
strTermina:	.asciiz	"\n\nTermina el programa\n"
    .text
    # TABLA DE REGISTROS
    # $f20 -> coeficiente a
    # $f22 -> coeficiente b
    # $f24 -> coeficiente c
    # $f26 -> coeficiente d  
    # $s0 -> limite inferior
    # $s1 -> limite superior
    # $s2 -> x
    # $f28 -> resultado de la función
    # $f30 -> cte{2.5}
main: 
#// Programa para evaluar polinomio tercer grado

# #include <iostream>
# #include <iomanip>

# int main(void) {
#   std::cout << std::fixed << std::setprecision(8);  // Ignorar
#   float a,b,c,d;
impresion_de_titulo: 
#   std::cout << "\nEvaluacion polinomio f(x) = a x^3 + b x^2 + c x + d"
#             << " en un intervalo [r,s]\n";
    li $v0, 4
    la $a0, strTitulo
    syscall
    
peticion_de_coeficientes: 
#   std::cout << "\nIntroduzca coeficiente a: ";
    li $v0, 4
    la $a0, strIntroA
    syscall
#   std::cin >> a;
    li $v0, 6
    syscall
    mov.s $f20, $f0
#   std::cout << "Introduzca coeficiente b: ";
    li $v0, 4
    la $a0, strIntroB
    syscall         
#   std::cin >> b;
    li $v0, 6
    syscall
    mov.s $f22, $f0
#   std::cout << "Introduzca coeficiente c: ";
    li $v0, 4
    la $a0, strIntroC
    syscall
#   std::cin >> c;
    li $v0, 6
    syscall
    mov.s $f24, $f0
#   std::cout << "Introduzca coeficiente d: ";
    li $v0, 4
    la $a0, strIntroD
    syscall
#   std::cin >> d;
    li $v0, 6
    syscall
    mov.s $f26, $f0
#   int r,s;

do_while: 
#   do {
#     std::cout << "\nLímite inferior r: ";
    li $v0, 4
    la $a0, strIntroR
    syscall
#     std::cin >> r;
    li $v0, 5
    syscall
    move $s0, $v0
#     std::cout << "Límite superior s: ";
    li $v0, 4
    la $a0, strIntroS
    syscall
#     std::cin >> s;
    li $v0, 5
    syscall
    move $s1, $v0
#   } while (r > s);
    bgt $s0, $s1, do_while
    
    move $s2, $s0       # $s2 = $s0
    
for: 
#   for (int x = r ; x <= s ; x++) {
    bgt $s2, $s1, termina_programa
#     // float f = x*x*x*a + x*x*b + x*c + d;
#     float f = d;
    mov.s $f28, $f26
    mtc1  $s2, $f4
    cvt.s.w $f4, $f4
#     f += x*c;
    mul.s $f6, $f4, $f24
    add.s $f28, $f28, $f6
#     f += x*x*b;
    mul.s $f6, $f4, $f4
    mul.s $f6, $f6, $f22
    add.s $f28, $f28, $f6
#     f += x*x*x*a;
    mul.s $f6, $f4, $f4
    mul.s $f6, $f6, $f4
    mul.s $f6, $f6, $f20
    add.s $f28, $f28, $f6
    for_if: 
#     if (f >= 2.5) {
        li.s $f30, 2.5
        c.lt.s $f28, $f30
        bc1t actualizacion
#       std::cout << "\nf(" << x << ") = " << f;
        li $v0, 4
        la $a0, strF
        syscall
    
        li $v0, 1
        move $a0, $s2
        syscall
    
        li $v0, 4
        la $a0, strIgual
        syscall
    
        li $v0, 2
        mov.s $f12, $f28
        syscall
     
#     }
actualizacion: 
    addi $s2, $s2, 1
    j for
#   }
termina_programa: 
#   std::cout << "\n\nTermina el programa\n";
    li $v0, 4
    la $a0, strTermina
    syscall
    
    
    li $v0, 10
    syscall
# }

