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
opc_12 = 12
opc_13 = 13
opc_14 = 14
opc_15 = 15
opc_16 = 16
opc_17 = 17
opc_18 = 18
opc_19 = 19
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
        .ascii "(11) Imprimir elementos de la diagonal principal\n"
        .ascii "(12) Suma de elementos de una columna\n"
        .ascii "(13) Intercambiar primer elemento con el último si son se signos opuestos\n"
        .ascii "(14) Recorrer diagonal principal, imprimir valores > umbral y guardarlos cambiados de signo\n"
        .ascii "(15) Sumar elementos opuestos en una columna y guardar el resultado en la fila superior\n"
        .ascii "(16) Comparar dos columnas y si el valor de la primera es mayor, intercambiarlo con el de la segunda\n"
        .ascii "(17) Buscar el máximo en una columna e imprimirlo, indicando en qué fila está \n"
        .ascii "(18) Solicitado el índice de una columna, duplica los elementos positivos y resta 1 a los negativos."
        .ascii "(19) Invertir los elementos de una columna\n"
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
strpideindicecol: .asciiz "Digame el indice de la columna: "
error_indice_incorr: .asciiz "Indice incorrecto de columna, pruebe de nuevo "
lasumaes: .asciiz "La suma de las columnas es: "
error_not_cuadrada: .asciiz "\nLa matriz elegida no es cuadrada, cambie de matriz para ejecutar la opc_12"
pide_ind_col: .asciiz "Indice de columna: "
error_dif: .asciiz "Error: dimensión incorrecta. Número de columna incorrecto\n"
no_intercambio: .asciiz "NO intercambio en fila "
termina_9: .asciiz "\nTermina opcion 9\n"
intercambio: .asciiz "Intercambio "
fila: .asciiz" de fila "
con: .asciiz" con "
salto: .asciiz "\n"
matriz_no_es_cuadrada: .asciiz "La matriz no es cuadrada, no tiene diagonal principal\n"
introduce_umbral: .asciiz "Introduce el umbral: "
mayores_que_umbral: .asciiz "Elementos de la diagonal mayores que: "
ind_col_pide: .asciiz "Indice de columna: "
error_dim_op: .asciiz "Error: dimensión incorrecta. Número de columna incorrecto\n"
suma_fil: .asciiz "Suma de fila "
suma_fil_2: .asciiz " y fila "
suma_fila_3: .asciiz " = "
suma_fila_4: .asciiz "\n"
termina_15: .asciiz "Termina opcion 15\n"
termina_16: .asciiz "Termina opción 16\n"
ingresa_col_1: .asciiz "Ingrese el índice de la primera columna: "
msg_error_col_1: .asciiz  "Error: índice de columna inválido\n"
ingresa_col_2: .asciiz "Ingrese el índice de la segunda columna: "
msg_error_col_2: .asciiz "Error: índice de columna inválido o columnas iguales\n"
inter_1: .asciiz "Intercambio fila "
inter_2: .asciiz ": "
inter_3: .asciiz " con "
inter_4: .asciiz "\n"
no_inter_1: .asciiz "No se intercambia en fila "
no_inter_2: .asciiz "\n"
termina_17: .asciiz "Termina opcion 17\n"
ing_col: .asciiz "Ingrese el índice de la columna: "
invalid_col: .asciiz "Error: índice de columna inválido\n"
fila_max_1: .asciiz "Máximo en columna "
fila_max_2: .asciiz ": "
fila_max_3: .asciiz " en fila "
fila_max_4: .asciiz "\n"
fila_not_max_1: .asciiz "Fila "
fila_not_max_2: .asciiz ": no contiene el máximo\n"
pide_indcol: .asciiz "Indice de columna: "
error_pidecol_6: .asciiz "Error: dimension incorrecta. Numero de columna incorrecto\n"
termina_18: .asciiz "Termina opcion 18\n"
en_fila: .asciiz "En fila "
en_fila_2: .asciiz " es positivo "
en_fila_3: .asciiz " es negativo "
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
      #$f20 -> suma      # Suma de las columnas
      # $s3 -> indCol    # Indice de la columa
	  # $f20 -> suma
	  # $f22 -> datos
	  # $f4 -> cte{0.0}
	  # $t5 -> mitadCol
	  # $f26 -> aux1
	  # $f28 -> aux2
	  # $t6 -> (numFil - f - 1)
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

