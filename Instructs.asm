addi $0, $1, 000001
addi $0, $2, 010100
addi $0, $3, 000000
add $3, $3, $1
addi $1, $1, 000001
beq $1, $2, 000001
j 0000011
sw $0, 000000
or $4, $2, $1
and $5, $2, $3
sub $6, $2, $3
