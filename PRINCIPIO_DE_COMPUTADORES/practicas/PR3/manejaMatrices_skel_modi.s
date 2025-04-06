# Nombre del autor: Steven Abolaji Ibidokun
# Fecha de última modificación: 29/03/25
# Hora de última modificación: 5:00

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
opc_4 = 4
opc_5 = 5
opc_6 = 6
opc_7 = 7
opc_8 = 8
opc_9 = 9
opc_10 = 10
opc_11 = 11

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
        .ascii "(4) Intercambiar un elemento con su opuesto\n"
        .ascii "(5) Encontrar el minimo\n"
        .ascii "(6) Encontrar el maximo\n"
        .ascii "(7) Contar valores superiores a un umbral\n"
        .ascii "(8) Multplicar por un escalar\n"
        .ascii "(9) Cambiar filas de una matriz\n"
        .ascii "(10) Cambiar toda una columna de una matriz\n"
        .ascii "(11) Immprimir elementos de la diagonal principal\n"
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
petesc: .asciiz "\nDigame el escalar: "
errfil: .asciiz "Error: dimension incorrecta.  Numero de fila incorrecto\n"
petcol: .asciiz "Indice de columna: "
errcol: .asciiz "Error: dimension incorrecta.  Numero de columna incorrecto\n"
petval: .asciiz "Nuevo valor para el elemento: "
petval_2: .asciiz "Dime el valor al que le quieres hacer el opuesto: \n"
petum:  .asciiz "Introduce el umbral: "
umbstr: .asciiz "\nNumero de valores superiores al umbral: "
erropc: .asciiz "Error: opcion incorrecta\n"
finstr: .asciiz "\nTermina el programa\n"
menorstr: .asciiz "\nEl menor elemento de la matriz es: "
mayorstr: .asciiz "\nEl mayor elemento de la matriz es: "
matriz_actualizada: .asciiz "\nLa matriz se actualizo después de mult. por el escalar: "
pidefil: .asciiz "\nDime fil("
pidefil2: .asciiz ","
pidefil3: .asciiz " ): "
msg_exito_intercambio: .asciiz "\nFilas cambiadas correctamente\n"
pet_fil_mod: .asciiz "Digame el indice de la fila: \n"
err_fil_mod: .asciiz "Error en el número de la filas\n"
pet_col_mod: .asciiz "Digame el indice de la columa: \n"
err_col_mod: .asciiz "Error en el número de columnas\n"
pidecol: .asciiz "\nDime col("
pidecol2: .asciiz ","
pidecol3: .asciiz "): "
col_act: .asciiz "Las columnas se actulizaron :\n"
imp_dia_elems: .asciiz "Los elementos de la diagonal principal son: "
strmatriznocuadrada: .asciiz "La matriz no es cuadrada, cambie de matriz "
      .text
      # TABLA DE REGISTROS:
      #$s0  -> opc       # Opción ingresada por el usuario
      #$s1  -> numFil    # Número de filas de la matriz
      #$s2  -> numCol    # Número de columnas de la matriz
      #$s3  -> f         # Índice de la fila en iteraciones
      #$s4  -> opcmatT   # Puntero a la matriz de trabajo
      #$s5  -> c         # Índice de la columna en iteraciones
      #$s6  -> nFil      # Número de filas para definir nueva matriz
      #$s7  -> contador  # Contador de valores superiores al umbral
      #$t0  -> indFil    # Índice de fila para modificar un valor
      #$t2  -> indCol    # Índice de columna para modificar un valor
      #$f20 -> datos     # Puntero a los datos de la matriz
      #$f22 -> valor     # Valor leído/modificado en la matriz
      #$f26 -> umbral    # Valor umbral para comparación
      #$t7 -> cte{999}   # Constante inicial de minimo
      #$f26 -> minimo    # Numero minimo de la matriz
      #$f26 -> maximo    # Numero maximo de la matriz
      #$f4 -> escalar    # Numero al que le multiplicaremos la matriz
# -------------------------------------------------------------------------------------------
main:
# int main() {
# Inicializamos el número de filas y de columnas en 0
#   int numCol;
      li $s2, 0                     # numCol = 0
#   int numFil;
      li $s1, 0                     # numFil = 0
# Cargamos el puntero de datos a la mat1
#   float* datos;
      la $s4, mat1                  # Dirección base de mat1 en $s4
      add $s6, $s4, elementos       # $s6 apunta a los datos de la matriz
#   std::cout << std::fixed << std::setprecision(8);  // Ignorar
impresion_de_titulo:
# Imprimimos el título
#   std::cout << "\nComienza programa manejo matrices\n";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, titulo                # Cargamos la dirección de titulo
      syscall                       # Llamada al sistema
