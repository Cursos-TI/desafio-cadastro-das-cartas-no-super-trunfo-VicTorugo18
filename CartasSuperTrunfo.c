#include <stdio.h>


int main()
{//São explicitados as variavéis
	char estado[10];
	char codigo[4];
	char cidade[13];
	int populacao;
	float area;
	float pib;
	int turismo;
	float pibpc,densidade,superpoder;
//coleta das informações
	printf("digite o estado: \n");
	scanf("%s", estado);

	printf("digite o codigo: \n");
	scanf("%s", codigo);

	printf("digite o nome da cidade:\n");
	scanf("%s", cidade);

	printf("digite a populacao:\n");
	scanf("%d", &populacao);

	printf("digite a area :\n");
	scanf("%f", &area);

	printf("digite o pib:\n");
	scanf("%f", &pib);

	printf("digite a quantidade de pontos turisticos:\n");
	scanf("%d", &turismo);
//calculo do pib,densidade e super poder	
	pibpc = (float) pib/populacao;
	
	densidade = (float) populacao/area;
	
	superpoder = (float) (populacao + area + pib + turismo + pibpc + 1/densidade);
//impressão dos resultados	
	printf("As informações da carta 1 Estado:%s-Código:%s\n", estado, codigo);
	printf("População:%d - Cidade:%s - Área:%f\n-PIB:%f - Pontos turísticos:%d\n", populacao, cidade, area, pib, turismo);
    printf("PIB per capita:%.2f- densidade:%.2f - Super Poder:%.2f \n",pibpc,densidade,superpoder);
    
	char estado2[10];
	char codigo2[4];
	char cidade2[13];
	int populacao2;
	float area2;
	float pib2;
	int turismo2;
	float pibpc2,densidade2,superpoder2;

	printf("digite o estado: \n");
	scanf("%s", estado2);

	printf("digite o codigo: \n");
	scanf("%s", codigo2);

	printf("digite o nome da cidade:\n");
	scanf("%s", cidade2);

	printf("digite a populacao:\n");
	scanf("%d", &populacao2);

	printf("digite a area :\n");
	scanf("%f", &area2);

	printf("digite o pib:\n");
	scanf("%f", &pib2);

	printf("digite a quantidade de pontos turisticos:\n");
	scanf("%d", &turismo2);
	
	pibpc2 = (float) pib2/populacao2;
	
	densidade2 = (float) populacao2/area2;
	
    superpoder2 = (float) (populacao2 + area2 + pib2 + turismo2 + pibpc2 + 1/densidade2);
	
	printf("As informações da carta 2 Estado:%s-Código:%s\n", estado2, codigo2);
	printf("População:%d - Cidade:%s - Área:%f\n-PIB:%f - Pontos turísticos:%d\n", populacao2, cidade2, area2, pib2, turismo2);
    printf("PIB per capita:%.2f- densidade:%.2f - Super Poder:%.2f \n",pibpc2,densidade2,superpoder2);
    //impressão dos resultados
    printf("Populacao>populacao2 %d \n",populacao>populacao2);
    printf("area>area2 %d \n",area>area2);
    printf("pib>pib2 %d \n",pib>pib2);
    printf("turismo>turismo2 %d \n",turismo>turismo2);
    printf("pibpc>pibpc2 %d \n",pibpc>pibpc2);
    printf("densidade<densidade2 %d \n",densidade<densidade2);
    printf("superpoder>superpoder2 %d \n",superpoder>superpoder2);
       
	return 0;
}

