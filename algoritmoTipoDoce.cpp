/* AlgoritmoTipoDoce

 
Início
	var
	Inteiro tipoDoce, vendas, controleCompra;
	Real quantidadeKg, valorFinalTrufa, valorFinalTorta, valorFinalBolo, pesoTrufa, pesoTorta, pesoBolo, precoTrufa, precoTorta, precoBolo, totalCompra;

Para vendas <- 1 até 25 passo 1 faça
Início
	Escreva  ("Proximo cliente");
	valorFinalTrufa <- 0.0;
	valorFinalTorta <- 0.0;
	valorFinalBolo <- 0.0; 
	pesoTrufa <- 0.0;
	pesoTorta <- 0.0;
	pesoBolo <- 0.0;
	precoTrufa <- 0.0;
	precoTorta <- 0.0;
	precoBolo <- 0.0;
	totalCompra <- 0.0;
	Escreva  ("Cliente", vendas);

	Repita
		Repita
		 	 leia (tipoDoce);
					se (tipoDoce == 1 || tipoDoce == 2 || tipoDoce == 3)
					inicio
					 escreva("");
					fim						
					senao
					inicio
						escreva ("Codigo nao existe, favor inserir codigo corretamente");
					fim se;	
		 Enquanto (tipoDoce != 1 && tipoDoce != 2 && tipoDoce != 3);
			leia (quantidadeKg);
			escolha(tipoDoce)
            caso 1: 
				    se pesoTrufa != 0 então
                    inicio
						pesoTrufa <- pesoTrufa + quantidadeKg;
	 	 	 	    fim
					senão 
					inicio
					pesoTrufa <- quantidadeKg;
					fim se;
					se pesoTrufa > 5 então
					inicio	
						precoTrufa <- 22.00;	
						valorFinalTrufa <- 22.00 * pesoTrufa;
					fim
					senão
					inicio
						precoTrufa = 25.00;	
						valorFinalTrufa = 25.00 * pesoTrufa;
					fim se;
            caso 2: 
					se pesoTorta != 0 então
					inicio
						pesoTorta <- pesoTorta + quantidadeKg;
					fim
					senão
					inicio
						pesoTorta = quantidadeKg;
					fim se;
					se pesoTorta > 5 então
					inicio
						precoTorta <- 22.25;	
						valorFinalTorta <- 22.25 * pesoTorta;
					fim	
					senão
					inicio
						precoTorta <- 24.45;
						valorFinalTorta <- 24.45 * pesoTorta;
					fim se;
					
			caso 3: 
					se pesoBolo != 0 então
					inicio
						pesoBolo <- pesoBolo + quantidadeKg;
					fim	
					senão 
					inicio
		   	 	 	 	 pesoBolo <- quantidadeKg;
					fim se;
					se pesoBolo > 5 então
					inicio
						precoBolo <- 30.00;
						valorFinalBolo <- 30.00 * pesoBolo;	
					fim
					senão
					inicio
						precoBolo <- 35.00;
						valorFinalBolo <- 35.00 * pesoBolo;
					fim se;
					
				caso contrario:
					escreva("Digitada opcao invalida. Tente novamente...");
			Fim escolha;
			
			
			leia(controleCompra);
			enquanto controleCompra = 1;
			totalCompra = valorFinalTrufa + valorFinalTorta + valorFinalBolo;
			
            escreva ("-----------------------------------------------");
			escreva ("Pedidos: Tipo    Doce    Preco/Kg(R$)    Quantidade(Kg)    Total");
			escreva ("1 - Trufa - ", precoTrufa " - ", pesoTrufa " - ", valorFinalTrufa);
			escreva ("2 - Torta - " ,precoTorta " - " ,pesoTorta " - " ,valorFinalTorta);
			escreva ("3 - Bolo - ", precoBolo " - ", pesoBolo " - ", valorFinalBolo);
			escreva ("Valor final da compra: R$ ", totalCompra);
			escreva ("-----------------------------------------------");
  			
	   	fim para;
Fim  	

*/



// inclusão de bibliotecas
#include <stdio.h>

