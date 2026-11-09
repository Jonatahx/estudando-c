#include <stdio.h>
#include <string.h>

struct Aluno{
	char nome[50];
	int matricula;
	int idade;
};
 
int main (){
	
	struct Aluno aluno[100];
	
	int total = 0;
	int opcao;
	int escolha;
	int i;
	
	do{
	printf("Digite o seu nome: \n-->");
	fgets(aluno[total].nome, 50, stdin);

	printf("\nDigite sua matricula: \n-->");
	scanf("%d", &aluno[total].matricula);
	
	getchar();
	
	printf("\nDigite sua idade: \n-->");
	scanf("%d", &aluno[total].idade);
	
	getchar();
	
	total++;
	
	printf("\nDeseja cadastrar outra pessoa?\n");
	printf("1 - Sim\n");
	printf("0 - Nao\n");
	scanf("%d", &opcao);
	
	getchar();
	
} while (opcao == 1 && total < 100);

	printf("Deseja ver os dados cadastrados?\n");
	printf("1 - Sim\n");
	printf("0 - Não\n");
	scanf("%d", &escolha);
	
	if(escolha == 1){
		for (i = 0; i < total; i++){
			printf("Mostrando dados: \n");
			printf("Nome: %s\n", aluno[i].nome);
			printf("Matricula: %d\n", aluno[i].matricula);
			printf("Idade: %d\n", aluno[i].idade);
		}
	}
}