else_new_col:
       li $s3, 0

for_columna_nueva:
      bge $s3, $s2, for_fin_columna_nueva

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
      move $a0, $s3
      syscall

      li $v0, 4
      la $a0, pidecol3
      syscall

      li $v0, 6
      syscall
      mov.s $f28, $f0
calculo_dir_col:
#           float valor = datos[c * numCol + f];
      mul $t0, $s3, $s2
      add $t0, $t0, $t7
      mul $t0, $t0, sizeF
      add $t0, $s6, $t0

      s.s $f28, 0($t0)

      addi $s3, $s3, 1
      j for_columna_nueva
for_fin_columna_nueva:
      li $v0, 4
      la $a0, col_act
      syscall

      j while_true

op_11:
      beq $s0, opc_11, if_cuadrada   # ($s0 == 11) -> if_cuadrada
      j op_12                                 # ($s0 != 11) -> op_12

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

op_12:
    beq $s0, opc_12, if_matriz_cuadrada  # ($s0 == 12) -> if_matriz_cuadrada
    j   op_13

if_matriz_cuadrada:
    bne $s1, $s2, not_cuadrada
    j pide_indice_para_suma

not_cuadrada:
    li $v0, 4
    la $a0, error_not_cuadrada
    syscall

    j while_true


pide_indice_para_suma:
    li $v0, 4
    la $a0, strpideindicecol
    syscall

    li $v0, 5
    syscall
    move $t5, $v0

if_indice_incorrecto:
    bge $t5, $s2, error_indice_col_incorr
    j else_indice_correcto


error_indice_col_incorr:
    li $v0, 4
    la $a0, error_indice_incorr
    j pide_indice_para_suma

else_indice_correcto:

     li $t3, 0
     li.s $f20, 0.0
for_suma_de_columnas:
    bge $t3, $s2, imprimir_suma

calculo_de_suma:
#           float valor = datos[c * numCol + f];
      mul $t0, $t3, $s5
      add $t0, $t0, $t5
      mul $t0, $t0, sizeF
      add $t0, $t0, $s6

      l.s $f24, 0($t0)
      add.s $f20, $f20, $f24

      addi $t3, $t3, 1
      j for_suma_de_columnas

imprimir_suma:
      li $v0, 4
      la $a0, lasumaes
      syscall

      li $v0, 2
      mov.s $f12, $f20
      syscall

      j while_true

op_13:
    beq $s0, opc_13, ver_diferentes
    j op_14

ver_diferentes:

pide_indice:
    # // Opción 13: Intercambiar elementos opuestos en una columna si tienen signos diferentes
# std::cout << "Indice de columna: ";
    li $v0, 4
    la $a0, pide_ind_col
    syscall

# int indCol;
# std::cin >> indCol;
    li $v0, 5
    syscall
    move $s7, $v0

if_ver_diferentes:
# if ((indCol < 0) || (indCol >= numCol)) {
    bltz $s7, error_ver_diferentes
    bge $s7, $s2, error_ver_diferentes
    j else_ver_diferentes


error_ver_diferentes:
#     std::cout << "Error: dimensión incorrecta. Número de columna incorrecto\n";
    li $v0, 4
    la $a0, error_dif
    syscall

    j pide_indice
#     continue;
# }
else_ver_diferentes:
      li $t0, 0
      div $t1, $s1, 2
for_principal:
# for (int f = 0; f < numFil / 2; f++) {
      bge $t0, $t1, for_principal_fin

