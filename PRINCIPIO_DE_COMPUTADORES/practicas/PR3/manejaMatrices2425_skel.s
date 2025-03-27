# Nombre del autor: Steven Abolaji Ibidokun
# Fecha de última modificación: 26/03/25
# Hora de última modificación: 12:52

# #include <iostream>
# #include <iomanip>
# #include <cmath>

# const int MAXELTOS = 100;
MAXELTOS=100 # numero maximo de elemenos
elementos=8 # desplazamiento datos matriz

# typedef struct {
#   int nFil;
nFil=0 # desplazamiento al campo filas
#   int nCol;
nCol=4 # desplazamiento al campo columnas
#   float elementos[MAXELTOS];
# elementos = MAXELTOS
# } structMat;

sizeF = 4	# numero de bytes que ocupa un flotante
LF = 10
space = 32
x = 120
# Caracter salto de línea

# Opciones del programa
opc_0 = 0
opc_1 = 1
opc_2 = 2
opc_3 = 3
opc_7 = 7

	.data
#structMat mat1 {
#  6,
#  6,
#  {
#    11.11, 12.12, 13.13, 14.14, 15.15, 16.16,
#    21.21, 22.22, 23.23, 24.24, 25.25, 26.26,
#    31.31, 32.32, 33.33, 34.34, 35.35, 36.36,
#    41.41, 42.42, 43.43, 44.44, 45.45, 46.46,
#    51.51, 52.52, 53.53, 54.54, 55.55, 56.56,
#    61.61, 62.62, 63.63, 64.64, 65.65, 66.66
#  }
#};
mat1: .word 6
      .word 6
      .float 11.11, 12.12, 13.13, 14.14, 15.15, 16.16
      .float 21.21, 22.22, 23.23, 24.24, 25.25, 26.26
      .float 31.31, 32.32, 33.33, 34.34, 35.35, 36.36
      .float 41.41, 42.42, 43.43, 44.44, 45.45, 46.46
      .float 51.51, 52.52, 53.53, 54.54, 55.55, 56.56
      .float 61.61, 62.62, 63.63, 64.64, 65.65, 66.66

#structMat mat2 {
#  7,
#  10,
#  {
#    -36.886, -58.201,  78.671,  19.092, -50.781,  33.961, -59.511, 12.347,  57.306,  -1.938,
#    -86.858, -81.852,  54.623, -22.574,  88.217,  64.374,  52.312, 47.918, -83.549,  19.041,
#     4.255, -36.842,  82.526,  27.394,  56.527,  39.448,  18.429, 97.057,  76.933,  14.583,
#    67.79 ,  -9.861, -96.191,  32.369, -18.494, -43.392,  39.857, 80.686, -36.87 , -17.786,
#    30.073,  89.938,  -6.889,  64.601, -85.018,  70.559, -48.853, -62.627, -60.147,  -5.524,
#    84.323, -51.718,  93.127, -10.757,  32.119,  98.214,  69.471, 73.814,   3.724,  57.208,
#    -41.528, -17.458, -64.226, -71.297, -98.745,   7.095, -79.112, 33.819,  63.531, -96.181
#  }
#};
mat2: .word 7
      .word 10
      .float -36.886, -58.201, 78.671, 19.092, -50.781, 33.961, -59.511
      .float 12.3125, 57.306, -1.938, -86.858, -81.852,  54.623, -22.574
      .float 88.217, 64.374, 52.875, 47.918, -83.549,  19.041, 4.255, -31.875
      .float 82.526,  27.394, 56.527, 39.448,  18.429, 97.057,  76.933
      .float 14.583, 67.79, -9.861, -97.875, 32.369, -18.494, -43.392, 39.857 
      .float 87.65625, -31.875, -17.786, 30.073,  87.65625,  -6.889,  64.601
      .float -85.018,  70.559, -48.853, -62.627, -60.147,  -5.524, 84.323
      .float -51.718,  93.127, -10.757,  32.119, 98.3125, 69.471, 73.814
      .float 3.724,  57.208, -41.528, -17.458, -64.226, -71.297, -97.875
      .float 7.095, -79.112, 33.819,  63.531, -96.181
# structMat mat3 {
#   1,
#   8,
#   {
#     -36.52,  35.3 ,  79.05, -58.69, -55.23, -19.44, -88.63, -93.61
#   }
# };
mat3:
      .word 1
      .word 8
      .float -36.52,  35.3 ,  79.05, -58.69, -55.23, -19.44, -88.63, -93.61