while_true:
# Obtenemos la cantidad de filas y de columnas de matriz
#   structMat* matTrabajo = &mat1;
#   while(true) {
#     numCol = matTrabajo->nCol;
      lw $s2, nCol($s4)
#     numFil = matTrabajo->nFil;
      lw $s1, nFil($s4)
#     datos = matTrabajo->elementos;
      add $s6, $s4, elementos

# Imprimimos las dimensiones de la matriz actual
#     std::cout << "\n\nLa matriz tiene dimension " << numFil<< 'x'
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, dimstr                # Cargamos la dirección de titulo
      syscall                       # Llamada al sistema

      li $v0, 1                     # Cargamos la instrucción de print_int
      move $a0, $s1                 # ($a0 = $s1)
      syscall                       # Llamada al sistema

      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, xstr                  # Cargamos la dirección de x
      syscall                       # Llamada al sistema
#               << numCol << '\n';

      li $v0, 1                     # Cargamos la instrucción de print_int
      move $a0, $s2                 # ($a0 = $s1)
      syscall                       # Llamada al sistema

      li $v0, 11                    # Cargamos la instrucción de print_char
      li $a0, 10                    # Cargamos LF
      syscall                       # Llamada al sistema

# Recorremos e imprimimos la matriz
#     for(int f = 0; f < numFil; f++) {
      li $s3, 0                     # ($s3 = 0)
for_f:
      bge $s3, $s1, for_f_fin       # Si ($s3 > $s1) -> for_f_fin
#       for(int c = 0; c < numCol; c++) {
      li $s5, 0                     # ($s5 = 0)
for_c:
      bge $s5, $s2, for_c_fin       # Si ($s5 > $s2) -> for_c_fin
#         std::cout << datos[f*numCol + c] << ' ';
# Calculamos la dirección del elemento mat[f][c]
      mul $t0, $s3, $s2             # f * numCol
      add $t0, $t0, $s5             # + c
      mul $t0, $t0, sizeF           # *4 (tamaño float)
      add $t0, $t0, $s6             # dirección absoluta
      l.s $f12, 0($t0)              # Cargamos el valor flotante en $f12
      li $v0, 2                     # Imprimimos el valor
      syscall

      # Espacio entre elementos
      li $v0, 11                    # Cargamos la isntrucción de print_char
      li $a0, 32                    # Cargamos " "
      syscall                       # Llamada al sistema

# Actualizamos el iterador
      addi $s5, $s5, 1              # ($s5++)
      j for_c                       # Saltamos a for_c
#       }
for_c_fin:
# Imprimos un salto de linea
#       std::cout << '\n';
      li $v0, 11                    # Cargamos la instrucción de print_char
      li $a0, 10                    # Cargamos '\n'
      syscall                       # Llamamos al sistema
# Actualizamos el iterador
      addi $s3, $s3, 1              # ($s5++)
      j for_f                       # Saltamos a for_f
#     }
for_f_fin:
# Imprimimos un salto de linea y el menu solicitando una opción
#     std::cout << '\n';
      li $v0, 11                    # Cargamos la instrucción de print_char
      li $a0, 10                    # Cargamos '\n'
      syscall                       # Llamamos al sistema
#     std::cout <<
#     "(0) Terminar el programa\n"
#     "(1) Cambiar la matriz de trabajo\n"
#     "(2) Definir matriz 7\n"
#     "(3) Cambiar un valor de la matriz\n"
#     "(4) Intercambiar un elemento con su opuesto
#     "(5) Encontrar el minimo\n"
#     "(6) Encontrar el máxino\n"
#     "(7) Contar valores superiores a un umbral\n"
#     "(8) Multiplicar por un escalar\n"
#     "(9) Cambiar toda una fila de una matriz\n"
#     "(10) Cambiar toda una columna de una matriz\n"
#     "\nIntroduce opción elegida: ";
      li $v0, 4                     # Cargamos la instrucción de print_char
      la $a0, menu                  # Cargamos la dirección de menu
      syscall                       # Llamamos al sistema
#     int opcion;
      li $s0, 0                     # ($s0 = 0)
#     std::cin >> opcion;
      li $v0, 5                     # Cargamos la instrucción de read_int
      syscall                       # Llamamos al sistema
      move $s0, $v0                 # ($s0 = $v0)
op_0:
# Si (opcion == 0) -> termina_programa
#     if(opcion == 0) {
      beq $s0, opc_0, termina_programa
#       break;
#     }
op_1:
# Si (opcion == 1) -> cambiar_matriz
#     // Opción 1 ////////////////////////////////////////////////////////////
#     if(opcion == 1) {
      beq $s0, opc_1, cambiar_matriz
      j op_2                        # En caso de que no, salta a op_2
cambiar_matriz:
# Preguntamos por la matriz que queremos cambiar
#       std::cout << "\nElije la matriz de trabajo (1..7): ";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, petmat                # Cargamos la dirección de petmat
      syscall                       # Llamamos al sistema