operaciones:
#     int fOpuesto = numFil - f - 1;
      sub $t2, $s1, $t0
      addi $t2, $t2, -1
# valor1 = $t3
#     float valor1 = datos[f * numCol + indCol];
      move $t3, $t0
      mul $t3, $t3, $s2
      add $t3, $t3, $s7
      mul $t3, $t3, sizeF
      add $t3, $t3, $s6
      l.s $f4, 0($t3)
# valor2 = $t4
#     float valor2 = datos[fOpuesto * numCol + indCol];
      mul $t4, $t2, $s2
      add $t4, $t4, $s7
      mul $t4, $t4, sizeF
      add $t4, $t4, $s6
      l.s $f6, 0($t4)
#     float producto = valor1 * valor2;
      mul.s $f8, $f4, $f6

if_producto:
#     if (producto > 0) {
      li.s $f10, 0.0
      c.lt.s $f8, $f10
      bc1t else_intercambio

#         std::cout << "NO intercambio en fila " << f;
      li $v0, 4
      la $a0, no_intercambio
      syscall
      li $v0, 1
      move $a0, $t0
      syscall
      j  skip_update
#     } else {
else_intercambio:
#         std::cout << "Intercambio " << valor1 << " de fila " << f
    s.s $f6, 0($t3)
    s.s $f4, 0($t4)

    li $v0, 4
    la $a0, intercambio
    syscall
    li $v0, 2
    mov.s $f12, $f4
    syscall
    li $v0, 4
    la $a0, fila
    syscall
    li $v0, 1
    move $a0, $t0
    syscall
#                   << " con " << valor2 << " de fila " << fOpuesto;
    li $v0, 4
    la $a0, con
    syscall
    li $v0, 2
    mov.s $f12, $f6
    syscall
#         datos[f * numCol + indCol] = valor2;
#         datos[fOpuesto * numCol + indCol] = valor1;
#     }

skip_update:
#     std::cout << '\n';
    li $v0, 4
    la $a0, salto
    syscall
# }
    addi $t0, $t0, 1
    j for_principal

for_principal_fin:
# std::cout << "Termina opcion 9\n";
    li $v0, 4
    la $a0, termina_9
    syscall
# continue;
    j while_true

op_14:
# TABLA DE REGISTROS :
    # $s1 -> numFil
    # $s2 -> numCol
    # $f20 -> umbral
    # $s5 -> i
    # $f22 -> valor
    # $f30 -> cte{-1.0}
#// Opción 14: Recorrer diagonal principal, imprimir valores > umbral y guardarlos cambiados de signo
#if(opcion == 14) {
    beq $s0, opc_14, valores_mayores_que_umbral_y_signo
    j op_15

valores_mayores_que_umbral_y_signo:

if_matriz_not_cuadrada:
#    if(numFil != numCol) {
    bne $s1, $s2, matriz_not_cuadrada
    j else_matriz_not_cuadrada

matriz_not_cuadrada:
#        cout << "La matriz no es cuadrada, no tiene diagonal principal\n";
    li $v0, 4
    la $a0, matriz_no_es_cuadrada
    syscall
#        continue;
    j while_true
#    }

else_matriz_not_cuadrada:
#    cout << "Introduce el umbral: ";
    li $v0, 4
    la $a0, introduce_umbral
    syscall
#    float umbral;
#    cin >> umbral;
    li $v0, 6
    syscall
    mov.s $f20, $f0
#    cout << "Elementos de la diagonal mayores que " << umbral << ":\n";
    li $v0, 4
    la $a0, mayores_que_umbral
    syscall

    li $v0, 2
    mov.s $f12, $f20
    syscall

    li $v0, 11
    li $a0, 10
    syscall

    li $s5, 0
for_diagonal_umbral:
#    for(int i = 0; i < numFil; i++) {
    bge $s5, $s1, for_diagonal_umbral_fin
