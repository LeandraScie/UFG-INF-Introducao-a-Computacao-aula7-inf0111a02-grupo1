#include <stdio.h>
#include <string.h>

int main ()
{
	int num;//recebe numero da conta
	float con, valor;//recebe o consumo m^3 e o valor da conta
	char tipo[1];//recebe o codigo para tipo de estabelecimento
	
	printf("Insira:\n\t(r)Residencial\t(c)Comercial\t(i)Industrial: ");
	scanf("%s",(char*)&tipo);
	printf("Numero da conta: ");
	scanf("%d", &num);
	printf("Consumo(m^3): ");
	scanf("%f", &con);

	//compara a string armazenada em tipo ao codigo r
	if (strcmp(tipo,"r")==0)
	
		valor=con*0.05+5.00; //taxa aparte de consumo, logo função simples.
		
	else 
	{	//compara a string ao codigo c
		if (strcmp(tipo,"c")==0)
		{
			if (con<=80) 	// taxa vinculada a faixa de preço, logo gera duas funções distintas
				valor=500;
			else
				valor=(con-80)*0.25+500.0;
		}
		else
		{	//compara a string ao codigo i
			if (strcmp(tipo,"i")==0) 
			{
				if(con<=100) // taxa vinculada a faixa de preço, logo gera duas funções distintas
					valor=800.0;
				else
					valor=(con-100)*0.25+800.0;
			}
		
			else
				printf("ERRO: INSIRA O TIPO CORRETAMENTE. \n\n"); // retorno padrão para caracteres distintos do explicitado
		}
	}
	printf("Conta: %d\tValor Conta: %.2f\n\n", num, valor); //imprime na tela o numero da conta e o seu valor
	return 0;
}