#       int matT;
#       std::cin >> matT;
      li $v0, 5                     # Cargamos la instrucción de print_int
      syscall                       # Llamamos al sistema
      move $t0, $v0                 # ($t0 = $v0)
switch_case:
# Evaluamos si se sale de rg (1-7) para imprimir: "Matriz incorrecta"
      blt $t0, 1, default_case
      bgt $t0, 7, default_case

# Si está en el rango la cambiamos
      beq $t0, 1, switch_case_dentro_1
      beq $t0, 2, switch_case_dentro_2
      beq $t0, 3, switch_case_dentro_3
      beq $t0, 4, switch_case_dentro_4
      beq $t0, 5, switch_case_dentro_5
      beq $t0, 6, switch_case_dentro_6
      beq $t0, 7, switch_case_dentro_7
#       switch(matT) {
switch_case_dentro_1:
#         case 1:
#           matTrabajo = &mat1;
      la $s4, mat1                  # Cargamos la dirección de mat1
#           break;
      j switch_case_end             # Sltamos a switch_case_end
switch_case_dentro_2:
#         case 2:
#           matTrabajo = &mat2;
      la $s4, mat2                  # Cargamos la dirección de mat2
#           break;
      j switch_case_end             # Sltamos a switch_case_end
switch_case_dentro_3:
#         case 3:
#           matTrabajo = &mat3;
      la $s4, mat3                  # Cargamos la dirección de mat3
#           break;
      j switch_case_end             # Sltamos a switch_case_end
switch_case_dentro_4:
#         case 4:
#           matTrabajo = &mat4;
      la $s4, mat4                  # Cargamos la dirección de mat4
#           break;
      j switch_case_end             # Sltamos a switch_case_end
switch_case_dentro_5:
#         case 5:
#           matTrabajo = &mat5;
      la $s4, mat5                  # Cargamos la dirección de mat5
#           break;
      j switch_case_end             # Sltamos a switch_case_end
switch_case_dentro_6:
#         case 6:
#           matTrabajo = &mat6;
      la $s4, mat6                  # Cargamos la dirección de mat6
#           break;
      j switch_case_end              # Sltamos a switch_case_end
switch_case_dentro_7:
#         case 7:
#           matTrabajo = &mat7;
      la $s4, mat7                  # Cargamos la dirección de mat7
#           break;
      j switch_case_end             # Sltamos a switch_case_end
default_case:
#         default:
#           std::cout << "Numero de matriz de trabajo incorrecto\n";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, errmat                # Cargamos la dirección de errmat
      syscall                       # Llamamos al sistema
#           continue;  // volvemos al principio del bucle
      j while_true                  # Sltamos a while_true
#       }
#       continue;
switch_case_end:
      add $s6, $s4, elementos       # (s6 = s4 + elementos)
      j while_true                  # Saltamos al while_true
#     }
op_2:
# Si (opción == 2) -> definir_matriz
#     // Opción 2: Definir matriz 7 //////////////////////////////////////////
#     if (opcion == 2) {
      beq $s0, opc_2, definir_matriz_7
      j op_3                        # Si (opción != 2) -> op_3
definir_matriz_7:
# Definimos la nueva matriz
#       int nFil;
      li $s6, 0                     # ($s6 = 0)
#       int nCol; // numero de columnas
      li $s7, 0                     # ($s7 = 0)
# Solicitamos el numero de columnas
#       std::cout << "Introduce el numero de filas: ";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, petnf                 # Cargamos la dirección de petnf
      syscall                       # Llamamos ala sistema
#       std::cin >> nFil;
      li $v0, 5                     # Cargamos la instrucción de read_int
      syscall                       # Llamamos al sistema
      move $s6, $v0                 # ($s6 = $v0)
if_definir_matriz_1:
# Comprobamos que el nFil no se salga del límite
#       if (nFil < 1 || nFil > MAXELTOS) {
      li $t2, 1                     # Inciializamos cte a 1
      blt $s6, $t2, impresion_error            # ($s6 < $t2) -> impresion_error
      bgt $s6, MAXELTOS, impresion_error       # ($s6 > MAXELTOS) -> impresion_error
      j else_definir_matriz_1       # Saltamos a else_definir_matriz
impresion_error:
# Imprimimos mensaje de error si se sale
#         std::cout <<
#           "Error: dimension incorrecta.  Numero de filas incorrecto\n";
      li $v0, 4                     # Cargamos la instrucción print_string
      la $a0, errnf                 # Cargamos la direccion de errnf
      syscall                       # Llamamos al sistema
#         continue;  // volvemos al principio del bucle
      j while_true                  # Saltamos a while_true