#        float valor = datos[i * numCol + i];  // Elemento diagonal
      mul $t0, $s5, $s2
      add $t0, $t0, $s5
      mul $t0, $t0, sizeF
      add $t0, $s6, $t0
      l.s $f22, 0($t0)

if_valor_mayor_que_umbral:
#        if(valor > umbral) {
      c.lt.s $f22, $f20
      bc1t skip_update_2
#            cout << valor << " ";
      li $v0, 2
      mov.s $f12, $f22
      syscall

      li $v0, 11
      li $a0, 32
      syscall
#            // Cambiar signo y guardar
#            datos[i * numCol + i] = -valor;
      li.s $f30, -1.0
      mul.s $f22, $f30, $f22
      s.s $f22, 0($t0)

skip_update_2:
#        }
    addi $s5, $s5, 1
    j for_diagonal_umbral
#    }
for_diagonal_umbral_fin:
#    cout << "\n";
    li $v0, 11
    li $a0, 10
    syscall
#    continue;
    j while_true
#}

op_15:
# TABLA DE REGISTROS :
    # $s1 -> numFil
    # $s2 -> numCol
    # $s3 -> indCol
    # $s5 -> f
    # $t3 -> fOpuesto
    # $f28 -> Suma
#// Opción 15: Sumar elementos opuestos en una columna y guardar el resultado en la fila superior
    beq $s0, opc_15, while_true_op_elems
    j op_16
#int indCol;
    li $s3, 0
while_true_op_elems:
#while (true) {
#    std::cout << "Indice de columna: ";
    li $v0, 4
    la $a0, ind_col_pide
    syscall
#    std::cin >> indCol;
    li $v0, 5
    syscall
    move $s3, $v0

if_op_elems:
    li $t5, 0
#    if (indCol < 0 || indCol >= numCol) {
    blt  $s3, $t5, error_columna_op_elems
    bge $s3, $s2, error_columna_op_elems
    j else_op_elems


error_columna_op_elems:
#        std::cout << "Error: dimensión incorrecta. Número de columna incorrecto\n";
    li $v0, 4
    la $a0, error_dim_op
    syscall
#        continue;
    j while_true
#    }

else_op_elems:
    li $s5, 0
    div $t7, $s1, 2
for_op_elems:
#    for (int f = 0; f < numFil / 2; f++) {
    bge $s5, $t7, for_op_elems_end

    li $t3, 0
#        int fOpuesto = numFil - f - 1;
    sub $t3, $s1, $s5
    addi $t3, $t3, -1

    li $t1, 0
calculo_de_valor:
#        float valor1 = datos[f][indCol];
      mul $t0, $s5, $s2
      add $t0, $t0, $s3
      mul $t0, $t0, sizeF
      add $t0, $t0, $s6
      l.s $f4, 0($t0)
#        float valor2 = datos[fOpuesto][indCol];
      mul $t1, $t3, $s2
      add $t1, $t1, $s3
      mul $t1, $t1, sizeF
      add $t1, $t1, $s6
      l.s $f6, 0($t1)

suma_calculo:
#        float suma = valor1 + valor2;
    li.s $f28, 0.0
    add.s $f28, $f4, $f6

imp_suma:
#        std::cout << "Suma de fila " << f << " y fila " << fOpuesto << " = " << suma << "\n";
    li $v0, 4
    la $a0, suma_fil
    syscall

    li $v0, 1
    move $a0, $s5
    syscall

    li $v0, 4
    la $a0, suma_fil_2
    syscall

    li $v0, 1
    move $a0, $t3
    syscall

    li $v0, 4
    la $a0, suma_fila_3
    syscall

    li $v0, 2
    mov.s $f12, $f28
    syscall

    li $v0, 4
    la $a0, suma_fila_4
    syscall
inv:
#        datos[f][indCol] = suma;
      s.s $f28, 0($t0)
