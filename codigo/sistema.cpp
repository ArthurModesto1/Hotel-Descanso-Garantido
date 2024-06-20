#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Cliente {
   int codigo;
   string nome;
   string endereco;
   string telefone;
};

class Funcionario {
   int codigo;
   float salario;
   string nome;
   string cargo;
   string telefone;
};

class Estadia {
   int codigo_estadia;
   int qtd_diaria;
   int codigo_cliente;
   int nmr_quarto;
   string data_entrada;
   string data_saida;
};

class Quarto {
   int qtd_hosp;
   int nmr_quarto;
   float vlr_diaria;
   char status[11];
};

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
    cout << "BEM-VINDO AO SISTEMA DA DESCANSO GARANTIDO!" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Escolha a acao que deseja realizar:" << endl;
    cout << "1. Cadastrar Cliente" << endl;
    cout << "2. Cadastrar Funcionario" << endl;
    cout << "3. Cadastrar Estadia" << endl;
    cout << "4. Finalizar Estadia" << endl;
    cout << "5. Pesquisa de Clientes ou Funcionarios" << endl;
    cout << "6. Mostrar Estadia" << endl;
    cout << "7. SAIR" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Escolha sua opcao: " << endl;
}

int main(){ 

   int opcao;

   do{
    menu();
    cin >> opcao;
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
        cout << "Obrigado por usar o sistema!" << endl;
        break;
      
    default:
        cout << "Opcao invalida!" << endl;
        break;
      }
   }while(opcao != 7);   	
   
   
   return 0;
}