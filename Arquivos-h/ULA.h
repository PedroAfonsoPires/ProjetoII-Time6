#ifndef ULA_H
#define ULA_H
#define BITS 17

#include "decode.h"
#include "memorias.h"
#include "parser.h"
#include "bibliotecas.h"
#include "bin_to_decimal.h"
#include "decimal_to_bin.h"


int ULA(type_instruc **instrucoesDecodificadas, int *contador, Memorias **md, int **regs);
void AND(char Source[], char Target[], char *Dest);
void OR(char Source[], char Target[], char *Dest);

#endif

