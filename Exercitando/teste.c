#include <stdio.h>

int main(){
	
	int primeiro, segundo, terceiro;
	float resultado;
	
	printf("CALCULO DE MEDIA \n\n");

	printf("Digite sua primeira nota: \n");
	scanf("%d", &primeiro);
	
	while (primeiro < 0 || primeiro > 10) {
		printf("Erro! Digite uma nota valida: \n");
		scanf("%d", &primeiro);
}
			
	printf("\n\nDigite sua segunda nota: \n");
	scanf("%d", &segundo);
	
	while (segundo < 0 || segundo > 10 ){
		printf("Erro! Digite uma nota valida: \n");
		scanf("%d", &segundo);
}
	
	
	printf("\n\nDigite sua terceira nota: \n");
	scanf("%d", &terceiro);
	
	while (terceiro < 0 || terceiro > 10) {
		printf("Erro! Digite uma nota valida: \n");
		scanf("%d", &terceiro);
}
	
	resultado = (primeiro + segundo + terceiro) / 3.0;
	
	printf("\n\nPrimeira nota: %d\n", primeiro);
	printf("Segunda nota: %d\n", segundo);
	printf("Terceira nota: %d\n\n", terceiro);
	
	if (resultado >= 5) {
		printf("Aluno de recuperacao!\n\n");
	}

	else if (resultado >= 7){
		printf("Aluno aprovado!\n\n");		
	}

	else{
		printf("Aluno reprovado!\n\n");
	}
	
	printf("Media: %.1f\n", resultado);
	
	return 0;
	
}
