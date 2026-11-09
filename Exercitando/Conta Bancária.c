#include <stdio.h>
#include <stdlib.h>

struct Conta{
	int numero;
	float saldo;
};

void verSaldo(Conta conta){
	printf("\nSaldo: %f", conta.saldo);
}

void sacar(Conta *c, int valor){
	c->saldo -+ valor;
}

void depositar(Conta *c, int valor){
	c->saldo += valor;
}

main(){
	struct Conta conta1;
	float valor;
	
	verSaldo(conta1);
	depositar(&conta1, 200.0);
	verSaldo(conta1);
	depositar(&conta1, 1000.0);
	verSaldo(conta1);
}
