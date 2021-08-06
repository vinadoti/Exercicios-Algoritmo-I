#include<stdio.h>
#define n 10

// função para ler os vetores
void lerVetor(int vetorDigitado[])
{
	
	for(int i=1; i <= n; i++)
	{
		printf(" Digite um numero inteiro: ");
		scanf("%d", &vetorDigitado[i]);
	}
	
}


// função para substituir os valores
void substituirValores(int vetorFinal[])
{	
	for(int i=1; i <= n; i++)
	{
		if(vetorFinal[i] < 0)
		{	
			vetorFinal[i] = 1;
		}
    }		
}

// função para mostrar os vetores
void mostrarVetores(int x[])
{
	for(int i=1; i <= n; i++)
	{
		printf("  %d  |", x[i]);
	}
}

// programa principal
int main()
{
	//declaração das variaveis	
    int vetorDigitado[100];
  
    
 	printf("\n --------- Vetor -----------\n");	
	lerVetor(vetorDigitado);	
	
	printf("\n -------------------------------\n");
	
	printf("\n -------- Vetor Digitado --------\n");
	mostrarVetores(vetorDigitado);

	substituirValores(vetorDigitado);
	
	printf("\n\n --------- Vetor Final ---------\n");
	mostrarVetores(vetorDigitado);
	
	printf("\n\n -------------------------------\n");
	return 0;
}