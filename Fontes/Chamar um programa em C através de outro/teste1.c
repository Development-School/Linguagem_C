/*
	www.terminaldeinformacao.com
*/

#include <stdio.h>
#include "teste2.c"
 
int main(){
    //Chamando a fun��o para pegar o valor
    int aux = teste2();
 
    //Demonstrando valor lido e esperando usu�rio apertar o -Enter-
    printf("\n-->%d", aux);
    getch();
 
    //Finalizando a rotina
    return 0;
}