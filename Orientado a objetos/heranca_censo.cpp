#include <iostream>
using namespace std;

class contratado {
private:
    string nome;
    string matricula;
    string cpf;
    string situacao;
public:
    contratado();
    contratado(string nome,string matricula, string cpf, string situacao);
    string getNome();
    string getMatricula();
    string getCpf();
    string getSituacao();
    void setNome(string nome);
    void setMatricula(string matricula);
    void setCpf(string Cpf);
    void setSituacao(string situacao);
    friend ostream& operator<<(ostream& os, contratado obj);
};

contratado::contratado() {
    this->nome = "";
    this->matricula = "";
    this->cpf = "";
    this->situacao = "";
}

contratado::contratado(string nome, string matricula, string cpf, string situacao) {
    this->nome = nome;
    this->matricula = matricula;
    this->cpf = cpf;
    this->situacao = situacao;
}

string contratado::getNome() {
    return this->nome;
}

string contratado::getMatricula() {
    return this->matricula;
}

string contratado::getCpf() {
    return this->cpf;
}

string contratado::getSituacao() {
    return this->situacao;
}

void contratado::setNome(string nome) {
    this->nome = nome;
}

void contratado::setMatricula(string matricula) {
    this->matricula = matricula;
}

void contratado::setCpf(string cpf) {
    this->cpf = cpf;
}

void contratado::setSituacao(string situacao) {
    this->situacao = situacao;
}

ostream& operator<<(ostream& os, contratado obj) {
    os << "objeto da classe A" << endl << "nome = " << obj.nome << endl << "area = " << obj.matricula << endl << "setor = " << obj.situacao << endl;
    return os;
}

class recenseador : public contratado{
private:
    int setor;
    int area;
public:
    recenseador();
    recenseador(int setor, int area);
    recenseador(int setor, int area, string nome, string matricula, string cpf, string situacao);
    void setSetor(int setor);
    void setArea(int area);
    int getSetor();
    int getArea();
    friend ostream& operator<<(ostream& os, recenseador obj);
};

recenseador::recenseador() {
    this->setor = 0;
    this->area = 0;
}


recenseador::recenseador(int setor, int area) {
    this->setor = 0;
    this->area = 0;
}

recenseador::recenseador(int setor, int area, string nome, string matricula, string cpf, string situacao) :contratado(nome, matricula, cpf, situacao) {
    this->setor = setor;
    this->area = area;
}

void recenseador::setSetor(int setor) {
    this->setor = setor;
}

void recenseador::setArea(int area) {
    this->area = area;
}

int recenseador::getSetor() {
    return this->setor;
}

int recenseador::getArea() {
    return this->area;
}

ostream& operator<<(ostream& os, recenseador obj) {
    os << "objeto da classe" << endl << "nome = " << obj.getNome() << endl << "area = " << obj.area<< endl << "setor = " << obj.setor << endl;
    return os;
}

int main()
{
    cout << "Hello World!\n";
    contratado A("Maria", "123321", "789987", "Inativo");
    cout << "O nome do contratado é:" << A.getNome() << endl;

    recenseador AR01(11, 256, "Felipe", "1597534862", "9336369", "Ativo");
    cout << "O nome do recenseador é:" << AR01.getNome() << endl;
    cout << "A matricula do recenseador é:" << AR01.getMatricula() << endl;
    cout << "O cpf do recenseador é:" << AR01.getCpf() << endl;
    cout << "A situacao do recenseador é:" << AR01.getSituacao() << endl;
    cout << "A area de atuação é:" << AR01.getArea() << endl;
    cout << "O setor de atuacao é:" << AR01.getSetor() << endl;
    cout << "--------------------" << endl;
    cout << A << endl;
    cout << "--------------------" << endl;
    cout << AR01 << endl;
}