#    }
    addi $s5, $s5, 1
    j for_op_elems
for_op_elems_end:

#    std::cout << "Termina opcion 14\n";
    li $v0, 4
    la $a0, termina_15
    syscall

#    break;
    j while_true
#}
while_true_op_elems_end:

op_16:
    # TABLA DE REGISTROS:
        # t1 -> col1
        # t2 -> col2
        # $f4 -> val1
        # $f6 -> val2
        # $f20 -> suma
#// Opción 15: Comparar dos columnas y si el valor de la primera es mayor, intercambiarlo con el de la segunda
    bne $s0, opc_16, op_17
#int col1, col2;
    li $t1, 0
    li $t2, 0
while_true_2:
#while (true) {
first_col:
#    std::cout << "Ingrese el índice de la primera columna: ";
    li $v0, 4
    la $a0, ingresa_col_1
    syscall
#    std::cin >> col1;
    li $v0, 5
    syscall
    move $t1, $v0
if_first_col:
#    if (col1 < 0 || col1 >= numCol) {
    bltz $t1, error_first_col
    bge $t1, $s2, error_first_col
    j else_first_col

error_first_col:
#        std::cout << "Error: índice de columna inválido\n";
    li $v0, 4
    la $a0, msg_error_col_1
    syscall
#        continue;
    j first_col
#    }

else_first_col:

second_col:
#    std::cout << "Ingrese el índice de la segunda columna: ";
    li $v0, 4
    la $a0, ingresa_col_2
    syscall
#    std::cin >> col2;
    li $v0, 5
    syscall
    move $t2, $v0

if_second_col:
#    if (col2 < 0 || col2 >= numCol || col1 == col2) {
    bltz $t2, error_second_col
    bge $t2, $s2, error_second_col
    beq $t1, $t2, error_second_col
    j else_second_col
error_second_col:
#        std::cout << "Error: índice de columna inválido o columnas iguales\n";
    li $v0, 4
    la $a0, msg_error_col_2
    syscall
#        continue;
    j second_col
#    }

else_second_col:
    li $s3, 0
for_intercambio:
#    for (int f = 0; f < numFil; f++) {
    bge $s3, $s1, for_intercambio_end

calculo_de_dir_2:

#        // Dirección lineal estilo MIPS: pos = (f * numCol + colX) * 4
#        float val1 = datos[f][col1];  // acceso a (f * numCol + col1)
      mul $t3, $s3, $s2
      add $t3, $t3, $t1
      mul $t3, $t3, sizeF
      add $t3, $s6, $t3
      l.s $f4, 0($t3)
#        float val2 = datos[f][col2];  // acceso a (f * numCol + col2)
      mul $t4, $s3, $s2
      add $t4, $t4, $t2
      mul $t4, $t4, sizeF
      add $t4, $s6, $t4
      l.s $f6, 0($t4)

if_values:
#        if (val1 > val2) {
      c.le.s $f4, $f6
      bc1t else_if_values

intercambiando:
#            std::cout << "Intercambio fila " << f << ": " << val1 << " con " << val2 << "\n";
    li $v0, 4
    la $a0, inter_1
    syscall

    li $v0, 1
    move $a0, $s3
    syscall

    li $v0, 4
    la $a0, inter_2
    syscall

    li $v0, 2
    mov.s $f12, $f4
    syscall

    li $v0, 4
    la $a0, inter_3
    syscall

    li $v0, 2
    mov.s $f12, $f6
    syscall

    li $v0, 4
    la $a0, inter_4
    syscall
#            // Intercambio sin swap ni temp usando suma/resta
    add.s $f20, $f4, $f6
#            datos[f][col1] = val1 + val2;
    s.s $f20, 0($t3)
#            datos[f][col2] = datos[f][col1] - val2;
    sub.s $f22, $f20, $f6
    s.s $f22, 0($t4)
