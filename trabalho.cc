
// Esse trecho refere-se a inclusao de bibliotecas que utilizaremos em nosso codigo
#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
#include <ctime>
using namespace std;

// Classe Funcionario para armazenar e manipular informações dos funcionários
class Funcionario {
private:
    int codigo; // Código do funcionário
    float salario; // Salário do funcionário 
    string nome; // Nome do funcionário 
    string cargo; // Cargo do funcionário 
    string telefone; // Número do telefone do funcionário 

public:
    // Construtor da classe Funcionario
    Funcionario(int co, float f, string n, string c, string t) {
        // Verificação se o código é maior que zero 
        if (co > 0) {
            setCodigo(co);
        }
        
        // Verificação se o salário é maior ou igual a zero
        if (f > -1) {
            setSalario(f);
        }
        
        // Verificação se o nome não está vazio
        if (!n.empty()) {
            setNome(n);
        }

        // Verificação se o cargo não está vazio
        if (!c.empty()) {
            setCargo(c);
        }

        // Verificação se o telefone não está vazio e tem 11 caracteres
        if (!t.empty() && t.length() == 11) {
            setTelefone(t);
        }
    }

    // Método para definir o código do funcionário
    void setCodigo(int cod) {
        this->codigo = cod;
    }

    // Método para obter o código do funcionário
    int getCodigo() {
        return codigo;
    }

    // Método para definir o salário do funcionário
    void setSalario(float money) {
        this->salario = money;
    }

    // Método para obter o salário do funcionário
    float getSalario() {
        return salario;
    }

    // Método para definir o nome do funcionário
    void setNome(string nombre) {
        this->nome = nombre;
    }

    // Método para obter o nome do funcionário
    string getNome() {
        return nome;
    }

    // Método para definir o cargo do funcionário
    void setCargo(string c) {
        this->cargo = c;
    }

    // Método para obter o cargo do funcionário
    string getCargo() {
        return cargo;
    }

    // Método para definir o telefone do funcionário
    void setTelefone(string tel) {
        this->telefone = tel;
    }

    // Método para obter o telefone do funcionário
    string getTelefone() {
        return telefone;
    }
};

// Classe Estadia para armazenar e manipular informações das estadias
class Estadia {
private:
    int codigo_estadia; // Código da estadia
    int qtd_diaria; // Quantidade de diárias
    int codigo_cliente; // Código do cliente
    int nmr_quarto; // Número do quarto
    string data_entrada; // Data de entrada
    string data_saida; // Data de saída

public:
    // Construtor da classe Estadia
    Estadia(int ce, int qd, int cc, int nq, string de, string ds) {
        // Verificação se o código da estadia é maior que zero
        if (ce > 0) {
            setCodEstadia(ce);
        }

        // Verificação se a quantidade de diárias é maior que zero
        if (qd > 0) {
            setQtdDiaria(qd);
        }

        // Verificação se o código do cliente é maior que zero
        if (cc > 0) {
            setCodCliente(cc);
        }

        // Verificação se o número do quarto é maior que zero
        if (nq > 0) {
            setNmrQuarto(nq);
        }

        // Verificação se a data de entrada não está vazia e tem 10 caracteres
        if (!de.empty() && de.length() == 10) {
            setDataEntrada(de);
        }

        // Verificação se a data de saída não está vazia e tem 10 caracteres
        if (!ds.empty() && ds.length() == 10) {
            setDataSaida(ds);
        }
    }

    // Método para definir o código da estadia
    void setCodEstadia(int ce) {
        this->codigo_estadia = ce;
    }

    // Método para obter o código da estadia
    int getCodEstadia() {
        return codigo_estadia;
    }

    // Método para definir a quantidade de diárias
    void setQtdDiaria(int qd) {
        this->qtd_diaria = qd;
    }

    // Método para obter a quantidade de diárias
    int getQtdDiaria() {
        return qtd_diaria;
    }