// programa principal
int main()
{
	// declaração das variáveis
    int tipoDoce, vendas, controleCompra;
	float quantidadeKg, valorFinalTrufa, valorFinalTorta, valorFinalBolo, pesoTrufa, pesoTorta, pesoBolo, precoTrufa, precoTorta, precoBolo, totalCompra;
	
	// Repetição de 25 vendas
	for (vendas = 1; vendas <=5; vendas++)
	{
		valorFinalTrufa = 0.0;
		valorFinalTorta = 0.0;
		valorFinalBolo = 0.0;
		pesoTrufa = 0.0;
		pesoTorta = 0.0;
		pesoBolo = 0.0;
		precoTrufa = 0.0;
		precoTorta = 0.0;
		precoBolo = 0.0;
		totalCompra = 0.0;
		printf ("\n Proximo cliente...\n\n");
		// primeira compra e primeiro item
		printf (" Cliente %d \n", vendas);
			do {
				do{
					printf("\n Digite o codigo do tipo de doce \n 1 - Trufa \n 2 - Torta \n 3 - Bolo \n R: ");
					scanf("%d", &tipoDoce);
					if (tipoDoce == 1 || tipoDoce == 2 || tipoDoce == 3)
					{
					 printf("");
					}						
					else{
						printf ("\n Codigo nao existe, favor inserir codigo corretamente");
					}
				} while (tipoDoce != 1 && tipoDoce != 2 && tipoDoce != 3);
			printf("\n Digite a quantidade que deseja comprar em KG: ");
			scanf("%f", &quantidadeKg);	
			switch(tipoDoce){
				case 1:
					if (pesoTrufa != 0){
						pesoTrufa = pesoTrufa + quantidadeKg;
					} 
					else {pesoTrufa = quantidadeKg;
					}
					if(pesoTrufa > 5)
					{	
						precoTrufa = 22.00;	
						valorFinalTrufa = 22.00 * pesoTrufa;
					}else
					{
						precoTrufa = 25.00;	
						valorFinalTrufa = 25.00 * pesoTrufa;
					}
					break;
				case 2: 
					if (pesoTorta != 0){
						pesoTorta = pesoTorta + quantidadeKg;
					}
					else { pesoTorta = quantidadeKg;
					}
					if(pesoTorta > 5)
					{
						precoTorta = 22.25;	
						valorFinalTorta = 22.25 * pesoTorta;	
					} else
					{
						precoTorta = 24.45;
						valorFinalTorta = 24.45 * pesoTorta;
					}
					break;
					case 3: 
					if (pesoBolo != 0){
						pesoBolo = pesoBolo + quantidadeKg;
					}	
					else { pesoBolo = quantidadeKg;
					}
					if(pesoBolo > 5)
					{
						precoBolo = 30.00;
						valorFinalBolo = 30.00 * pesoBolo;	
					} else
					{
						precoBolo = 35.00;
						valorFinalBolo = 35.00 * pesoBolo;
					}
					break;
				default:
					printf("\n Digitada opcao invalida. Tente novamente...\n");
				break;
			}
			// se o cliente quiser comprar mais um item
			printf("\n Deseja continuar comprando? \n 1 - Sim \n 2 - Nao \n R: ");
			scanf("%d", &controleCompra);
			} while (controleCompra == 1);
			totalCompra = valorFinalTrufa + valorFinalTorta + valorFinalBolo;
			// Saida de dados de cada cliente
			printf ("-----------------------------------------------");
			printf ("\n Pedidos: \n Tipo    Doce    Preco/Kg(R$)    Quantidade(Kg)    Total");
			printf ("\n 1       Trufa    R$ %.2f          %.2f           R$ %.2f" , precoTrufa, pesoTrufa, valorFinalTrufa );
			printf ("\n 2       Torta    R$ %.2f          %.2f           R$ %.2f", precoTorta, pesoTorta, valorFinalTorta );
			printf ("\n 3       Bolo     R$ %.2f          %.2f           R$ %.2f", precoBolo, pesoBolo, valorFinalBolo);
			printf ("\n\n Valor final da compra: R$ %.2f", totalCompra);
			printf ("\n-----------------------------------------------");
	}
}