#            datos[f][col1] = datos[f][col1] - datos[f][col2];
    sub.s $f24, $f20, $f22
    s.s $f24, 0($t3)
else_if_values:
#        } else {
#            std::cout << "No se intercambia en fila " << f << "\n";
    li $v0, 4
    la $a0, no_inter_1
    syscall

    li $v0, 1
    move $a0, $s3
    syscall

    li $v0, 4
    la $a0, no_inter_2
    syscall
#        }
    addi $s3, $s3, 1
    j for_intercambio
#    }
for_intercambio_end:

while_true_end_2:
#    std::cout << "Termina opcion 16\n";
    li $v0, 4
    la $a0, termina_16
    syscall
#    break;
    j while_true
#}

op_17:
    # TABLA DE REGISTROS:
    # $S5 -> indCol
    # $f22 -> pos
    # $f20 -> maxval
#// Opción 16: Buscar el máximo en una columna e imprimirlo, indicando en qué fila está
    bne $s0, opc_17, op_18
#int indCol;
    li $s5, 0
while_true_3:
#while (true) {
#    std::cout << "Ingrese el índice de la columna: ";
    li $v0, 4
    la $a0, ing_col
    syscall
#    std::cin >> indCol;
    li $v0, 5
    syscall
    move $s5, $v0
if_ind_col:
#    if (indCol < 0 || indCol >= numCol) {
    bltz $s5, error_if_ind_col
    bgt $s5, $s2, error_if_ind_col
    j else_ind_col
error_if_ind_col:
#        std::cout << "Error: índice de columna inválido\n";
    li $v0, 4
    la $a0, invalid_col
    syscall
#        continue;
    j while_true_3
#    }
    li $t8, 0
else_ind_col:
      mul $t4, $t8, $s2
      add $t4, $t4, $s5
      mul $t4, $t4, sizeF           # *4 (tamaño float)
      add $t4, $t4, $s6             # dirección absoluta
    l.s $f20, 0($t4)
#    float maxVal = datos[0][indCol];  // Suponemos que el máximo inicial está en la primera fila
#    int filaMax = 0;
    li $s7, 0
    li $s3, 1
for_max_elem:
#    for (int f = 1; f < numFil; f++) {
    bge $s3, $s1, for_end_max_elem
#        // pos = f * numCol + indCol   --> cálculo de dirección estilo MIPS
      mul $t3, $s3, $s2
      add $t3, $t3, $s5
      mul $t3, $t3, sizeF           # *4 (tamaño float)
      add $t3, $t3, $s6             # dirección absoluta
      l.s $f22, 0($t3)

if_for_max_elem:
#        if (datos[f][indCol] > maxVal) {
      c.le.s $f22, $f20
      bc1t skip_update_3
update:
#            maxVal = datos[f][indCol];
    mov.s $f20, $f22
#            filaMax = f;
    move $s7, $s3
#        }
skip_update_3:
    addi $s3, $s3, 1
    j for_max_elem
#    }
for_end_max_elem:
#    // Imprimir el máximo encontrado
#    std::cout << "Máximo en columna " << indCol << ": " << maxVal << " en fila " << filaMax << "\n";
    li $v0, 4
    la $a0, fila_max_1
    syscall

    li $v0, 1
    move $a0, $s5
    syscall

    li $v0, 4
    la $a0, fila_max_2
    syscall

    li $v0, 2
    mov.s $f12, $f20
    syscall

    li $v0, 4
    la $a0, fila_max_3
    syscall

    li $v0, 1
    move $a0, $s7
    syscall

    li $v0, 4
    la $a0, fila_max_4
    syscall

    li $t5, 0
for_print_not_max:
#    // Imprimir que en las demás filas no está el máximo
#    for (int f = 0; f < numFil; f++) {
    bge $t5, $s1, for_print_not_max_end

#        if (f != filaMax) {
    bne $t5, $s7, msg_fil
    j for_print_not_max_end

