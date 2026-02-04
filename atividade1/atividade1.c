#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int id;
    char nome[50];
    float salario;
} Professor;

typedef struct {
    int codigo;
    char nome[50];
    float preco;
} Produto;

typedef struct {
    char isbn[20];
    char titulo[50];
    char autor[50];
} Livro;

typedef struct {
    int id;
    char nome[50];
    char telefone[20];
} Cliente;

typedef struct {
    int matricula;
    char nome[50];
    float salario;
} Funcionario;

typedef struct {
    char placa[10];
    char modelo[50];
    int ano;
} Carro;

typedef struct {
    int numero;
    char titular[50];
    float saldo;
} Conta;

typedef struct {
    char rua[50];
    int numero;
    char cidade[50];
} Endereco;

typedef struct {
    char titulo[50];
    char genero[30];
    int duracao;
} Filme;

typedef struct {
    int id;
    char nome[50];
    float nota1;
    float nota2;
} Aluno;


void cadastrarProfessor() {
    Professor p;
    printf("Digite ID, Nome e Salário: ");
    scanf("%d %s %f", &p.id, p.nome, &p.salario);
    printf("Professor cadastrado: %d - %s - %.2f\n", p.id, p.nome, p.salario);
}

void cadastrarProduto() {
    Produto prod;
    printf("Digite Código, Nome e Preço: ");
    scanf("%d %s %f", &prod.codigo, prod.nome, &prod.preco);
    printf("Produto cadastrado: %d - %s - %.2f\n", prod.codigo, prod.nome, prod.preco);
}

void cadastrarLivro() {
    Livro l;
    printf("Digite ISBN, Título e Autor: ");
    scanf("%s %s %s", l.isbn, l.titulo, l.autor);
    printf("Livro cadastrado: %s - %s - %s\n", l.isbn, l.titulo, l.autor);
}

void cadastrarCliente() {
    Cliente c;
    printf("Digite ID, Nome e Telefone: ");
    scanf("%d %s %s", &c.id, c.nome, c.telefone);
    printf("Cliente cadastrado: %d - %s - %s\n", c.id, c.nome, c.telefone);
}

void cadastrarFuncionario() {
    Funcionario f;
    printf("Digite Matrícula, Nome e Salário: ");
    scanf("%d %s %f", &f.matricula, f.nome, &f.salario);
    printf("Funcionário cadastrado: %d - %s - %.2f\n", f.matricula, f.nome, f.salario);
}

void cadastrarCarro() {
    Carro car;
    printf("Digite Placa, Modelo e Ano: ");
    scanf("%s %s %d", car.placa, car.modelo, &car.ano);
    printf("Carro cadastrado: %s - %s - %d\n", car.placa, car.modelo, car.ano);
}

void cadastrarConta() {
    Conta conta;
    printf("Digite Número, Titular e Saldo: ");
    scanf("%d %s %f", &conta.numero, conta.titular, &conta.saldo);
    printf("Conta cadastrada: %d - %s - Saldo: %.2f\n", conta.numero, conta.titular, conta.saldo);
}

void cadastrarEndereco() {
    Endereco e;
    printf("Digite Rua, Número e Cidade: ");
    scanf("%s %d %s", e.rua, &e.numero, e.cidade);
    printf("Endereço cadastrado: %s, %d - %s\n", e.rua, e.numero, e.cidade);
}

void cadastrarFilme() {
    Filme filme;
    printf("Digite Título, Gênero e Duração: ");
    scanf("%s %s %d", filme.titulo, filme.genero, &filme.duracao);
    printf("Filme cadastrado: %s - %s - %d minutos\n", filme.titulo, filme.genero, filme.duracao);
}

void cadastrarAluno() {
    Aluno a;
    printf("Digite ID, Nome, Nota1 e Nota2: ");
    scanf("%d %s %f %f", &a.id, a.nome, &a.nota1, &a.nota2);
    float media = (a.nota1 + a.nota2) / 2;
    printf("Aluno cadastrado: %d - %s - Média: %.2f\n", a.id, a.nome, media);
}


int main() {
    int opcao;

    do {
        printf("\n===== MENU DE CADASTRO =====\n");
        printf("1 - Professor\n");
        printf("2 - Produto\n");
        printf("3 - Livro\n");
        printf("4 - Cliente\n");
        printf("5 - Funcionário\n");
        printf("6 - Carro\n");
        printf("7 - Conta Bancária\n");
        printf("8 - Endereço\n");
        printf("9 - Filme\n");
        printf("10 - Aluno\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrarProfessor(); break;
            case 2: cadastrarProduto(); break;
            case 3: cadastrarLivro(); break;
            case 4: cadastrarCliente(); break;
            case 5: cadastrarFuncionario(); break;
            case 6: cadastrarCarro(); break;
            case 7: cadastrarConta(); break;
            case 8: cadastrarEndereco(); break;
            case 9: cadastrarFilme(); break;
            case 10: cadastrarAluno(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while(opcao != 0);

    return 0;
}