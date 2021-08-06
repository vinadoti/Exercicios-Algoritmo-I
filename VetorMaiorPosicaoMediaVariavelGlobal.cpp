// Solução 2: Passagem de parâmetro por referência (Vetor); variável global
// inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>

// #define serve para definir uma referência no código
//#define n 10

// declaração das variáveis globais
int a[150], b[150], media, posMaior;

// função para ler vetor de qualquer tamanho
void lerVetor(int x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n Digite um numero inteiro: ");
		scanf("%d", &x[i]);
	}
}

// função para mostrar vetor de qualquer tamanho
void mostrarVetor(int x[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%5d", x[i]);
	}
}

// função para somar os elementos do vetor e retornar a soma
int somarVetor()
{
	int soma = 0;
	for (int i = 0; i < 5; i++)
	{
		soma = soma + b[i];
	}
	return soma;
}

// finção para calcular a média dos elementos do vetor
void calcularMediaVetor()
{
	media = somarVetor() / 5;
}

// função para achar a posição e o maior elemento do vetor
void acharPosicaoMaiorElementoVetor()
{
	int maior;
	posMaior = 0;
	maior = a[0];
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > maior)
		{
			maior = a[i];
			posMaior = i;
		}
	}
}

// função principal - programa principal
int main()
{
	// chamar a execução das funções
	printf("\n\t ***** LEITURA DO VETOR A *****\n");
	lerVetor(a, 10);
	printf("\n\t ***** LEITURA DO VETOR B *****\n");
	lerVetor(b, 5);

	calcularMediaVetor();

	acharPosicaoMaiorElementoVetor();

	system("cls"); // limpando a tela

	// mostrar os resultados
	printf("\n\t ***** VETOR A *****\n");
	mostrarVetor(a, 10);
	printf("\n\n Maior elemento do Vetor A: %d ", a[posMaior]);
	printf("\n Posicao do maior elemento do Vetor A: %d \n", posMaior);
	printf("\n\t ***** VETOR B *****\n");
	mostrarVetor(b, 5);
	printf("\n Media do Vetor B: %d \n", media);
	return 0;
}