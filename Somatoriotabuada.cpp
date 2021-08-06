#include <stdio.h>
#include <conio.h>
// esta função irá ler um número inteiro e retorná-lo para a parte do programa que
// chamou a execução da função
int lerNumero()
{
  int x;
  printf("\n Digite um numero: ");
  scanf("%d", &x);
  return (x);
}

// esta função calculará a soma de x por y retornará a soma calculada para a parte do programa que chamou
// a execução desta função
int somarXY(int x, int y)
{
  return (x + y);
}
// esta função irá calcular a tabuada de um número recebido por parâmetro
void tabuadaDoN(int n)
{
  int tabuada;
  printf("\n\n TABUADA DO %d \n\n", n);
  for (int i = 0; i <= 10; i = i + 1)
  {
    tabuada = n * i;
    printf("\n %d * %d = %d \n", n, i, tabuada);
  }
}

// Esta função calculará as tabuadas do 1 ao 10
void tabuada1Ao10()
{
  for (int n = 1; n <= 10; n++)
  { // chama a execução do módulo para cada valor de n
    tabuadaDoN(n);
    getch();
  }
}

// esta função irá calcular o somatório para um valor n lido retornará o valor do
// somatório para a parte do programa que chamou a execução desta função
float calcularSomatorio(int n)
{
  float soma = 0.0;
  for (int i = 1; i <= n; i = i + 1)
  {
    soma = soma + ((1.0 + i) / (i * i));
  }
  return (soma);
}

void menu()
{
  int soma, x, y, n, opcao;
  float s;
  do
  {
    printf("\n MENU \n");
    printf("\n 1 - somar dois numeros inteiros \n");
    printf("\n 2 - tabuada de um numero lido \n");
    printf("\n 3 - tabuada do 1 a tabuada do 10 \n");
    printf("\n 4 - somatorio \n");
    printf("\n 5 - sair do programa \n");
    printf("\n Digite sua opcao: \n");
    opcao = lerNumero(); //scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      x = lerNumero();
      y = lerNumero();
      soma = somarXY(x, y);
      printf("\n Soma = %d \n\n", soma);
      break;

    case 2:
      n = lerNumero();
      tabuadaDoN(n);
      break;

    case 3:
      tabuada1Ao10();
      break;
    case 4:
      n = lerNumero();
      s = calcularSomatorio(n);
      printf("\n Somatorio = %.2f \n\n", s);
      break;

    case 5:
      printf("\n\n FIM DE PROGRAMA \n\n");
      break;

    default:
      printf("\n\n OPCAO INVALIDA \n\n");
    }
  } while (opcao != 5);
}

// programa principal
main()
{
  menu();
}