#       }
else_definir_matriz_1:
# Solictamos el numero de columnas
#       std::cout << "Introduce el numero de columnas: ";
      li $v0, 4                     # Cargamos a la instrucción print_string
      la $a0, petnc                 # Cargamos la dirección petnc
      syscall                       # Llamamos al sistema
#       std::cin >> nCol;
      li $v0, 5                     # Llamamos a la instrucción read_int
      syscall                       # Llamamos al sistema
      move $s7, $v0                 # (s7 = $v0)
if_definir_matriz_2:
# Comprobamos que no se salga de los limites
#       if (nCol < 1 || nCol > MAXELTOS) {
      li $t2, 1                     # Inicializamos a 1 la cte
      blt $s7, $t2, impresion_de_error_2       # ($s7 < $t2) -> impresión_de_error_2
      bgt $s7, MAXELTOS, impresion_de_error_2  # ($s7 > MAXELTOS) -> impresión_de_error_2
      j else_definir_matriz_2       # Saltamos a definir_matriz_2

impresion_de_error_2:
# Imprimos mensaje de error
#         std::cout <<
#           "Error: dimension incorrecta.  Numero de columnas incorrecto\n";
      li $v0, 4                     # Llamamos a la dirección de print_string
      la $a0, errnc                 # Llamamos a la dirección errnc
      syscall                       # Llamamos al sistema
#         continue;  // volvemos al principio del bucle
      j while_true                  # Sltamos a while_true
#       }
else_definir_matriz_2:
# Vemos que no se exceda del limite
#       if (nFil * nCol > MAXELTOS) {
      mul $t3, $s6, $s7             #
      bgt $t3, MAXELTOS, impresion_de_error_3  # ($t3 > MAXELTOS) -> impresión_de_error_3
      j not_continue                # Saltamos a not_continue
impresion_de_error_3:
# Imprimos mensaje de error
#         std::cout << "Error: dimension incorrecta.  Demasiados elementos\n";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, errmax                # Cargamos la dirección de errmax
      syscall                       # Llamamos al sistema
#         continue;  // volvemos al principio del bucle
      j while_true                  # Saltamos a while_True
#       }
not_continue:
#       // inicializa la matriz 7 con los valores introducidos
#       mat7.nFil = nFil;
      la $t0, mat7                  # Cargamos la dirección de mat7
      sw $s6, nFil($t0)
#       mat7.nCol = nCol;
      sw $s7, nCol($t0)

      li $s3, 0                     # $s3 = 0
for_2_f:
#       // solicitar los valores de los elementos de la matriz por filas
#       for(int f = 0; f < nFil; f++) {
      bge $s3, $s6, for_2_f_fin     # (s3 >= $s6) -> for_2_f_fin
      li $s5, 0                     # $s5 = 0
for_2_c:
# Iteramos en el bucle, solicitandole al usuario cada elemento
#         for(int c = 0; c < nCol; c++) {
      bge $s5, $s7, for_2_c_fin
#           std::cout << "Introduce el elemento (" << f << ',' << c << "): ";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, petel                 # Cargamos la dirección de petel
      syscall                       # Llamamos al sistema

      li $v0, 1                     # Cargamos la instrucción de print_int
      move $a0, $s3                 # ($a0 = $s3)
      syscall                       # Llamamos al sistema

      li $v0, 4                     # Cargamos la instrucción print_string
      la $a0, petcom                # Cargamos la dirección petcom
      syscall                       # Llamamos al sistema

      li $v0, 1                     # Cargamos la instrucción de print_int
      move $a0, $s5                 # ($a0 = $s5)
      syscall                       # Llamada al sistema

      li $v0, 4                     # Cargamos la instrucción print_string
      la $a0, petel2                # Cargamos la dirección petel2
      syscall                       # Llamamos al sistema
#           std::cin >> mat7.elementos[f * nCol + c];
      li $v0, 6                     # Cargamos la instrucción read_float
      syscall                       # Llamamos al sistema
      la $t0, mat7
      mul $t1, $s3, $s7
      add $t1, $t1, $s5
      mul $t1, $t1, sizeF
      addi $t0, $t0, elementos
      add $t0, $t0, $t1
      s.s $f0, 0($t0)

# Actualizamos el iterador
      addi $s5, $s5, 1              # ($s5++)
      j for_2_c                     # Saltamos a for_2_c
#         }
for_2_c_fin:
# Actualizamos el iterador
      addi $s3, $s3, 1              # ($s3 ++)
      j for_2_f                     # Saltamos a for_2_f
#       }
for_2_f_fin:
#       continue;
      j while_true                  # Saltamos a while_true
#     }
op_3:
  # Si (opción == 3) -> cambiar_valor_matriz
  #     // Opción 3  //////////////////////////////////////////////////////////
  #     if(opcion == 3) {
        beq $s0, opc_3, cambiar_un_valor_de_la_matriz
        j op_4                        # Si (opción != 3) -> op_4
