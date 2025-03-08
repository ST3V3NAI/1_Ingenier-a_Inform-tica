    .data
strTitulo:  .ascii  "\nEvaluacion polinomio f(x) = a x^3 + b x^2 + c x + d"
        .asciiz " en un intervalo [r,s]\n"
strIntroA:  .asciiz "\nIntroduzca coeficiente a: "
strIntroB:  .asciiz "Introduzca coeficiente b: "
strIntroC:  .asciiz "Introduzca coeficiente c: "
strIntroD:  .asciiz "Introduzca coeficiente d: "

strIntroR:  .asciiz "\nLímite inferior r: "
strIntroS:  .asciiz "Límite superior s: "

strF:       .asciiz "\nf("
strIgual:   .asciiz ") = "
strTermina: .asciiz "\n\nTermina el programa\n"

    .text
    # TABLA DE REGISTROS
    # $f20 -> coeficiente a
    # $f22 -> coeficiente b
    # $f24 -> coeficiente c
    # $f26 -> coeficiente d  
    # $s0 -> r
    # $s1 -> s
    # $s2 -> x
    # $f28 -> f
    # $t1 -> actualizador
    # $f30 -> cte{2.5}

main: 
    # Print title
    li $v0, 4
    la $a0, strTitulo
    syscall
    
    # Request coefficients
    li $v0, 4
    la $a0, strIntroA
    syscall
    li $v0, 6
    syscall
    mov.s $f20, $f0

    li $v0, 4
    la $a0, strIntroB
    syscall         
    li $v0, 6
    syscall
    mov.s $f22, $f0

    li $v0, 4
    la $a0, strIntroC
    syscall
    li $v0, 6
    syscall
    mov.s $f24, $f0

    li $v0, 4
    la $a0, strIntroD
    syscall
    li $v0, 6
    syscall
    mov.s $f26, $f0

do_while: 
    # Request limits
    li $v0, 4
    la $a0, strIntroR
    syscall
    li $v0, 5
    syscall
    move $s0, $v0

    li $v0, 4
    la $a0, strIntroS
    syscall
    li $v0, 5
    syscall
    move $s1, $v0

    # Check if r > s
    bgt $s0, $s1, do_while
    
    # Initialize loop variable
    move $s2, $s0       # x = r

for: 
    # Check if x > s
    bgt $s2, $s1, termina_programa

    # Calculate f(x)
    mov.s $f28, $f26    # f = d
    mtc1  $s2, $f4      # Convert x to float
    cvt.s.w $f4, $f4

    # f += x * c
    mul.s $f6, $f4, $f24
    add.s $f28, $f28, $f6  # <-- Corrected: Add x*c to f

    # f += x * x * b
    mul.s $f6, $f4, $f4
    mul.s $f6, $f6, $f22
    add.s $f28, $f28, $f6  # <-- Corrected: Add x*x*b to f

    # f += x * x * x * a
    mul.s $f6, $f4, $f4
    mul.s $f6, $f6, $f4
    mul.s $f6, $f6, $f20
    add.s $f28, $f28, $f6  # <-- Corrected: Add x*x*x*a to f

    # Check if f >= 2.5
    li.s $f30, 2.5
    c.lt.s $f28, $f30
    bc1t actualizacion

    # Print f(x)
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

actualizacion: 
    # Increment x
    addi $s2, $s2, 1
    j for

termina_programa: 
    # Print termination message
    li $v0, 4
    la $a0, strTermina
    syscall
    
    # Exit program
    li $v0, 10
    syscall