# structMat mat4 {
#   16,
#   1,
#   { -90.57, -65.11, -58.21, -73.23, -89.38, -79.25,  16.82,  66.3 ,
#     -96.14, -97.16, -24.66,   5.27, -33.5 , -13.09,  27.13, -74.83 }
# };
mat4:
      .word 16
      .word 1
      .float -90.57, -65.11, -58.21, -73.23, -89.38, -79.25,  16.82,  66.3
      .float -96.14, -97.16, -24.66,   5.27, -33.5 , -13.09,  27.13, -74.83

# structMat mat5 {
#   1,
#   1,
#   { 78.98 }
# };
mat5:
      .word 1
      .word 1
      .float 78.98

# structMat mat6 {
#   0,
#   0,
#   { 0 }
# };

mat6:
      .word 0
      .word 0
      .float 0.0

# // Matriz de acceso libre para modificar
# structMat mat7 {
#  0,
#  0,
#  // Inicializamos los MAXELTOS primeros elementos a 0
#  { 0 }
#};
mat7: .word 0
      .word 0
      .space MAXELTOS*sizeF

titulo: .asciiz "\nComienza programa manejo matrices\n"
dimstr: .asciiz "\n\nLa matriz tiene dimension "
xstr:   .asciiz "x"
menu:   .ascii "(0) Terminar el programa\n"
        .ascii "(1) Cambiar la matriz de trabajo\n"
        .ascii "(2) Definir matriz 7\n"
        .ascii "(3) Cambiar un valor de la matriz\n"
        .ascii "(7) Contar valores superiores a un umbral\n"
        .asciiz "\nIntroduce opción elegida: ";
petmat: .asciiz "\nElije la matriz de trabajo (1..7): "
errmat: .asciiz "Numero de matriz de trabajo incorrecto\n"
petnf:  .asciiz "Introduce el numero de filas: ";
errnf:  .asciiz "Error: dimension incorrecta.  Numero de filas incorrecto\n"
petnc:  .asciiz "Introduce el numero de columnas: "
errnc:  .asciiz "Error: dimension incorrecta.  Numero de columnas incorrecto\n"
errmax: .asciiz "Error: dimension incorrecta.  Demasiados elementos\n"
petel:  .asciiz "Introduce el elemento (" 
petcom: .asciiz ","
petel2: .asciiz "): "
petfil: .asciiz "\nIndice de fila: "
errfil: .asciiz "Error: dimension incorrecta.  Numero de fila incorrecto\n" 
petcol: .asciiz "Indice de columna: "
errcol: .asciiz "Error: dimension incorrecta.  Numero de columna incorrecto\n"
petval: .asciiz "Nuevo valor para el elemento: "
petum:  .asciiz "Introduce el umbral: "
umbstr: .asciiz "\nNumero de valores superiores al umbral: "
erropc: .asciiz "Error: opcion incorrecta\n"
finstr: .asciiz "\nTermina el programa\n"
      .text
      # TABLA DE REGISTROS: 
      # $s0 -> opc
      # $s1 -> numFIl
      # $s2 -> numCol
      # $s3 -> f
      # $s4 -> opcmatT
      # $s5 -> c
      # $s6 -> nFil
      # $s7 -> nCol
      # $f20 -> datos
      # $f22 -> valor
      # $f26 -> umbral
      # $t0 -> indFil
      # $t2 -> indCol
# -------------------------------------------------------------------------------------------
main: 
      addiu $sp, $sp, -32   # Reserva espacio para 8 registros
      sw $ra, 28($sp)
      sw $s0, 24($sp)
      sw $s1, 20($sp)
      sw $s2, 16($sp)
      sw $s3, 12($sp)
      sw $s4, 8($sp)
      sw $s5, 4($sp)
      sw $s6, 0($sp)
# int main() {
      li $s0, 0
#   int numCol;
      li $s2, 0
#   int numFil;
      li $s1, 0 
#   float* datos;
      la $s4, mat1
      addiu $s6, $s4, 8
#   std::cout << std::fixed << std::setprecision(8);  // Ignorar

impresion_de_titulo: 
#   std::cout << "\nComienza programa manejo matrices\n";
      li $v0, 4
      la $a0, titulo
      syscall

while_true: 
#   while(true) {
#     numCol = matTrabajo->nCol;
      lw $s2, 4($s4)
#     numFil = matTrabajo->nFil;
      lw $s1, 0($s4)
#     datos = matTrabajo->elementos;
      addiu $s6, $s4, 8
#     std::cout << "\n\nLa matriz tiene dimension " << numFil<< 'x'
      li $v0, 4
      la $a0, dimstr
      syscall

      li $v0, 1
      move $a0, $s1
      syscall

      li $v0, 4
      la $a0, xstr
      syscall