cambiar_un_valor_de_la_matriz:
# Solicitamos el ind de la fila y la columna para cambiarlo
#       std::cout << "\nIndice de fila: ";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, petfil                # Cargamos la dirección de pet_fil
      syscall                       # Llamamos al sistema
#       int indFil;
#       std::cin >> indFil;
      li $v0, 5                     # Cargamos la instrucción de read_int
      syscall                       # Llamamos al sistema
      move $s3, $v0                 # ($s3 = $v0)
# Comprobamos que no se salga de límite
#       if ((indFil < 0) || (indFil >= numFil)) {
      bltz $s3, error_fila          # (s3 < 0) -> error_fila
      bge $s3, $s1, error_fila      # (s3 > $s1) -> error_fila
      j pet_col                     # Saltamos a pet_col
error_fila:
# Imprimos mensaje de error
#         std::cout <<
#           "Error: dimension incorrecta.  Numero de fila incorrecto\n";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, errfil                # Cargamos la dirección de errfil
      syscall                       # Llamamos al sistema
#         continue;  // volvemos al principio del bucle
      j while_true
#       }
pet_col:
#       std::cout << "Indice de columna: ";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, petcol                # Cargamos la dirección de pet_col
      syscall                       # Llamamos al sistema
#       int indCol;
#       std::cin >> indCol;
      li $v0, 5                     # Cargamos la instrucción de read_int
      syscall                       # Llamamos al sistema
      move $s1, $v0                 # ($s1 = $v0)
# Comprobamos que no se salga de límite
#       if ((indCol < 0) || (indCol >= numCol)){
      bltz $s1, error_col           # ($s1 < 0) -> error_col
      bge $s1, $s2, error_col       # ($s1 >= $s2) -> error_col
      j nuevo_valor                 # Saltamos a nuevo_valor
error_col:
# Imprimimos mensaje de error
#         std::cout <<
#           "Error: dimension incorrecta.  Numero de columna incorrecto\n";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, errcol                # Cargamos la dirección de errcol
      syscall                       # Llamamos al sistema
#         continue;  // volvemos al principio del bucle
      j while_true                  # Saltamos a while_true
#       }
nuevo_valor:
# Solitamos el nuevo valor para el elementos y lo almacenamos en la matriz
#       std::cout << "Nuevo valor para el elemento: ";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, petval                # Cargamos la dirección de pet_eval
      syscall                       # Llamamos al sistema
#       float valor;
      li.s $f22, 0.0                # Inicializamos $f22 = 0.0
#       std::cin >> valor;
      li $v0, 6                     # Llamamos a la instrucción read_float
      syscall                       # Llamamos al sistema
      mov.s $f22, $f0               # ($f22 = $f0)
#       // cambiar el valor de la matriz de trabajo en la posicion introducida
#       datos[indFil * numCol + indCol] = valor;
      mul $s3, $s3, $s2
      add $s3, $s3, $s1
      mul $s3, $s3, sizeF
      add $s3, $s3, $s6
      s.s $f22, 0($s3)
#       continue;
      j while_true                  # Saltamos a while_true
#     }
op_4:
# Si (opción == 4) -> intercambiar_un_elemento_con_su_opuestp
#     // Opción 4  //////////////////////////////////////////////////////////
#     if(opcion == 4) {
      beq $s0, opc_4, intercambiar_un_elemento_con_su_opuesto
      j op_5                        # Si (opción != 4) -> op_5
intercambiar_un_elemento_con_su_opuesto:

pet_fil_2:
# Solicitamos el ind de la fila y la columna para cambiarlo con su opuesto
#       std::cout << "\nIndice de fila: ";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, petfil                # Cargamos la dirección de pet_fil
      syscall                       # Llamamos al sistema
#       int indFil;
#       std::cin >> indFil;
      li $v0, 5                     # Cargamos la instrucción de read_int
      syscall                       # Llamamos al sistema
      move $t0, $v0                 # ($t0 = $v0)
# Comprobamos que no se salga de límite
#       if ((indFil < 0) || (indFil >= numFil)) {
      bltz $t0, error_fila_2          # (t0 < 0) -> error_fila
      bge $t0, $s1, error_fila_2      # ($t0 > $s1) -> error_fila
      j pet_col_2                     # Saltamos a pet_col_2
error_fila_2:
# Imprimos mensaje de error
#         std::cout <<
#           "Error: dimension incorrecta.  Numero de fila incorrecto\n";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, errfil                # Cargamos la dirección de errfil
      syscall                       # Llamamos al sistema
#         continue;  // volvemos al principio del bucle
      j while_true
#       }
pet_col_2:
#       std::cout << "Indice de columna: ";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, petcol                # Cargamos la dirección de pet_col
      syscall                       # Llamamos al sistema
