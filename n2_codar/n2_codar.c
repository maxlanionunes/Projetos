#include <stdio.h>

int main() {
    int idade, matricula; 
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    //fgets(nome, 50, stdin);
    
    printf("Digite sua matricula: ");
    scanf("%d", &matricula);
    

    printf("\n");

    printf("Nome do aluno: %s - Matricula: %d \n", nome, matricula);
    printf("Idade: %d - altura: %f", idade, altura);

    return 0;
}