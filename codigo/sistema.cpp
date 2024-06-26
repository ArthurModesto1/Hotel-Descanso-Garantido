#include <iostream>
#include <string.h>
#include <ctime>
#include <vector>
#include <fstream>
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
    
        ofstream arquivo("Clientes.bin", ios::app);

        if(!arquivo.is_open()){
            cout << "Erro ao abrir o arquivo!" << endl;
        }
        else{
            arquivo << "Codigo: " << getCodigo() << " - Nome: " << getNome() << " - Endereco: " << getEndereco() << " - Telefone: " << getTelefone() << endl;
            arquivo.close();
        }
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

        if(!t.empty() && t.length() <= 11){
            setTelefone(t);
        }

        ofstream arquivo("Funcionarios.bin", ios::app);

        if(!arquivo.is_open()){
            cout << "Erro ao abrir o arquivo!" << endl;
        }
        else{
            arquivo << "Codigo: " << getCodigo() << " - Salario: " << getSalario() << " - Nome: " << getNome() << " - Cargo: " << getCargo() << " - Telefone: " << getTelefone() << endl;
            arquivo.close();
        }
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
    string data_en;
    string data_sai;
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

        if(!de.empty()){
            setDataEntrada(de);
        }

        if(!ds.empty()){
            setDataSaida(ds);
        }

        ofstream arquivo("Estadias.bin", ios::app);

        if(!arquivo.is_open()){
            cout << "Erro ao abrir o arquivo!" << endl;
        }
        else{
            arquivo << "Codigo Estadia: " << getCodEstadia() << " - Quantidade de Diarias: " << getQtdDiaria() << " - Codigo do Cliente: " << getCodCliente() << " - Data de Entrada: " << getDataEntrada() << " - Data de Saida: " << getDataSaida() << endl;
            arquivo.close();
        }
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

    void setDataEntrada(string de){
        this->data_en = de;
    }

    string getDataEntrada(){
        string data_stringada;

        data_stringada+=to_string(data_entrada.tm_mday);
        data_stringada+='/';
        data_stringada+=to_string(data_entrada.tm_mon+1);
        data_stringada+='/';
        data_stringada+=to_string(data_entrada.tm_year+1900);

        return data_stringada;
    }

    void setDataSaida(string ds){
        this->data_sai = ds;
    }

    string getDataSaida(){
        string data_stringadadois;

        data_stringadadois+=to_string(data_saida.tm_mday);
        data_stringadadois+='/';
        data_stringadadois+=to_string(data_saida.tm_mon+1);
        data_stringadadois+='/';
        data_stringadadois+=to_string(data_saida.tm_year+1900);

        return data_stringadadois;
    }

    int calcular_diarias(){
        int nmr_diarias = (data_saida.tm_mday - data_entrada.tm_mday);
        return nmr_diarias;
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

        ofstream arquivo("Quartos.bin", ios::app);

        if(!arquivo.is_open()){
            cout << "Erro ao abrir o arquivo!" << endl;
        }
        else{
            arquivo << "Quantidade de Hospede: " << getQtdHospede() << " - Numero do Quarto: " << getNmrQuarto() << " - Valor Diaria: " << getValorDiaria() << " - Status: " << getStatus() << endl;
            arquivo.close();
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


string cadastrar_cliente(vector<Cliente*>& clientes, int *codigo){
    string nome;
    string endereco;
    string telefone;
    
    cout << "Digite o nome do cliente: ";
    cin >> nome;
    cin.ignore();
    cout << "Digite o endereco do cliente: ";
    cin >> endereco;
    cin.ignore();
    cout << "Digite o telefone do cliente: ";
    cin >> telefone;
    cin.ignore();

    Cliente* cliente = new Cliente(*codigo, nome, endereco, telefone);
    clientes.push_back(cliente);

    (*codigo)++;
    return "Cliente cadastrado com sucesso!\n";
}

string cadastrar_funcionario(vector<Funcionario*>& funcionarios, int *codigo){
    float salario;
    string nome, cargo, telefone;

    cout << "Digite o nome do funcionario: ";
    cin >> nome;
    cin.ignore();
    cout << "Digite o salario do funcionario: ";
    cin >> salario;
    cin.ignore();
    cout << "Digite o cargo do funcionario: ";
    cin >> cargo;
    cin.ignore();
    cout << "Digite o telefone do funcionario: ";
    cin >> telefone;
    cin.ignore();

    Funcionario* funcionario =  new Funcionario(*codigo, salario, nome, cargo, telefone);
    funcionarios.push_back(funcionario);

    (*codigo)++;
    return "Funcionário cadastrado com sucesso!\n";

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
    status = "desocupado";

    Quarto* quarto = new Quarto(qtd_hosp, nmr_quarto, vlr_diaria, status);
    quartos.push_back(quarto);

    return "Quarto cadastrado com sucesso!\n";
}

string cadastrar_estadia(vector<Estadia*>& estadias, vector<Quarto*>& quartos, vector<Cliente*>& clientes, int *codigo_estadia) {
    int qtd_diaria = 0;
    int codigo_cliente;
    int nmr_quarto;
    string data_entrada;
    string data_saida;

    cout << "Digite o codigo do cliente que deseja fazer estadia: ";
    cin >> codigo_cliente;

    cout << "Digite o numero do quarto que deseja cadastrar: ";
    cin >> nmr_quarto;

    bool existeCliente = false;
    bool existeQuarto = false;

    for (auto& cliente : clientes) {
        if (cliente->getCodigo() == codigo_cliente) {
            existeCliente = true;
            break;
        }
    }

    for (auto& quarto : quartos) {
        if (quarto->getNmrQuarto() == nmr_quarto && quarto->getStatus() == "desocupado") {
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
    
    Estadia* estadia;
    qtd_diaria = estadia->calcular_diarias();
    estadia = new Estadia(*codigo_estadia, qtd_diaria, codigo_cliente, nmr_quarto, data_entrada, data_saida);
    estadias.push_back(estadia);

    for (auto& quarto : quartos) {
        if (quarto->getNmrQuarto() == nmr_quarto) {
            quarto->setStatus("ocupado");
            break;
        }
    }

    (*codigo_estadia)++; 
    return "Estadia cadastrada com sucesso!\n";
}


string finalizar_estadia(vector<Estadia*>& estadias, vector<Quarto*> quartos){
    int cod_cliente, cod_estadia;
    cout << "Digite o codigo do cliente que deseja finalizar uma estadia: ";
    cin >> cod_cliente;
    cout << "Digite o codigo da estadia que sera finalizada: ";
    cin >> cod_estadia;
    

    for(auto& estadia:estadias){
        if(estadia-> getCodCliente() == cod_cliente && estadia ->getCodEstadia() == cod_estadia){
            int nmr_diarias = estadia->getQtdDiaria(), nmr_quarto = estadia->getNmrQuarto();
            float valot_total = 0, valor_diaria = 0;

            for(auto& quarto: quartos){
                if(quarto->getNmrQuarto() == nmr_quarto){
                    valor_diaria = quarto->getValorDiaria();
                    quarto->setStatus("desocupado");
                    break;
                }
            }

            valot_total = nmr_diarias * valor_diaria;

            cout << "O valor total eh de: " << valot_total << " reais" << endl;


            return "Estadia finalizada com sucesso!\n";
        }
    }

    return "Estadia nao encontrada para o cliente especificado.\n";

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
                cin >> opcao2;
                if(opcao2 == 1){
                    cout << "Digite o codigo do cliente: " << endl;
                    int cod;
                    cin >> cod;
                    for(auto& cliente : clientes){
                        if(cliente->getCodigo() == cod){
                            cliente->exibirClientes();
                            break;
                        }
                    }
                }
                else if(opcao2 == 2){
                    string name;
                    cout << "Digite o nome do cliente: " << endl;
                    cin >> name;
                    cin.ignore();
                    for(auto& cliente : clientes){
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
                int opcao3;
                cin >> opcao3;
                if(opcao3 == 1){
                    cout << "Digite o codigo do funcionario: " << endl;
                    int cod;
                    cin >> cod;
                    for(auto& funcionario : funcionarios){
                        if(funcionario->getCodigo() == cod){
                            funcionario->exibirFuncionarios();
                            break;
                        }
                    }
                }
                else if(opcao3 == 2){
                    string name;
                    cout << "Digite o nome do funcionario: " << endl;
                    cin >> name;
                    cin.ignore();
                    for(auto& funcionario : funcionarios){
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

string mostrar_estadia(vector<Estadia*> estadias){
    int cod_cliente;
    cout << "Digite o codigo do cliente que deseja consultar as estadias:";
    cin >> cod_cliente;
    bool temEstadia = false;

    for(auto& estadia: estadias){
        if(estadia->getCodCliente() == cod_cliente){
            estadia->exibirEstadias();
            temEstadia= true;
            break;
        }
    }

    if(!temEstadia){
        return "As estadias do cliente nao foram mostradas\n";
    }

    return "As estadias do cliente  foram mostradas\n";
}

string pontos_fidelidade(vector<Estadia*> estadias){
    int cod_cliente, pontos = 0;
    cout << "Digite o codigo do cliente que deseja calcular os pontos de fidelidade:";
    cin >> cod_cliente;

    for(auto& estadia: estadias){
        if(estadia->getCodCliente() == cod_cliente){
            pontos = 10 * estadia->getQtdDiaria();
            break;
        }
    }

    cout << "Os pontos sao: " << pontos << endl;

    return "Pontos calculados com sucesso!\n";
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
    cout << "8. Mostrar Pontos de Fidelidade" << endl;
    cout << "9. SAIR" << endl;
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
    int cod_func = 1;
    int cod_estadia = 1;


    do{
    menu();
        cin >> opcao;
        switch (opcao){
        case 1:
            cadastrar_cliente(clientes, &cod);
            break;
        case 2:
            cadastrar_funcionario(funcionarios, &cod_func);
            break;
        case 3:
            cadastrar_quarto(quartos);
            break;
        case 4:
            cadastrar_estadia(estadias, quartos, clientes, &cod_estadia);
            break;
        case 5:
            finalizar_estadia(estadias, quartos);
            break;
        case 6:
            pesquisa(clientes, funcionarios);
            break;
        case 7:
            mostrar_estadia(estadias);
            break;
        case 8:
            pontos_fidelidade(estadias);
            break;
        case 9:
            cout << "Obrigado por usar o sistema!" << endl;
            break;
        
        default:
            cout << "Opcao invalida!" << endl;
            break;
        }
        
    }while(opcao != 9);

    for (auto cliente : clientes) {
        delete cliente;
    }
    for (auto funcionario : funcionarios) {
        delete funcionario;
    }
    for (auto estadia : estadias) {
        delete estadia;
    }
    for (auto quarto : quartos) {
        delete quarto;
    }
     
    return 0;
}