#       int indCol;
#       std::cin >> indCol;
      li $v0, 5                     # Cargamos la instrucción de read_int
      syscall                       # Llamamos al sistema
      move $t1, $v0                 # ($t1 = $v0)
# Comprobamos que no se salga de límite
#       if ((indCol < 0) || (indCol >= numCol)){
      bltz $t1, error_col_2           # ($t1 < 0) -> error_col
      bge $t1, $s2, error_col_2       # ($t1 >= $s2) -> error_col
      j cal_opuesto                 # Saltamos a nuevo_valor_2
error_col_2:
# Imprimimos mensaje de error
#         std::cout <<
#           "Error: dimension incorrecta.  Numero de columna incorrecto\n";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, errcol                # Cargamos la dirección de errcol
      syscall                       # Llamamos al sistema
#         continue;  // volvemos al principio del bucle
      j while_true                  # Saltamos a while_true
#       }
cal_opuesto:
#       // cambiar el valor de la matriz de trabajo en la posicion introducida
#       datos[indFil * numCol + indCol] = op_value;
      mul $t2, $t0, $s2
      add $t2, $t2, $t1
      mul $t2, $t2, sizeF
      add $t2, $s6, $t2


      l.s $f28, 0($t2)
      li.s $f1, -1.0
      mul.s $f28, $f28, $f1
      s.s $f28, 0($t2)
#       continue;
      j while_true                  # Saltamos a while_true
#     }
op_5:
# Si (opción == 5) -> encontrar_el_minimo
#     // Opción 5  //////////////////////////////////////////////////////////
#     if(opcion == 5) {
      beq $s0, opc_5, encontrar_el_minimo
      j op_6                        # Si (opción != 5) -> op_6
encontrar_el_minimo:
      l.s $f26, 0($s6)
      li $t3, 0
for_filas:
#    for (int i = 0; i < filas; i++) {
      bge $t3, $s1, for_filas_fin

      li $t5, 0
for_columnas:
#        for (int j = 0; j < columnas; j++) {
      bge $t5, $s2, for_columnas_fin
if_dentro_columnas:
      mul $t2, $t3, $s2
      add $t2, $t2, $t5
      mul $t2, $t2, sizeF
      add $t2, $s6, $t2

      l.s $f24, 0($t2)
#            if (matriz[i][j] < minimo) {
      c.lt.s $f24, $f26
      bc1f fin_if_dentro_columnas
#                minimo = matriz[i][j];  // Actualizamos el mínimo
      mov.s $f26, $f24
#            }
fin_if_dentro_columnas:
#        }
      addi $t5, $t5, 1
      j for_columnas
for_columnas_fin:
#    }
      addi $t3, $t3, 1
      j for_filas
for_filas_fin:
      li $v0, 4
      la $a0, menorstr
      syscall

      li $v0, 2
      mov.s $f12, $f26
      syscall

      j while_true
op_6:
# Si (opción == 6) -> encontrar_el_maximo
#     // Opción 6  //////////////////////////////////////////////////////////
#     if(opcion == 6) {
      beq $s0, opc_6, encontrar_el_maximo
      j op_7                       # Si (opción != 6) -> op_7

encontrar_el_maximo:
      l.s $f26, 0($s6)
      li $t3, 0
for_filas_2:
      bge $t3, $s1, for_filas_fin_2
      li $t5, 0
for_columnas_2:
      bge $t5, $s2, for_columnas_fin_2
if_dentro_columnas_2:
      mul $t2, $t3, $s2
      add $t2, $t2, $t5
      mul $t2, $t2, sizeF
      add $t2, $s6, $t2

      l.s $f24, 0($t2)
#            if (matriz[i][j] > maximo) {
      c.lt.s $f24, $f26
      bc1t fin_if_dentro_columnas_2
#                maximo = matriz[i][j];  // Actualizamos el maximo
      mov.s $f26, $f24
#            }
fin_if_dentro_columnas_2:
      addi $t5, $t5, 1
      j for_columnas_2
for_columnas_fin_2:
      addi $t3, $t3, 1
      j for_filas_2
for_filas_fin_2:
      li $v0, 4
      la $a0, mayorstr
      syscall

      li $v0, 2
      mov.s $f12, $f26
      syscall

      j while_true
op_7:
# Si (opción == 7) -> valores_superiores_al_umbral
#     // Opción 7 ////////////////////////////////////////////////////////////
#     if(opcion == 7) {
      beq $s0, opc_7, valores_superiores_al_umbral
      j op_8              # Si (opción != 7) -> op_8

valores_superiores_al_umbral:
# Pedimos el valor del umbral y calculamos cuantos lo superan
#       std::cout << "Introduce el umbral: ";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, petum                 # Cargamos la dirección de petnum
      syscall                       # Llamamos al sistema