#               << numCol << '\n';

      li $v0, 1
      move $a0, $s2
      syscall

      li $v0, 11
      li $a0, 10
      syscall

#     for(int f = 0; f < numFil; f++) {
      li $s3, 0
for_f: 
      bge $s3, $s1, for_f_fin
#       for(int c = 0; c < numCol; c++) {
      li $s5, 0
for_c: 
      bge $s5, $s2, for_c_fin
#         std::cout << datos[f*numCol + c] << ' ';
#         RECORRIDO DE UNA MATRIZ
#         $t0 = dirección de mat[f][c]
      mul $t0, $s3, $s2   # f * numCol
      add $t0, $t0, $s5   # + c
      sll $t0, $t0, 2     # *4 (tamaño float)
      add $t0, $s6, $t0   # dirección absolut

      li $v0, 2
      lwc1 $f12, 0($t0)
      syscall
        
      # Espacio entre elementos
      li $v0, 11
      li $a0, 32
      syscall

      addi $s5, $s5, 1
      j for_c
#       }
for_c_fin: 

#       std::cout << '\n';
      li $v0, 11
      li $a0, 10
      syscall

      addi $s3, $s3, 1
      j for_f
#     }
for_f_fin: 
#     std::cout << '\n';
      li $a0, 10
      li $v0, 11
      syscall
#     std::cout <<
#     "(0) Terminar el programa\n"
#     "(1) Cambiar la matriz de trabajo\n"
#     "(2) Definir matriz 7\n"
#     "(3) Cambiar un valor de la matriz\n"
#     "(7) Contar valores superiores a un umbral\n"
#     "\nIntroduce opción elegida: ";
      li $v0, 4
      la $a0, menu
      syscall
#     int opcion;
      li $s0, 0
#     std::cin >> opcion;
      li $v0, 5
      syscall
      move $s0, $v0

op_0:
#     if(opcion == 0) {
      beq $s0, opc_0, termina_programa
#       break;
#     }

op_1: 
#     // Opción 1 ////////////////////////////////////////////////////////////
#     if(opcion == 1) {
      beq $s0, opc_1, cambiar_matriz
      j op_2


cambiar_matriz:
#       std::cout << "\nElije la matriz de trabajo (1..7): ";
      li $v0, 4
      la $a0, petmat
      syscall
#       int matT;
      li $s4, 0
#       std::cin >> matT;
      li $v0, 5
      syscall
      move $s4, $v0

switch_case: 
      bltz $s4, default_case
      li $t0, 7
      bgt $s4, $t0, default_case
      beq $s4, 1, switch_case_dentro_1
      beq $s4, 2, switch_case_dentro_2
      beq $s4, 3, switch_case_dentro_3
      beq $s4, 4, switch_case_dentro_4
      beq $s4, 5, switch_case_dentro_5
      beq $s4, 6, switch_case_dentro_6
      beq $s4, 7, switch_case_dentro_7
#       switch(matT) {
switch_case_dentro_1: 
#         case 1:
#           matTrabajo = &mat1;
      la $s4, mat1
#           break;
      j switch_case_end
switch_case_dentro_2: 
#         case 2:
#           matTrabajo = &mat2;
      la $s4, mat2
#           break;
      j switch_case_end
switch_case_dentro_3: 
#         case 3:
#           matTrabajo = &mat3;
      la $s4, mat3
#           break;
      j switch_case_end
switch_case_dentro_4: 
#         case 4:
#           matTrabajo = &mat4;
      la $s4, mat4
#           break;
      j switch_case_end
switch_case_dentro_5: 
#         case 5:
#           matTrabajo = &mat5;
      la $s4, mat5
#           break;
      j switch_case_end
switch_case_dentro_6: 
#         case 6:
#           matTrabajo = &mat6;
      la $s4, mat6
#           break;
      j switch_case_end
switch_case_dentro_7: 
#         case 7:
#           matTrabajo = &mat7;
      la $s4, mat7
#           break;
      j switch_case_end

default_case: 
#         default:
#           std::cout << "Numero de matriz de trabajo incorrecto\n";    
      li $v0, 4
      la $a0, errmat
      syscall
#           continue;  // volvemos al principio del bucle
      j while_true
#       }
#       continue;
switch_case_end: 
      j while_true
#     }


op_2: 
#     // Opción 2: Definir matriz 7 //////////////////////////////////////////
#     if (opcion == 2) {
      beq $s0, opc_2, definir_matriz_7
      j op_3