    // Método para definir o código do cliente
    void setCodCliente(int cc) {
        this->codigo_cliente = cc;
    }

    // Método para obter o código do cliente
    int getCodCliente() {
        return codigo_cliente;
    }

    // Método para definir o número do quarto
    void setNmrQuarto(int nq) {
        this->nmr_quarto = nq;
    }

    // Método para obter o número do quarto
    int getNmrQuarto() {
        return nmr_quarto;
    }

    // Método para definir a data de entrada
    void setDataEntrada(string de) {
        this->data_entrada = de;
    }

    // Método para obter a data de entrada
    string getDataEntrada() {
        return data_entrada;
    }

    // Método para definir a data de saída
    void setDataSaida(string ds) {
        this->data_saida = ds;
    }

    // Método para obter a data de saída
    string getDataSaida() {
        return data_saida;
    }
};

// Classe Quarto para armazenar e manipular informações dos quartos
class Quarto {
private:
    int qtd_hosp; // Quantidade de hóspedes
    int nmr_quarto; // Número do quarto
    float vlr_diaria; // Valor da diária
    string status; // Status do quarto (disponível/indisponível)

public:
    // Construtor da classe Quarto
    Quarto(int qh, int nq, float vd, string stats) {
        // Verificação se a quantidade de hóspedes é maior que zero
        if (qh > 0) {
            setQtdHospede(qh);
        }

        // Verificação se o número do quarto é maior que zero
        if (nq > 0) {
            setNmrQuarto(nq);
        }

        // Verificação se o valor da diária é maior que zero
        if (vd > 0) {
            setValorDiaria(vd);
        }

        // Verificação se o status tem 8 ou 11 caracteres
        if (stats.length() == 11 || stats.length() == 8) {
            setStatus(stats);
        }
    }

    // Método para definir a quantidade de hóspedes
    void setQtdHospede(int qh) {
        this->qtd_hosp = qh;
    }

    // Método para obter a quantidade de hóspedes
    int getQtdHospede() {
        return qtd_hosp;
    }

    // Método para definir o número do quarto
    void setNmrQuarto(int nq) {
        this->nmr_quarto = nq;
    }

    // Método para obter o número do quarto
    int getNmrQuarto() {
        return nmr_quarto;
    }

    // Método para definir o valor da diária
    void setValorDiaria(float vd) {
        this->vlr_diaria = vd;
    }

    // Método para obter o valor da diária
    float getValorDiaria() {
        return vlr_diaria;
    }

    // Método para definir o status do quarto
    void setStatus(string estatus) {
        this->status = estatus;
    }

    // Método para obter o status do quarto
    string getStatus() {
        return status;
    }
};

// Protótipos das funções
string cadastrar_cliente(){
    
}
string cadastrar_funcionario(vector<Funcionario>& funcionarios) {
    int codigo;
    float salario;
    string nome, cargo, telefone;

    cout << "Digite o código do funcionário: ";
    cin >> codigo;
    cout << "Digite o nome do funcionário: ";
    cin.ignore();
    getline(cin, nome);
    cout << "Digite o cargo do funcionário: ";
    getline(cin, cargo);
    cout << "Digite o salário do funcionário: R$ ";
    cin >> salario;
    cout << "Digite o telefone do funcionário: ";
    cin.ignore();
    getline(cin, telefone);

    Funcionario novoFuncionario(codigo, salario, nome, cargo, telefone);
    funcionarios.push_back(novoFuncionario);

    return "Funcionário cadastrado com sucesso!";
}
string cadastrar_estadia();
float finalizar_estadia();
char pesquisa();
char mostrar_estadia();
int pontos_fidelidade();

// Função para exibir o menu
void menu() {
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

// Função principal
int main() { 
    int opcao;

    // Loop para exibir o menu até que a opção 7 seja escolhida
    do {
        menu();
        cin >> opcao;
        switch (opcao) {
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
    } while (opcao != 7);      
   
    return 0;
}