#       float umbral;
      li.s $f26, 0.0                # Inicializamos $f26 = 0.0
#       std::cin >> umbral;
      li $v0, 6                     # Cargamos la instrucción de read_float
      syscall                       # Llamamos al sistema
      mov.s $f26, $f0               # ($f26 = $f0)
#       int contador = 0;
      li $s7, 0                     # ($s7 = 0)
      li $s3, 0                     # ($s3 = 0)
for_f_3:
# Recorremos la matriz
#       for(int f = 0; f < numFil; f++) {
      bge $s3, $s1, for_f_3_fin     # Si (ç4s3 >= $s1) -> for_f_3_fin
      li $s5, 0                     # ($s5 = 0)
for_c_3:
#         for(int c = 0; c < numCol; c++) {
      bge $s5, $s2, for_c_3_fin     # Si (s5 >= $s2) -> for_c_3_fin
#           float valor = datos[f * numCol + c];
      mul $t0, $s3, $s2
      add $t0, $t0, $s5
      mul $t0, $t0, sizeF
      add $t0, $s6, $t0
      l.s $f22, 0($t0)             # $f22 = datos[f*numCol + c]
if_for_c_3:
# Si (valor > umbral) -> contador++
#           if (valor > umbral) {
      c.lt.s $f26, $f22             # Si ($f26 > $f22)
      bc1f for_if_c_3               # Si es falso -> for_if_c_3
#             contador++;
      addi $s7, $s7, 1              # ($s7++)
#           }
for_if_c_3:
# Actualizamos el iterador
#         }
      addi $s5, $s5, 1              # ($s5++)
      j for_c_3                     # Saltamos a for_c_3
for_c_3_fin:
# Actualizamos el iterador
      addi $s3, $s3, 1              # ($s3++)
      j for_f_3                     # Saltamos a for_f_3
#       }
for_f_3_fin:
# Imrpimos cuantos valores superan el umbral
#       std::cout << "\nNumero de valores superiores al umbral: " << contador;
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, umbstr                # Cargamos la dirección de umbstr
      syscall                       # Llamamos al sistema

      li $v0, 1                     # Cargamos la instrucción de print_int
      move $a0, $s7                 # ($a0 = $s7)
      syscall                       # Llamamos al sistema

#       continue;
      j while_true
#     }
op_8:
      beq $s0, opc_8, mult_matriz
      j op_9             # Si (opción != 8) -> op_9

mult_matriz:
      li $v0, 4
      la $a0, petesc
      syscall

      li $v0, 6
      syscall
      mov.s $f4, $f0
for_mult_matriz:
      li $s3, 0                     # ($s3 = 0)
for_f_4:
# Recorremos la matriz
#       for(int f = 0; f < numFil; f++) {
      bge $s3, $s1, for_f_4_fin     # Si (s3 >= $s1) -> for_f_3_fin
      li $s5, 0                     # ($s5 = 0)
for_c_4:
#         for(int c = 0; c < numCol; c++) {
      bge $s5, $s2, for_c_4_fin     # Si (s5 >= $s2) -> for_c_3_fin
#           float valor = datos[f * numCol + c];
      mul $t0, $s3, $s2
      add $t0, $t0, $s5
      mul $t0, $t0, sizeF
      add $t0, $s6, $t0

      l.s $f22, 0($t0)
      mul.s $f22, $f22, $f4
      s.s $f22, 0($t0)             # $f22 = datos[f*numCol + c]
for_if_c_4:
# Actualizamos el iterador
#         }
      addi $s5, $s5, 1              # ($s5++)
      j for_c_4                    # Saltamos a for_c_3
for_c_4_fin:
# Actualizamos el iterador
      addi $s3, $s3, 1              # ($s3++)
      j for_f_4                     # Saltamos a for_f_3
#       }
for_f_4_fin:
      li $v0, 4
      la $a0, matriz_actualizada
      syscall

      j while_true

op_9:
      beq $s0, opc_9, cambiar_fila
      j op_10            # Si (opción != 9) -> op_10

cambiar_fila:
      li $v0, 4
      la $a0, pet_fil_mod
      syscall

#    int fil1;
      li $t5, 0
#    std::cin >> fil1;
      li $v0, 5
      syscall
      move $t5, $v0

if_cambiar_fila:
      bgt $t5, $s3, error_fila_mod
      j else_fila_mod

error_fila_mod:
      li $v0, 4
      la $a0, err_fil_mod
      syscall

      j cambiar_fila
else_fila_mod:

      li $s5, 0
for_fila_nueva:
      bge $s5, $s2, for_fin_fila
