// Solução 1: variável local e passagem de parâmetro por valor
// inclusão de bibliotecas
#include <stdio.h>
#include <conio.h>

// Módulo para ler um caracter que representa o sexo
char lerSexo()
{
  char s;
  printf("\n Digite seu sexo F - Fem / M - Masc: ");
  fflush(stdin);
  s = getche(); // scanf("%c", &s);
  return s;
}

// Módulo para ler um número real que representa a altura ou o peso
float lerPesoAltura()
{
  float x;
  scanf("%f", &x);
  return x;
}

// Módulo para calcular o peso ideal
float calcularPesoIdeal(float altura, char sexo)
{
  switch (sexo)
  {
  case 'F':
  case 'f':
    return ((62.1 * altura) - 44.7);
    break;
  case 'M':
  case 'm':
    return ((72.2 * altura) - 58.0);
    break;
  default:
    printf("\n\n Sexo invalido. Digite M ou F para o sexo \n");
    return (0.0);
  }
}

// Módulo para verificar se a pessoa está acima, abaixo ou no peso ideal
void verificarPesoIdeal(float peso, float pesoideal)
{
  if (peso == pesoideal)
  {
    printf("\n\n Parabéns voce esta no peso ideal: %.2f Kg \n\n", pesoideal);
  }
  else
  {
    if (peso > pesoideal)
    {
      printf("\n\n Voce esta acima do peso ideal: %.2f Kg \n\n", pesoideal);
    }
    else
    {
      printf("\n\n Voce esta abaixo do peso ideal: %.2f Kg \n\n", pesoideal);
    }
  }
}

// programa principal
main()
{
  // declaração das variáveis locais
  float altura, peso, pesoideal;
  char sexo;

  // chamando a execução da função, para leitura da altura
  printf("\n\n Digite sua altura em metros: ");
  altura = lerPesoAltura();

  // chamando a execução da função, para leitura do peso
  printf("\n\n Digite seu peso em Kg: ");
  peso = lerPesoAltura();

  // chamando a execução da função, para leitura do sexo
  sexo = lerSexo();

  // chamando a execução da função, para calcular o peso ideal
  pesoideal = calcularPesoIdeal(altura, sexo);

  // chamando a execução da função, para verificar se a pessoa está
  // acima, abaixo ou no peso ideal
  if (pesoideal != 0.0)
  {
    verificarPesoIdeal(peso, pesoideal);
  }

  getch();
}