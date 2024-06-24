#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <ctime>
#include <vector>
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

        if(!t.empty() && t.length() <= 11){
            setTelefone(t);
        }

        FILE *arquivo;
        arquivo = fopen("arquivos/Clientes.txt", "aw");

        if(arquivo == NULL){
            cout << "Erro ao abrir o arquivo!";
        }

        fprintf(arquivo, "Codigo: %d - Nome: %s - Endereco: %s - Telefone: %s\n", getCodigo(), getNome(), getEndereco(), getTelefone());

        fclose(arquivo);
    }

    void exibirClientes(){
        cout <<"Codigo: " << getCodigo() << endl;
        cout << "Nome: " << getNome() << endl;
        cout << "Endereco: " << getEndereco() << endl;
        cout << "Telefone: " << getTelefone() << endl;
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

        FILE *arquivo;
        arquivo = fopen("arquivos/Funcionarios.txt", "aw");

        if(arquivo == NULL){
            cout << "Erro ao abrir o arquivo!";
        }

        fprintf(arquivo, "Codigo: %d - Nome: %s - Salario: %.2f - Cargo: %s - Telefone: %s\n", getCodigo(), getNome(), getSalario(), getCargo(), getTelefone());

        fclose(arquivo);
    }

    void exibirFuncionarios(){
        cout << "Codigo: " << getCodigo() << endl;
        cout << "Salario: " << getSalario() << endl;
        cout << "Nome: " << getNome() << endl;
        cout << "Cargo: " << getCargo() << endl;
        cout << "Telefone: " << getTelefone() << endl;
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
    tm data_entrada;
    tm data_saida;
public:
    Estadia(int ce, int qd, int cc, int nq, tm de, tm ds){
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

        if(!de.tm_year == 0 && !de.tm_mon == 0 && !de.tm_mday == 0){
            setDataEntrada(de);
        }

        if(!ds.tm_year == 0 && !ds.tm_mon == 0 && !ds.tm_mday == 0){
            setDataSaida(ds);
        }

        FILE *arquivo;
        arquivo = fopen("arquivos/Estadias.txt", "aw");

        if(arquivo == NULL){
            cout << "Erro ao abrir o arquivo!";
        }

        fprintf(arquivo, "Codigo Estadia: %d - Quantidade de Diarias: %d - Codigo Cliente: %d - Data Entrada: %s - Data de saida: %s\n", getCodEstadia(), getQtdDiaria(), getCodCliente(), getDataEntrada(), getDataSaida());

        fclose(arquivo);
    }

    void exibirEstadias(){
        cout << "Quantidade de Diarias: " << getQtdDiaria() << endl;
        cout << "Codigo Cliente: " << getCodCliente() << endl;
        cout << "Numero do Quarto: " << getNmrQuarto() << endl;
        cout << "Data de entrada: " << getDataEntrada() << endl;
        cout << "Data de saida: " << getDataSaida() << endl;
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

    void setDataEntrada(tm de){
        this->data_entrada = de;
    }

    string getDataEntrada(){
        string data_stringada;

        data_stringada+=to_string(data_entrada.tm_wday);
        data_stringada+='/';
        data_stringada+=to_string(data_entrada.tm_mon+1);
        data_stringada+='/';
        data_stringada+=to_string(data_entrada.tm_year+1900);


        return data_stringada;
    }

    void setDataSaida(tm ds){
        this->data_saida = ds;
    }

    tm getDataSaida(){
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

        FILE *arquivo;
        arquivo = fopen("arquivos/Funcionarios.txt", "aw");

        if(arquivo == NULL){
            cout << "Erro ao abrir o arquivo!";
        }

        fprintf(arquivo, "Quantidade hospede: %d - Numero do Quarto: %d - Valor Diaria: %.2f - Status: %s\n", getQtdHospede(), getNmrQuarto(), getValorDiaria(), getStatus());

        fclose(arquivo);
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

string cadastrar_cliente(vector<Cliente*>& clientes, int *codigo){
    string nome;
    string endereco;
    string telefone;
    
    cout << "Digite o nome do cliente: ";
    cin >> nome;
    cout << "Digite o endereco do cliente: ";
    cin >> endereco;
    cout << "Digite o telefone do cliente: ";
    cin >> telefone;

    Cliente* cliente = new Cliente(*codigo, nome, endereco, telefone);
    clientes.push_back(cliente);

    *codigo++;
    return "Cliente cadastrado com sucesso!";
}

string cadastrar_funcionario(vector<Funcionario*>& funcionarios, int *codigo){
    float salario;
    string nome, cargo, telefone;

    cout << "Digite o nome do funcionario: ";
    cin >> nome;
    cout << "Digite o salario do funcionario: ";
    cin >> salario;
    cout << "Digite o cargo do funcionario: ";
    cin >> cargo;
    cout << "Digite o telefone do funcionario: ";
    cin >> telefone;

    Funcionario* funcionario =  new Funcionario(*codigo, salario, nome, cargo, telefone);
    funcionarios.push_back(funcionario);

    *codigo++;
    return "Funcionário cadastrado com sucesso!";

}

string cadastrar_quarto(vector<Quarto*>& quartos){
    int qtd_hosp;
    int nmr_quarto;
    float vlr_diaria;
    string status;

    cout << "Digite a quantidade de hospede do quarto: ";
    cin >> qtd_hosp;
    cout << "Digite o numero do quarto: ";
    cin >> nmr_quarto;
    cout << "Digite o valor da diaria: ";
    cin >> vlr_diaria;
    cout << "Digite o status do quarto (Ocuapado ou desocupado): ";
    cin >> status;

    Quarto* quarto = new Quarto(qtd_hosp, nmr_quarto, vlr_diaria, status);
    quartos.push_back(quarto);

    return "Quarto cadastrado com sucesso!";
}

string cadastrar_estadia(vector<Estadia*>& estadias, vector<Quarto*>& quartos, vector<Cliente*>& clientes, int *codigo_estadia) {
    int qtd_diaria = 0;
    int codigo_cliente;
    int nmr_quarto;
    tm data_entrada;
    tm data_saida;

    cout << "Digite o codigo do cliente que deseja fazer estadia: ";
    cin >> codigo_cliente;

    cout << "Digite o numero do quarto que deseja cadastrar: ";
    cin >> nmr_quarto;

    bool existeCliente = false;
    bool existeQuarto = false;

    for (const auto& cliente : clientes) {
        if (cliente->getCodigo() == codigo_cliente) {
            existeCliente = true;
            break;
        }
    }

    for (const auto& quarto : quartos) {
        if (quarto->getNmrQuarto() == nmr_quarto) {
            existeQuarto = true;
            break;
        }
    }

    if (!existeCliente) {
        return "Cliente nao encontrado, eh necessario que se adastre o cliente antes de cadastrar a estadia.";
    }

    if (!existeQuarto) {
        return "Quarto nao encontrado, eh necessario que se cadastre o quarto antes de cadastrar a estadia.";
    }

    cout << "Digite a data de entrada para estadia no formato: dd/mm/aaaa): ";
    cin >> data_entrada;
    cout << "Digite a data de saida da estadia estadia no formato: dd/mm/aaaa): ";
    cin >> data_saida;

      

    Estadia* estadia = new Estadia(*codigo_estadia, qtd_diaria, codigo_cliente, nmr_quarto, data_entrada, data_saida);
    estadias.push_back(estadia);

    *codigo_estadia++; 
    return "Estadia cadastrada com sucesso!";
}


string finalizar_estadia(){

}

string pesquisa(vector<Cliente*>& clientes, vector<Funcionario*>& funcionarios){
    int opcao;

    do{
        cout << "Quem voce deseja pesquisar?" << endl;
        cout << "1.Cliente" << endl;
        cout << "2.Funcionario" << endl;
        cout << "3.Finalizar" << endl;
        cin >> opcao;

        switch (opcao){
            case 1:
                cout << "Deseja digitar o codigo ou o nome do cliente: " << endl;
                cout << "1.Codigo" << endl;
                cout << "2.Nome" << endl;
                int opcao2;
                if(opcao == 1){
                    cout << "Digite o codigo do cliente: " << endl;
                    int cod;
                    cin >> cod;
                    for(const auto& cliente : clientes){
                        if(cliente->getCodigo() == cod){
                            cliente->exibirClientes();
                            break;
                        }
                    }
                }
                else if(opcao == 2){
                    string name;
                    cout << "Digite o nome do cliente: " << endl;
                    cin >> name;
                    for(const auto& cliente : clientes){
                        if(cliente->getNome() == name){
                            cliente->exibirClientes();
                            break;
                        }
                    }
                }
                break;
            
            case 2:
                cout << "Deseja digitar o codigo ou o nome do funcionario: " << endl;
                cout << "1.Codigo" << endl;
                cout << "2.Nome" << endl;
                int opcao2;
                if(opcao == 1){
                    cout << "Digite o codigo do funcionario: " << endl;
                    int cod;
                    cin >> cod;
                    for(const auto& funcionario : funcionarios){
                        if(funcionario->getCodigo() == cod){
                            funcionario->exibirFuncionarios();
                            break;
                        }
                    }
                }
                else if(opcao == 2){
                    string name;
                    cout << "Digite o nome do funcionario: " << endl;
                    cin >> name;
                    for(const auto& funcionario : funcionarios){
                        if(funcionario->getNome() == name){
                            funcionario->exibirFuncionarios();
                            break;
                        }
                    }
                }
                break;
            
            case 3: 
                return "Pesquisa finalizada!\n";
                break;
            default:
                cout << "Erro" << endl;
                break;
        }
        return "A pesquisa foi encerrada.\n";
    }while(opcao != 3);
}

string mostrar_estadia(vector<Cliente*> clientes, vector<Estadia*> estadias){
    
}

string pontos_fidelidade(){

}

void menu(){
    cout << "BEM-VINDO AO SISTEMA DA DESCANSO GARANTIDO!" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Escolha a acao que deseja realizar:" << endl;
    cout << "1. Cadastrar Cliente" << endl;
    cout << "2. Cadastrar Funcionario" << endl;
    cout << "3. Cadastrar Quarto" << endl;
    cout << "4. Cadastrar Estadia" << endl;
    cout << "5. Finalizar Estadia" << endl;
    cout << "6. Pesquisa de Clientes ou Funcionarios" << endl;
    cout << "7. Mostrar Estadia" << endl;
    cout << "8. SAIR" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Escolha sua opcao: " << endl;
}

int main(){ 
    vector<Cliente*> clientes;
    vector<Funcionario*> funcionarios;
    vector<Estadia*> estadias;
    vector<Quarto*> quartos;

    int opcao;
    int cod = 1;
    int cod_estadia = 1;


    do{
    menu();
        cin >> opcao;
        switch (opcao){
        case 1:
            cadastrar_cliente(clientes, &cod);
            break;
        case 2:
            cadastrar_funcionario(funcionarios, &cod);
            break;
        case 3:
            cadastrar_quarto(quartos);
            break;
        case 4:
            cadastrar_estadia(estadias, quartos, clientes, &cod_estadia);
            break;
        case 5:
            finalizar_estadia();
            break;
        case 6:
            pesquisa(clientes, funcionarios);
            break;
        case 7:
            mostrar_estadia(clientes, estadias);
            break;
        case 8:
            cout << "Obrigado por usar o sistema!" << endl;
            break;
        
        default:
            cout << "Opcao invalida!" << endl;
            break;
        }
    }while(opcao != 8);   	
    
   
    return 0;
}