definir_matriz_7: 
#       int nFil;
      li $s6, 0
#       int nCol; // numero de columnas
      li $s7, 0
#       std::cout << "Introduce el numero de filas: ";
      li $v0, 4
      la $a0, petnf
      syscall
#       std::cin >> nFil;
      li $v0, 5
      syscall
      move $s6, $v0

if_definir_matriz_1: 
#       if (nFil < 1 || nFil > MAXELTOS) {
      li $t2, 1
      blt $s6, $t2, impresion_error
      bgt $s6, MAXELTOS, impresion_error
      j else_definir_matriz_1

impresion_error: 
#         std::cout <<
#           "Error: dimension incorrecta.  Numero de filas incorrecto\n";
      li $v0, 4
      la $a0, errnf
      syscall
#         continue;  // volvemos al principio del bucle
      j while_true
#       }

else_definir_matriz_1:
#       std::cout << "Introduce el numero de columnas: ";
      li $v0, 4
      la $a0, petnc
      syscall
#       std::cin >> nCol;
      li $v0, 5
      syscall
      move $s7, $v0

if_definir_matriz_2: 
#       if (nCol < 1 || nCol > MAXELTOS) {
      li $t2, 1
      blt $s7, $t2, impresion_de_error_2
      bgt $s7, MAXELTOS, impresion_de_error_2
      j else_definir_matriz_2

impresion_de_error_2:
#         std::cout <<
#           "Error: dimension incorrecta.  Numero de columnas incorrecto\n";
      li $v0, 4
      la $a0, errnc
      syscall
#         continue;  // volvemos al principio del bucle
      j while_true
#       }
else_definir_matriz_2: 
#       if (nFil * nCol > MAXELTOS) {
      mul $t3, $s6, $s7
      bgt $t3, MAXELTOS, impresion_de_error_3
      j not_continue

impresion_de_error_3:
#         std::cout << "Error: dimension incorrecta.  Demasiados elementos\n";
      li $v0, 4
      la $a0, errmax
      syscall
#         continue;  // volvemos al principio del bucle
      j while_true
#       }

not_continue: 
#       // inicializa la matriz 7 con los valores introducidos
#       mat7.nFil = nFil;
      la $t0, mat7
      sw $s6, 0($t0)
#       mat7.nCol = nCol;
      sw $s7, 4($t0) 

      li $s3, 0
for_2_f:
#       // solicitar los valores de los elementos de la matriz por filas
#       for(int f = 0; f < nFil; f++) {
      bge $s3, $s6, for_2_f_fin
      li $s5, 0
for_2_c: 
#         for(int c = 0; c < nCol; c++) {
      bge $s5, $s7, for_2_c_fin
#           std::cout << "Introduce el elemento (" << f << ',' << c << "): ";
      li $v0, 4
      la $a0, petel
      syscall

      li $v0, 1
      move $a0, $s3
      syscall

      li $v0, 4
      la $a0, petcom
      syscall

      li $v0, 1
      move $a0, $s5
      syscall

      li $v0, 4
      la $a0, petel2
      syscall
#           std::cin >> mat7.elementos[f * nCol + c];
# Read float from user and store:
      li $v0, 6             # System call for reading float
      syscall               # Result will be in $f0
# Calculate address of mat7.elementos[f][c]:
      la $t0, mat7          # Load base address of mat7
      mul $t1, $s3, $s7     # $t1 = f * nCol
      add $t1, $t1, $s5     # $t1 += c (now $t1 = f*nCol + c)
      sll $t1, $t1, 2       # Multiply by 4 (float size) to get byte offset
      addi $t0, $t0, 8      # Point to start of elementos array
      add $t0, $t0, $t1     # $t0 = &mat7.elementos[f][c]
      swc1 $f0, 0($t0)      # Store float at calculated address

      addi $s5, $s5, 1
      j for_2_c
#         }
for_2_f_fin:
      addi $s3, $s3, 1
      j for_2_f
#       }
for_2_c_fin: 
#       continue;
      j while_true
#     }

op_3: 
#     // Opción 3  //////////////////////////////////////////////////////////
#     if(opcion == 3) {
      beq $s0, opc_3, cambiar_un_valor_de_la_matriz
      j op_7

cambiar_un_valor_de_la_matriz: 
      addiu $sp, $sp, -8
      sw $t0, 4($sp) # Guardamos $t0 para usarlo despues
      sw $t1, 0($sp) # Guardamos $t1
#       std::cout << "\nIndice de fila: ";
      li $v0, 4
      la $a0, petfil
      syscall
