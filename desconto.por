programa
{
	funcao inicio()
	{
		// 1. Declaração das variáveis
		inteiro idade
		real valor_compra

		// 2. Entrada de dados
		escreva("Qual sua idade? ")
		leia(idade)

		escreva("Qual o valor da compra? R$ ")
		leia(valor_compra)

		escreva("\n")

		// 3. Teste da condição com 'ou'
		se (idade >= 60 ou valor_compra > 100)
		{
			escreva("Desconto de 10% aplicado!\n")
		}
		senao
		{
			escreva("Valor integral, sem desconto.\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 443; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */