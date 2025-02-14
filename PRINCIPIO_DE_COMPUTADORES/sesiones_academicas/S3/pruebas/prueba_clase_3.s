# Lectura de una cadena
  .data
nombre: .space 100 # reserva en memoria de 100 bytes

main: 
  li $v0, 8        # Lectura de string
  la $a0, nombre   # Tenemos un huevo para teclear el string (máx 100 caracteres)
  li $a1, 100      # Límite del string
  syscall          # Llamada al sistema

