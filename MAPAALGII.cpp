#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int sexo, idade, cont, opcao;
	char nome[50], cpf[12];
	
	printf("  ------------------------  \n");
	printf("  |  Pronto Atendimento  |  \n");
	printf("  |   Cadastro Prévio    |  \n");
	printf("  ------------------------  \n");
	printf("     Informe seus dados:    \n");
	printf("     CPF (apenas números):  \n");
	scanf("%12[^\n]", &cpf);
	printf("     Nome:                \n");
	scanf("%s", nome);
	printf("     Sexo: Masculino (1)      Feminino (2)      Outro (3) \n");
	scanf("%d", &sexo);
	printf("     Idade:               \n");
	scanf("%d", &idade);
	fflush(stdin);
	system("cls");
	
	printf("  QUESTIONÁRIO DE SINTOMAS COVID-19 | Responda 1 para SIM ou 2 para NÃO:  \n");
		
	printf("   Tem febre?   \n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			cont = cont + 5;
			break;
		case 2:
			cont =cont + 0;
			break;
		default:
			printf("Opção inválida. \n");
			break;
	}
	fflush(stdin);
	system("cls");
	
	printf("   Tem dor de cabeça?  \n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			cont = cont + 1;
			break;
		case 2:
			cont =cont + 0;
			break;
		default:
			printf("Opção inválida. \n");
			break;
	}
	fflush(stdin);
	system("cls");
	
	printf("   Tem secreção nasal ou espirros?  \n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			cont = cont + 1;
			break;
		case 2:
			cont =cont + 0;
			break;
		default:
			printf("Opção inválida. \n");
			break;
	}
	fflush(stdin);
	system("cls");
	
	printf("   Tem dor/irritação na garganta?  \n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			cont = cont + 1;
			break;
		case 2:
			cont =cont + 0;
			break;
		default:
			printf("Opção inválida. \n");
			break;
	}
	fflush(stdin);
	system("cls");
	
	printf("   Tem tosse seca?  \n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			cont = cont + 3;
			break;
		case 2:
			cont =cont + 0;
			break;
		default:
			printf("Opção inválida. \n");
			break;
	}
	fflush(stdin);
	system("cls");
	
	printf("   Tem dificuldade respiratória?  \n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			cont = cont + 10;
			break;
		case 2:
			cont =cont + 0;
			break;
		default:
			printf("Opção inválida. \n");
			break;
	}
	fflush(stdin);
	system("cls");
	
	printf("   Tem dores no corpo?  \n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			cont = cont + 1;
			break;
		case 2:
			cont =cont + 0;
			break;
		default:
			printf("Opção inválida. \n");
			break;
	}
	fflush(stdin);
	system("cls");
	
	printf("   Tem diarreia?  \n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			cont = cont + 1;
			break;
		case 2:
			cont =cont + 0;
			break;
		default:
			printf("Opção inválida. \n");
			break;
	}
	fflush(stdin);
	system("cls");
	
	printf("    Esteve em contato, nos últimos 14 dias, com uma pessoa diagnosticada com COVID-19?  \n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			cont = cont + 10;
			break;
		case 2:
			cont =cont + 0;
			break;
		default:
			printf("Opção inválida. \n");
			break;
	}
	fflush(stdin);
	system("cls");
		
	printf("    Esteve em locais com grande aglomeração?  \n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			cont = cont + 3;
			break;
		case 2:
			cont = cont + 0;
			break;
		default:
			printf("Opção inválida. \n");
			break;
	}
	fflush(stdin);
	system("cls");
	
	printf(" Total de pontos: %d \n", cont);
	
	if (cont < 10) {
		printf("Você será encaminhado para a ala de RISCO BAIXO.   \n");
	}
	else {
		if (cont >=10 && cont < 20) {
			printf("Você será encaminhado para a ala de RISCO MÉDIO.  \n");
		}
		else {
			if (cont >= 20) {
				printf("Você será encaminhado para a ala de ALTO RISCO.  \n");
			}
		}
	}
	
	FILE *arquivo;
	
	arquivo = fopen("DadosPacientes.txt", "a+");
	
	fprintf(arquivo, "\nDADOS DO PACIENTE:\n");
	fprintf(arquivo, "CPF: %s \n", cpf);
	fprintf(arquivo, "Nome: %s \n", nome);
	fprintf(arquivo, "Sexo (1= masculino | 2= feminino | 3= outro): %d \n", sexo);
	fprintf(arquivo, "Idade: %d \n", idade);
	fprintf(arquivo, "Total de pontos: %d \n", cont);
	fprintf(arquivo, "=====================================================");
	
	fclose(arquivo);
	
	return 0;
	
}
