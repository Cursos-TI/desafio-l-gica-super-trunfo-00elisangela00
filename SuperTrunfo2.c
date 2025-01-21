#include <stdio.h>


int main() {
    printf("Pronto para jogar Super Trunfo? Vamos lá!\n");

    char cidade[30];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;
 
    printf("Escolha uma Cidade:\n");
    scanf("%s",cidade);
    printf("Qual a População?\n");
    scanf("%f", &populacao);
    printf("Qual a Área?\n");
    scanf("%f", &area);
    printf("Valor do PIB?\n");
    scanf("%f", &pib);
      printf("Quantidade de Pontos Turisticos?\n");
    scanf("%d", &pontos_turisticos);

    printf("Esta é sua carta:\n");
    printf("Cidade: %s \n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);


    







return 0;
}