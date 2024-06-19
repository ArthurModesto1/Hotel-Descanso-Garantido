#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
   int codigo;
   char nome[100];
   char endereco[100];
   char telefone [11];
} Cliente;

typedef struct {
   int codigo;
   float salario;
   char nome[100];
   char cargo[100];
   char telefone [11];
} Funcionario;

typedef struct {
   int codigo_estadia;
   int qtd_diaria;
   int codigo_cliente;
   int nmr_quarto;
   char data_entrada[11];
   char data_saida[11];
} Estadia;

typedef struct {
   int qtd_hosp;
   int nmr_quarto;
   float vlr_diaria;
   char status[11];
} Quarto;

int cadastrar_cliente(){

}

int cadastrar_funcionario(){

}

int cadastrar_estadia(){

}

float finalizar_estadia(){

}

char pesquisa(){

}

char mostrar_estadia(){

}

int pontos_fidelidade(){

}

void menu(){
   printf("BEM-VINDO AO SISTEMA DA DESCANSO GARANTIDO!\n");
   printf("-------------------------------------------\n");
   printf("Escolha a acao que deseja realizar:\n");
   printf("1. Cadastrar Cliente\n");
   printf("2. Cadastrar Funcionario\n");
   printf("3. Cadastrar Estadia\n");
   printf("4. Finalizar Estadia\n");
   printf("5. Pesquisa de Clientes ou Funcionarios\n");
   printf("6. Mostrar Estadia\n");
   printf("7. SAIR\n");
   printf("-------------------------------------------\n");
   printf("Escolha sua opcao: ");
}

int main(){ 

   int opcao;

   do{
      menu();
      scanf("%d", &opcao);
      switch (opcao){
      case 1:
         cadastrar_cliente();
         break;
      case 2:
         cadastrar_funcionario();
         break;
      case 3:
         cadastrar_estadia();
         break;
      case 4:
         finalizar_estadia();
         break;
      case 5:
         pesquisa();
         break;
      case 6:
         mostrar_estadia();
         break;
      case 7:
         printf("Obrigado por usar o sistema!\n");
         break;
      
      default:
         printf("Opcao invalida!");
         break;
      }
   }while(opcao != 7);   	
   
   
   return 0;
}