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
# TABLA DE REGISTROS: 
# $f20 -> a
# $f22 -> b
# $f24 -> c
# $f26 -> d
# $t0 -> r
# $t1 -> s
# $t2 -> x
# $f12 -> f

main: 
#// Programa para evaluar polinomio tercer grado
# #include <iostream>
# #include <iomanip>

impresion_de_msg_inicial:
# int main(void) {
#   std::cout << std::fixed << std::setprecision(8);  // Ignorar
#   float a,b,c,d;
#   std::cout << "\nEvaluacion polinomio f(x) = a x^3 + b x^2 + c x + d"
#             << " en un intervalo [r,s]\n";
	li $v0, 4
	la $a0, strTitulo
	syscall

solicitacion_de_coeficientes:
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
        move $t0, $v0
#     std::cout << "Límite superior s: ";
        li $v0, 4
        la $a0, strIntroS
        syscall
#     std::cin >> s;
        li $v0, 5
        syscall
        move $t1, $v0

do_while_cond: 
#   } while (r > s);
        bgt $t0, $t1, do_while
for: 
#   for (int x = r ; x <= s ; x++) {
        move $t2, $t0
        ble $t2, $t1, for_if_cond

        addi $t2, $t2, 1
        j for
#     // float f = x*x*x*a + x*x*b + x*c + d;
#     float f = d;
#     f += x*c;
#     f += x*x*b;
#     f += x*x*x*a;
	li.s $f12, 0.0
        mtc1 $t2, $f4 
        cvt.s.w $f4, $f4     
        mul.s $f4, $f4, $f4
        mul.s $f4, $f4, $f20
        add.s $f12, $f12, $f4
        mul.s $f4, $f4, $f22
        add.s $f12, $f12, $f4
        mul.s $f4, $f4, $f24
        add.s $f12, $f12, $f4
        mul.s $f4, $f4, $f26
        add.s $f12, $f12, $f4
for_if_cond: 
#     if (f >= 2.5) {
	li.s $f2, 2.5
	c.lt.s $f12, $f2
	bc1t for_if_cond_then
	j for_end

for_if_cond_then: 
#       std::cout << "\nf(" << x << ") = " << f;
	li $v0, 4
	la $a0, strF
	syscall
	move $a0, $t2
	li $v0, 1
	syscall
	li $v0, 4
	la $a0, strIgual
	syscall
	li $v0, 2
	mov.s $f12, $f0
	syscall
#     }
#   }
for_end: 
#   std::cout << "\n\nTermina el programa\n";
        li $v0, 4
        la $a0, strTermina
        syscall

        li $v0, 10
        syscall
# }