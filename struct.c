#include <stdio.h>
#define TAM 2

struct inscricaos{
  char nome[30];
  char curso[30];
  int ano;
  float nota;
}

int main(void){
  int contador;
  struct incricao vestibular[TAM];
  for(contador =0; contador < TAM; contador++){
   printf("Informe o nome do candidato: \n");
   scanf("%s",&vestibular.nome[contador]);
   printf("Informe o curso desejado: \n");
   scanf("%s",&vestibular.curso[contador]);
   printf("Informe o ano atual (Exemplo 2022)\n: ");
   scanf("%d",&vestibular.ano[contador]);
   printf("Avaliacao obtida: \n");
   scanf("%f",&vestibular.nota[contador]);
  }
  for (i=TAM-1;i=contador;i++){
    printf("Aluno %s, Curso %s,Ano %d,Nota %f\n",vestibular.nome[i],vestibular.curso[i],vestibular.ano[i],vestibular.nota[i]);
  }
  return 0;
}