#       int indFil;
#       std::cin >> indFil;
      li $v0, 5
      syscall
      move $t0, $v0
#       if ((indFil < 0) || (indFil >= numFil)) {
      bltz $t0, error_fila
      bge $t0, $s1, error_fila 
      j pet_col

error_fila: 
#         std::cout <<
#           "Error: dimension incorrecta.  Numero de fila incorrecto\n";
      li $v0, 4
      la $a0, errfil
      syscall
#         continue;  // volvemos al principio del bucle
      j while_true
#       }
pet_col: 
#       std::cout << "Indice de columna: ";
      li $v0, 4
      la $a0, petcol
      syscall
#       int indCol;
#       std::cin >> indCol;
      li $v0, 5
      syscall
      move $t1, $v0
#       if ((indCol < 0) || (indCol >= numCol)){
      bltz $t1, error_col
      bge $t1, $s2, error_col
      j new_value

error_col: 
#         std::cout <<
#           "Error: dimension incorrecta.  Numero de columna incorrecto\n";
      li $v0, 4
      la $a0, errcol
      syscall
#         continue;  // volvemos al principio del bucle
      j while_true
#       }

new_value: 
#       std::cout << "Nuevo valor para el elemento: ";
      li $v0, 4
      la $a0, petval
      syscall
#       float valor;
      li.s $f22, 0.0
#       std::cin >> valor;
      li $v0, 6
      syscall
      mov.s $f22, $f0
#       // cambiar el valor de la matriz de trabajo en la posicion introducida
#       datos[indFil * numCol + indCol] = valor;
      mul $t0, $t0, $s2   # indFil * numCol
      add $t0, $t0, $t1   # + indCol
      sll $t0, $t0, 2     # *4 (float size)
      add $t0, $s6, $t0   # $s6 = datos base address
      swc1 $f22, 0($t0)   # Store new value
#       continue;
      lw $t1, 0($sp)
      lw $t0, 4($sp)
      addiu $sp, $sp, 8
      j while_true
#     }

op_7: 
#     // Opción 7 ////////////////////////////////////////////////////////////
#     if(opcion == 7) {
      beq $s0, opc_7, encontrar_minimo
      j op_incorrecta

encontrar_minimo: 
#       std::cout << "Introduce el umbral: ";
      li $v0, 4
      la $a0, petum
      syscall
#       float umbral;
      li.s $f26, 0.0
#       std::cin >> umbral;
      li $v0, 6
      syscall
      mov.s $f26, $f0
#       int contador = 0;
#      addiu $sp, $sp, -8
#      sw $t5, 4($sp)

      li $t5, 0
      li $s3, 0
for_f_3:
#       for(int f = 0; f < numFil; f++) {
      bge $s3, $s1, for_f_3_fin
      li $s5, 0
for_c_3:
#         for(int c = 0; c < numCol; c++) {
      bge $s5, $s2, for_c_3_fin
#           float valor = datos[f * numCol + c];
      mul $t0, $s3, $s2
      add $t0, $t0, $s5
      sll $t0, $t0, 2
      add $t0, $s6, $t0
      lwc1 $f22, 0($t0)    # $f22 = datos[f*numCol + c]
if_for_c_3: 
#           if (valor > umbral) { 
      c.lt.s $f26, $f22
      bc1f for_if_c_3
#             contador++;
      addi $t5, $t5, 1
#           }
for_if_c_3: 
#         }
      addi $s5, $s5, 1
      j for_c_3
for_c_3_fin:
      addi $s3, $s3, 1
      j for_f_3
#       }
for_f_3_fin:
#       std::cout << "\nNumero de valores superiores al umbral: " << contador;
      li $v0, 4
      la $a0, umbstr
      syscall

      li $v0, 1
      move $a0, $t5
      syscall

#      lw $t5, 4($sp)
#      addiu $sp, $sp, 8     
#       continue;
      j while_true
#     }

op_incorrecta: 
#     // Opción Incorrecta ///////////////////////////////////////////////////
#     std::cout << "Error: opcion incorrecta\n";
      li $v0, 4
      la $a0, erropc
      syscall

      j while_true
#   }
termina_programa:
      lw $s6, 0($sp)
      lw $s5, 4($sp)
      lw $s4, 8($sp)
      lw $s3, 12($sp)
      lw $s2, 16($sp)
      lw $s1, 20($sp)
      lw $s0, 24($sp)
      lw $ra, 28($sp)
      addiu $sp, $sp, 32
#   std::cout << "\nTermina el programa\n";
      li $v0, 4
      la $a0, finstr
      syscall

      li $v0, 10
      syscall
# }