msg_fil:
#            std::cout << "Fila " << f << ": no contiene el máximo\n";
    li $v0, 4
    la $a0, fila_not_max_1
    syscall

    li $v0, 1
    move $a0, $t5
    syscall

    li $v0, 4
    la $a0, fila_not_max_2
    syscall
#        }
#    }
    addi $t5, $t5, 1
    j for_print_not_max
for_print_not_max_end:


while_true_3_end:
#    std::cout << "Termina opcion 16\n";
    li $v0, 4
    la $a0, termina_17
    syscall
#    break;
    j while_true
#}

op_18:
# // Opción 18:
    # TABLA DE REGISTROS:
    # $s3 -> indCol
    # $s5 -> f
    # $s7 -> dir de memoria
    # $f20 -> valor
    # $f22 -> floatVNuebo
    # $f4 -> cte{0.0}
    # $f6 -> cte{2.0}
    # $f18 -> cte{1.0}
# // Solicitado el índice de una columna, duplica los elementos positivos
# // y resta 1 a los negativos.
    # $s0 -> opc # Opción ingresada por el usuario
    bne $s0, opc_18, op_19
pide_col_6:
    # int indCol;
        li $s3, 0
    # std::cout << "Indice de columna: ";
        li $v0, 4
        la $a0, pide_indcol
        syscall
    # std::cin >> indCol;
        li $v0, 5
        syscall
        move $s3, $v0
if_pide_col_6:
    # if ((indCol < 0) || (indCol >= numCol)) {
        bltz $s3, error_col_6
        bge $s3, $s2, error_col_6
        j else_pide_col_6
error_col_6:
        # std::cout << "Error: dimension incorrecta. Numero de columna incorrecto\n";
        li $v0, 4
        la $a0, error_pidecol_6
        syscall
        # continue; // volvemos al inicio del while
        j pide_col_6
 #   }
else_pide_col_6:
    li $s5, 0
for_col_6:
    # for (int f = 0; f < numFil; f++) {
    bge $s5, $s1, for_col_6_end
    li $s7, 0
        # float valor = datos[f][indCol];
            # dirección: pos = (f * numCol + indCol) * 4
      mul $s7, $s5, $s2             # f * numCol
      add $s7, $s7, $s3             # + c
      mul $s7, $s7, sizeF           # *4 (tamaño float)
      add $s7, $s7, $s6             # dirección absoluta
      l.s $f20, 0($s7)
        # std::cout << "En fila " << f;
      li $v0, 4
      la $a0, en_fila
      syscall
      li $v0, 1
      move $a0, $s5
      syscall
if_cond_for_col_6:
      li.s $f4, 0.0
      li.s $f6, 2.0
      li.s $f18, 1.0
        # if (valor > 0.0f) {
      c.le.s $f20, $f4
      bc1t else_cond_for_col_6
            # float nuevoV = valor * 2.0f;
      mul.s $f22, $f20, $f6
            # std::cout << " es positivo " << nuevoV;
      li $v0, 4
      la $a0, en_fila_2
      syscall
      li $v0, 2
      mov.s $f12, $f22
      syscall
            # datos[f][indCol] = nuevoV;
      s.s $f22, 0($s7)
      j end_if
else_cond_for_col_6:
 #       } else {
            # float nuevoV = valor - 1.0f;
        sub.s $f22, $f20, $f18
            # std::cout << " es negativo " << nuevoV;
        li $v0, 4
        la $a0, en_fila_3
        syscall
        li $v0, 2
        mov.s $f12, $f22
        syscall
            # datos[f][indCol] = nuevoV;
        s.s $f22, 0($s7)
#        }
end_if:
        # std::cout << '\n';
    li $v0, 11
    li $a0, 10
    syscall

    addi $s5, $s5, 1
    j for_col_6
#    }
for_col_6_end:
    # std::cout << "Termina opcion 18\n";
    li $v0, 4
    la $a0, termina_18
    syscall
    # continue; // volvemos al menú
    j while_true
