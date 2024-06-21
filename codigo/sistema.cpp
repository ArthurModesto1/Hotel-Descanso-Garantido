#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <ctime>
using namespace std;

class Cliente {
private:
    int codigo;
    string nome;
    string endereco;
    string telefone;

public: 
    Cliente (int c, string n, string e, string t){
        if(c > 0){
            setCodigo(c);
        }
        
        if(!n.empty()){
            setNome(n);
        }

        if(!e.empty()){
            setEndereco(e);
        }

        if(!t.empty() && t.length() == 11){
            setTelefone(t);
        }
    }

    void setCodigo(int cod){
        this->codigo = cod;
    }

    int getCodigo(){
        return codigo;
    }

    void setNome(string name){
        this->nome = name;
    }

    string getNome(){
        return nome;
    }

    void setEndereco(string end){
        this->endereco = end;
    }

    string getEndereco(){
        return endereco;
    }

    void setTelefone(string tel){
        this->telefone = tel;
    }

    string getTelefone(){
        return telefone;
    }
    
};

class Funcionario {
private:
    int codigo;
    float salario;
    string nome;
    string cargo;
    string telefone;
public:
    Funcionario(int co, float f, string n, string c, string t){
        if(co > 0){
            setCodigo(co);
        }

        if(f > -1){
            setSalario(f);
        }
        
        if(!n.empty()){
            setNome(n);
        }

        if(!c.empty()){
            setCargo(c);
        }

        if(!t.empty() && t.length() == 11){
            setTelefone(t);
        }
    }

    void setCodigo(int cod){
        this->codigo = cod;
    }

    int getCodigo(){
        return codigo;
    }

    void setSalario(float money){
        this->salario = money;
    }

    float getSalario(){
        return salario;
    }

    void setNome(string nombre){
        this->nome = nombre;
    }

    string getNome(){
        return nome;
    }

    void setCargo(string c){
        this->cargo = c;
    }

    string getCargo(){
        return cargo;
    }

    void setTelefone(string tel){
        this->telefone = tel;
    }

    string getTelefone(){
        return telefone;
    }
};

class Estadia {
private:
    int codigo_estadia;
    int qtd_diaria;
    int codigo_cliente;
    int nmr_quarto;
    string data_entrada;
    string data_saida;
public:
    Estadia(int ce, int qd, int cc, int nq, string de, string ds){
        if(ce > 0){
            setCodEstadia(ce);
        }

        if(qd > 0){
            setQtdDiaria(qd);
        }

        if(cc > 0){
            setCodCliente(cc);
        }

        if(nq > 0){
            setNmrQuarto(nq);
        }

        if(!de.empty() && de.length() == 10){
            setDataEntrada(de);
        }

        if(!ds.empty() && ds.length() == 10){
            setDataSaida(ds);
        }
    }

    void setCodEstadia(int ce){
        this->codigo_estadia = ce;
    }

    int getCodEstadia(){
        return codigo_estadia;
    }

    void setQtdDiaria(int qd){
        this->qtd_diaria = qd;
    }

    int getQtdDiaria(){
        return qtd_diaria;
    }

    void setCodCliente(int cc){
        this-> codigo_cliente = cc;
    }

    int getCodCliente(){
        return codigo_cliente;
    }

    void setNmrQuarto(int nq){
        this->nmr_quarto = nq;
    }

    int getNmrQuarto(){
        return nmr_quarto;
    }

    void setDataEntrada(string de){
        this->data_entrada = de;
    }

    string getDataEntrada(){
        return data_entrada;
    }

    void setDataSaida(string ds){
        this->data_saida = ds;
    }

    string getDataSaida(){
        return data_saida;
    }
};

class Quarto {
private:
    int qtd_hosp;
    int nmr_quarto;
    float vlr_diaria;
    string status;
public:
    Quarto(int qh, int nq, float vd, string stats){
        if(qh > 0){
            setQtdHospede(qh);
        }

        if(nq > 0){
            setNmrQuarto(nq);
        }

        if(vd > 0){
            setValorDiaria(vd);
        }

        if(stats.length() == 11 || stats.length() == 8){
            setStatus(stats);
        }
    }

    void setQtdHospede(int qh){
        this->qtd_hosp = qh;
    }

    int getQtdHospede(){
        return qtd_hosp;
    }

    void setNmrQuarto(int nq){
        this->nmr_quarto = nq;
    }

    int getNmrQuarto(){
        return nmr_quarto;
    }

    void setValorDiaria(float vd){
        this->vlr_diaria = vd;
    }

    float getValorDiaria(){
        return vlr_diaria;
    }

    void setStatus(string estatus){
        this->status = estatus;
    }

    string getStatus(){
        return status;
    }
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