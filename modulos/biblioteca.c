#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

void retira_pontos(char *cnpj){

  // Retirando os ./-
  char *pt;
  pt = strtok(cnpj,".-/");
  char cnpj_novo[25] = {""};
  while(pt){
      strcat(cnpj_novo, pt);
      pt = strtok(NULL, ".-/");
  }
  
  strcpy(cnpj,cnpj_novo);
  
}

int verifica_letra(char *cnpj){
  int tamanho = strlen(cnpj);
  for(int i = 0; i < tamanho; i++){
    if((cnpj[i] >= 'A' && cnpj[i] <= 'Z') || (cnpj[i] >= 'a' && cnpj[i] <= 'z')){
      return 1;
    }
  }
  return 0;
}

int valida_cnpj(char *cnpj){

  // Função criada por Anderson Azevedo da Silva
  // Instagram: @anderson.azvd
  // GitHub: @andersonazeved

  // Retira pontos do CNPJ
  retira_pontos(cnpj);

  // Verifica se tem letras
  int validar = verifica_letra(cnpj);
  if(validar == 1){
    return 0;
  }

  // Verifica o tamanho e valida
  int tamanho = strlen(cnpj);
  if(tamanho != 14){
    return 0;
  }

  // Verifica se os números são todos iguais
  int cont = 0;
  for(int i = 0; i < 14; i++){
    if(cnpj[0] == cnpj[i]){
      cont++;
    }
  }
  if(cont == 14){
    return 0;
  }

  // Converte para int
  int vetor_cnpj[14];
  for(int i = 0; i < tamanho; i++){
    vetor_cnpj[i] = cnpj[i] - 48;
  }

  // Desconbrindo o DV1
  int mult[12] = {5,4,3,2,9,8,7,6,5,4,3,2};
  int soma = 0;
  for(int i = 0; i < 12; i++){
    soma+=(mult[i]*vetor_cnpj[i]);
  }
  int d1 = vetor_cnpj[12];
  int resto = soma%11;
  int dif = 11 - resto;
  if((resto == 0 || resto == 1) && d1 != 0){
    return 0;
  }else if(resto >= 2 && resto <= 10){
    if(dif != d1){
      return 0;
    }
  }

  // Desconbrindo o DV2
  int mult_2[13] = {6,5,4,3,2,9,8,7,6,5,4,3,2};
  soma = 0;
  for(int i = 0; i < 13; i++){
    soma+=(mult_2[i]*vetor_cnpj[i]);
  }
  int d2 = vetor_cnpj[13];
  resto = soma%11;
  dif = 11 - resto;
  if((resto == 0 || resto == 1) && d2 != 0){
    return 0;
  }else if(resto >= 2 && resto <= 10){
    if(dif != d2){
      return 0;
    }
  }


  return 1;
}

int valida_email(char *email){
    for(int i = 0; i < 50; i++){
        if(email[i] == '@'){
            return 1;
        }
    }
    return 0;
}   

// int valida_cpf(char *cpf){



  
// }


void retira_pontoscpf(char *cpf){

  // Retirando os ./-
  char *pt;
  pt = strtok(cpf,".-/");
  char cpf_novo[25] = {""};
  while(pt){
      strcat(cpf_novo, pt);
      pt = strtok(NULL, ".-/");
  }
  
  strcpy(cpf,cpf_novo);
  
}
int verifica_letracpf(char *cpf){
  int tamanho = strlen(cpf);
  for(int i = 0; i < tamanho; i++){
    if((cpf[i] >= 'A' && cpf[i] <= 'Z') || (cpf[i] >= 'a' && cpf[i] <= 'z')){
      return 1;
    }
  }
  return 0;
}

int valida_cpf(char *cpf){
  // \\* FEITA POR ERICLEISON CAMILO ᕦ( ͡° ͜ʖ ͡°)ᕤ  *//
  int i;
  int len= strlen(cpf);
  int cpf_convertido[11];
  int soma =0;
  int d1;
  int d2;
  // Transforma em vetor int
  for (i = 0 ; i < len ; i++){
      cpf_convertido[i]= (cpf[i] -48);
  }
  // Verifica e valida o tamanho do cpf
  if (strlen(cpf) != 11){
      return 0;
  }
  // Cálculo para verificar e validar o Dígito verificador 1
  for (i = 0 ; i <= 8 ; i++){
      soma = soma+ (cpf_convertido[i]* (10-i));
  }
  d1 = 11 - (soma % 11) ;
  if (d1 == 10 || d1== 11){
      d1=0;
  }
  if(d1 != cpf_convertido[9]){
      return 0;
  }
  //Cálculo para verificar o dígito verificador 2
  soma = 0;
  for (i = 0 ;i <= 9 ;i++){
      soma= soma + (cpf_convertido[i]* (11-i));
  }
  d2 = 11- (soma %11);
  if (d2==10 || d2==11){
      d2=0;
  }
  if (d2 != cpf_convertido[10]){
      return 0;
      }
  return 1;
  }