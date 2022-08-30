///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///               	SIG - Beer: Assinatura de Cervejas 		                ///
///    Developed by @andersonazeved and @ericleisonn -- since Aug, 2022     ///
///////////////////////////////////////////////////////////////////////////////
///                                Semana 1                                 ///
///////////////////////////////////////////////////////////////////////////////


//Importacao de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "biblioteca.h" //Importacao da biblioteca criada, e feita entre ""

void tela_principal(void);
void tela_equipe(void);
void tela_sobre(void);

int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	tela_principal();
	tela_equipe();
	tela_sobre();
	
	return 0;
}