pide_fila:
      li $v0, 4
      la $a0, pidefil
      syscall

      li $v0, 1
      move $a0, $s5
      syscall

      li $v0, 4
      la $a0, pidefil2
      syscall

      li $v0, 1
      move $a0, $t5
      syscall

      li $v0, 4
      la $a0, pidefil3
      syscall

      li $v0, 6
      syscall
      mov.s $f26, $f0
calculo_de_dir:
#           float valor = datos[f * numCol + c];
      mul $t0, $s3, $t5
      add $t0, $t0, $s5
      mul $t0, $t0, sizeF
      add $t0, $s6, $t0

      s.s $f26, 0($t0)

      addi $s5, $s5, 1
      j for_fila_nueva
for_fin_fila:
      li $v0, 4
      la $a0, msg_exito_intercambio
      syscall

      j while_true
op_10:
      beq $s0, opc_10, cambiar_columnas        # ($s0 = 10) -> cambiar_columnas
      j op_11                                  # ($s0 != 10) -> op_11

cambiar_columnas:
      li $v0, 4
      la $a0, pet_col_mod
      syscall

      li $v0, 5
      syscall
      move $t7, $v0

if_cambiar_col:
      bge $t7, $s2, error_col_mod
      j else_new_col

error_col_mod:
      li $v0, 4
      la $a0, err_col_mod
      syscall

      j cambiar_columnas

      li $s7, 0
else_new_col:

for_columna_nueva:
      bge $s7, $s2, for_fin_columna_nueva

pide_col:
      li $v0, 4
      la $a0, pidecol
      syscall

      li $v0, 1
      move $a0, $t7
      syscall

      li $v0, 4
      la $a0, pidecol2
      syscall

      li $v0, 1
      move $a0, $s7
      syscall

      li $v0, 4
      la $a0, pidecol3
      syscall

      li $v0, 6
      syscall
      mov.s $f28, $f0
calculo_dir_col:
#           float valor = datos[c * numCol + f];
      mul $t0, $s3, $s7
      add $t0, $t0, $t7
      mul $t0, $t0, sizeF
      add $t0, $s6, $t0

      s.s $f28, 0($t0)

      addi $s7, $s7, 1
      j for_columna_nueva
for_fin_columna_nueva:
      li $v0, 4
      la $a0, col_act
      syscall

      j while_true

op_11:
      beq $s0, opc_11, if_cuadrada   # ($s0 == 11) -> if_cuadrada
      j op_incorrecta                                 # ($s0 != 11) -> op_incorrecta

if_cuadrada:
      bne $s2, $s3, matriz_no_cuadrada
      j imprimir_diagonal_principal

matriz_no_cuadrada:
      li $v0, 4
      la $a0, strmatriznocuadrada
      syscall

      j while_true

imprimir_diagonal_principal:
      li $v0, 4
      la $a0, imp_dia_elems
      syscall

for_imprimir_dia_principal:
      li $s3, 0
for_imprimir_dia_principal_col:
#    for (int i = 0; i < numCol; ++i) {
      bge $s3, $s2, for_imprimir_dia_principal_fin

      li $s7, 0
for_imprimir_dia_principal_fil:
#        for (int j = 0; j < numFil; ++j) {
      bge $s7, $s1, for_imprimir_dia_principal_fil_fin
if_dentro:
#            // Check if it's a diagonal element (i == j)
#            if (i == j) {
      beq $s3, $s7, print_elem
      j skip_print_elem
print_elem:
#               cout << matrix[i][j] << " ";
#           float valor = datos[f * numCol + c];
      mul $t2, $s7, $s2
      add $t2, $t2, $s3
      mul $t2, $t2, sizeF
      add $t2, $s6, $t2

      l.s $f12, 0($t2)
      li $v0, 2
      syscall

      li $v0, 11
      li $a0, 32
      syscall
#            }
skip_print_elem:
      addi $s7, $s7, 1
      j for_imprimir_dia_principal_fil
for_imprimir_dia_principal_fil_fin:
      addi $s3, $s3, 1
      j for_imprimir_dia_principal_col
for_imprimir_dia_prinicipal_col_fin:
#        }
for_imprimir_dia_principal_fin:
#    }
      j while_true

op_incorrecta:
# Imprimos mensaje de opción incorrecta
#     // Opción Incorrecta ///////////////////////////////////////////////////
#     std::cout << "Error: opcion incorrecta\n";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, erropc                # Cargamos la dirección de erropc
      syscall                       # Llamamos al sistema

      j while_true                  # Saltamos al while_true
#   }
termina_programa:
# Terminamos el programa
#   std::cout << "\nTermina el programa\n";
      li $v0, 4                     # Cargamos la instrucción de print_string
      la $a0, finstr                # Cargamos la dirección de finstr
      syscall                       # Llamamos al sistema

      li $v0, 10                    # Cargamos la instrucción de fin_programa
      syscall                       # Llamamos al sistema
# }
