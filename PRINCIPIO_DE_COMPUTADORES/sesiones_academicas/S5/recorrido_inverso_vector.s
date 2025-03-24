#define NumElem 11
NumElem = 11
tamW = 4

        .data
        # int vec[NumElem] = {3, 9, 5, 7, -4, 14, 8, -1, 11, 2};
vec: .word 3, 9, 5, 7, -4, 14, 8, -1, 11, 2
        .text
        # Relación variables a registros
        # suma -> $s0
        # i -> $s1
        # val -> $t2
# ------------------------------------------------------
main: 
# include <iostream>
# include <vector>

#int main() {
        move $s0, $zero
#  std::vector<int> v{3, 9, 5, 7, -4, 14, 8, -1, 11, 2}; 
for: 
        li $s1, (NumElem - 1)
        la $t0, vec
#  for(int i = (v.size() - 1); i >= 0; i--) {
        bltz $s1, for_fin
        mul $t1, $s1, tamW
        add $t1, $t0, $t1
        lw $t2, 0($t1)

        add $s0, $s0, $t2
#       suma += vec[i]
#  }
        addi $s1, $s1, -1
        j for

for_fin: 
#  return 0; 
        li $v0, 10
        syscall
#}