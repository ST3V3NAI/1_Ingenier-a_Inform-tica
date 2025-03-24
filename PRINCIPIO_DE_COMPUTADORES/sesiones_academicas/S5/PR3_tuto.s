# Nombre del autor: Steven ABolaji Ibidokun
# Fecha: 20/03/25

# Modos de direccionamiento: Instrucciones o Datos
# |
# -> Instrucciones: Relativo a Pc o Directo
# |
# - > Datos: Inmediato o Directo a Registro o Indirecto ( Base + Desplazamiento ) 

# Direccionamiento Inmediato: Operando dentro de la misma instrucción
# Direccionamiento directo a registro: Operando está dentro de un registro ( se codifica el numero del registro ) 
# beq, bne -> relativo a PC
# j -> direccionamiento directo

# Direccionamiento Indirecto (base + Desp): 
# | 
# - > carga -> entero: lw || float : l.s || double: l.d
# |
# - > almacenamiento -> sw || s.s || s.d

# Ejemplo 1) cargar $f20 objeto1. peso
#           la $t0, objeto1
#           l.d $f20, 4($t0) 
#           l.d $f4, 5.5
#           add.d $f20, $f20, $f4
#           la $t0, objeto2
#           s.d $f20, 4($t0) 
# Ejemplo 2) double v[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
             double suma; -> $f20
             int i; -> $s1
 sizeD = 8;
    .data 
v: .double 1.0, 2.0, 3.0, 4.0 5.0
    .text
main:                      
             suma = 0;
             l.d $f20, 0.0
for: 
             for(i = 0; i < 5; i++) {
             bge $s1, 5, fin_for 
               suma += v[i]; -> $f4
             la $t0, v
             mul  $t1,$s1, sizeD
             add $t0, $t0, $t1
             l.d $f4, 0($t0)
             add.d $f20, $f20, $f4
             }  
             
             addi $s1, 1
             b for
 fin_for: 
             
             li $v0, 10
             syscall
           
# Formula de desplazamiento en vectores: (i * size) + dir base

#nFil = 3
#ncOl = 4

#int v[3][4] = {{7, 1, 4, 2}, {8, 3, 5, 6}, {9, 7, 3, 1}};  0 - 44 ( de 4 en 4 )
#m[i][j];  
#matrices de dos dimesniones: desp = ((i * nCol) + j) * sizew
#m[1][2] = (1*4+2)*4 = 24