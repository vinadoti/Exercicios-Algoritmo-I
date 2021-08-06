/* Faça um programa modularizado que receba o nome e a nota de 80 alunos de uma sala. Calcule e mostre:
* a média da sala;
* o nome do aluno com a maior nota;
* o nome do aluno com a menor nota;
* os nomes dos alunos aprovados.
*/ 

// SOLIUÇÃO 01 - PASSAGEM DE PARÂMETROS POR REFERÊNCIA E VARIÁVEL LOCAL
// inclusão de bibliotecas
#include <stdio.h>
// função para ler os nomes e as notas dos alunos
void lerDadosAlunos(char nomes[80][40], float notas[80])
{
	for(int i = 0; i < 5; i++)
	{
		// comunicação com o usuário e entrada de dados
		printf("\n Nome do aluno: ");
		fflush(stdin);
		gets(nomes[i]);
		printf("\n Notas (de 0.0 a 10.0): ");
		scanf("%f", &notas[i]);
	}
}

// função para mostrar os alunos aprovados
void mostrarDadosAlunosAprovados(char nomes[80][40], float notas[80])
{
	for(int i = 0; i < 5; i++)
	{
		// comunicação com o usuário e entrada de dados
		if(notas[i] >= 6.0)
		{
			printf("\n Nome do aluno: %s ==>>> Nota: %.2f", nomes[i], notas[i]);
		}
	}
}
// função para achar a posição da maior nota no vetor de notas
int acharMaiorNota(float notas[80])
{
	int posMaiorNota = 0;
	float maiorNota;
	maiorNota = notas[0];
	for(int i = 0; i < 5; i++)
	{
		if(notas[i] > maiorNota)
		{
			posMaiorNota = i;
			maiorNota = notas[i];
		}
	}
	return posMaiorNota;
}
// função para achar a posição da menor nota no vetor de notas
int acharMenorNota(float notas[80])
{
	int posMenorNota = 0;
	float menorNota;
	menorNota = notas[0];
	for(int i = 0; i < 5; i++)
	{
		if(notas[i] < menorNota)
		{
			posMenorNota = i;
			menorNota = notas[i];
		}
	}
	return posMenorNota;
}
// calcular a média da sala
float calcularMediaSala(float notas[80])
{
	float media = 0.0;
	for(int i = 0; i < 5; i++)
	{
		media = media + notas[i];
	}
	return (media/5);
}
// programa programa principal
int main()
{
	// declaração das variáveis locais
	char nomeAluno[80][40];
	float notasAlunos[80], mediaSala;
	int posMaiorNota, posMenorNota;
	// chamada da execução das funções
	lerDadosAlunos(nomeAluno, notasAlunos);
	posMaiorNota = acharMaiorNota(notasAlunos);
	posMenorNota = acharMenorNota(notasAlunos);
	mediaSala = calcularMediaSala(notasAlunos);
	// saída de dados
	printf("\n ***** LISTA DE ALUNOS APROVADOS ***** \n");
	mostrarDadosAlunosAprovados(nomeAluno, notasAlunos);
	
	printf("\n Maior notas da sala           : %.2f ", notasAlunos[posMaiorNota]);
	printf("\n Nome do aluno com a maior nota: %s ", nomeAluno[posMaiorNota]);
	printf("\n Menor notas da sala           : %.2f ", notasAlunos[posMenorNota]);
	printf("\n Nome do aluno com a menor nota: %s ", nomeAluno[posMenorNota]);
	printf("\n\n Media da sala ====>>> %.2f \n\n", mediaSala);
	return 0;
}