#}

op_19:
	bne $s0, opc_19, op_incorrecta             # ($s0 != 7) -> op_7
#        std::cout << "Indice de columna: ";
# Pedimos el indice de la columna
	li $v0, 4			# cargamos print_string
	la $a0, pideCol			# cargamos dir pidecol
	syscall				# llamada al sistema
#      int indCol;
	li $s3, 0			# $s3 = 0
#      std::cin >> indCol;
	li $v0, 5			# cargamos read_int
	syscall				# llamada al sistema
	move $s3, $v0			# $s3 = $v0
if_pide_col:
# SI no se cumplen las condiciones sale a fuera
#      if ((indCol < 0) || (indCol >= numCol)) {
	bltz $s3, error_pide_col
	bge $s3, $s2, error_pide_col
	j else_pide_col
error_pide_col:
# Salta mensaje de error
#        std::cout <<
#          "Error: dimension incorrecta.  Numero de columna incorrecto\n";
	li $v0, 4
	la $a0, errorpideCol
	syscall
#        continue;  // volvemos al principio del bucle
	j while_true
#      }
else_pide_col:
#      float suma = 0;
# Inicializamos la suma
	li.s $f20, 0.0
# Inicializamos la f
	li $s5, 0
for_principal:
#      for(int f = 0; f < numFil; f++) {
	bge $s5, $s1, for_principal_end

# Inicializamos $s7
	li $s7, 0
# Cargamos la dir
#        suma += datos[f * numCol + indCol];
      mul $s7, $s5, $s2
      add $s7, $s7, $s3
      mul $s7, $s7, sizeF
      add $s7, $s7, $s6
      l.s $f22, 0($s7)

# ALmacenamos la suma
      add.s $f20, $f20, $f22
# Aumentamos el contador
      addi $s5, $s5, 1
      j for_principal
#      }
for_principal_end:
if_cond:
# Cargamos $f4 = 0
#      if (suma > 0)
	li.s $f4, 0.0
# Si no se cumple salta a fuera de if y no se intercambian
	c.le.s $f20, $f4
	bc1t skip_swap
else_if_cond:
# Almacenamos mitadcol en $t5
#        int mitad_col = numFil / 2;
	div $t5, $s1, 2
	li $s5, 0
for_second:
# Hacemos el bucle
#        for(int f = 0; f < mitad_col; f++) {
	bge $s5, $t5, for_second_end
#            float aux = datos[f * numCol + indCol];
# Calculamos la dir
        mul $s7, $s2, $s5
        add $s7, $s7, $s3
        mul $s7, $s7, sizeF
        add $s7, $s7, $s6
        l.s $f26, 0($s7)
# Calculamos la otra dirección
#            float aux2 = datos[(numFil - f - 1) * numCol + indCol];
  	sub $t6, $s1, $s5
  	sub $t6, $t6, 1
  	mul $t7, $s2, $t6
      add $t7, $t7, $s3
      mul $t7, $t7, sizeF
      add $t7, $t7, $s6
      l.s $f28, 0($t7)

# Imprimimos aux1
#            std::cout << aux << ' ';
	li $v0, 2
	mov.s $f12, $f26
	syscall

      li $v0, 11
	li $a0, 32
	syscall
# Imprimimos aux2
#            std::cout << aux2 << '\n';
	li $v0, 2
	mov.s $f12, $f28
	syscall

	li $v0, 11
	li $a0, 10
	syscall
# Intecambiamos los elemenos
#            datos[f * numCol + indCol] = aux2;
	s.s $f26, 0($t7)
#            datos[(numFil - f - 1) * numCol + indCol] = aux;
	s.s $f28, 0($s7)
	addi $s5, $s5, 1
	j for_second
for_second_end:
#        }
#      }
if_cond_end:
skip_swap:
#      continue;
	j while_true
#    }
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


