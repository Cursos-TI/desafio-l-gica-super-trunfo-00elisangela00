#include <stdio.h>


int main() {
    printf("Pronto para jogar Super Trunfo? Vamos lá!\n");

    char cidade1[30];
    float populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    char cidade2 [30];
    float populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
 
    printf("Escolha uma Cidade:\n");
    scanf("%s",cidade1);
    printf("Qual a População?\n");
    scanf("%f", &populacao1);
    printf("Qual a Área?\n");
    scanf("%f", &area1);
    printf("Valor do PIB?\n");
    scanf("%f", &pib1);
      printf("Quantidade de Pontos Turisticos?\n");
    scanf("%d", &pontos_turisticos1);

    printf("Esta é sua carta:\n");
    printf("Cidade: %s \n", cidade1);
    printf("População: %f\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    
    printf("Agora escolha outra cidade!\n");
    scanf("%s", cidade2);
    printf("Qual a População?\n");
    scanf("%f", &populacao2);
    printf("Qual a Área?\n");
    scanf("%f", &area2);
    printf("Valor do PIB?\n");
    scanf("%f", &pib2);
      printf("Quantidade de Pontos Turisticos?\n");
    scanf("%d", &pontos_turisticos2);

    printf("Esta é sua carta:\n");
    printf("Cidade: %s \n", cidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
}

    printf("Hora de comparar as cartas\n");

    if (populacao1 >= populacao2){
        printf ("A cidade1 tem uma população maior que a cidade2\n");
    } else {
        printf("A cidade2 tem uma população maior que a cidade1\n");
    }

    if (area1 >= area2){
        printf ("A cidade1 tem uma área maior que a cidade2\n");
    } else {
        printf("A cidade2 tem uma área maior que a cidade1\n");
    }

    if (pib1 >= pib2){
        printf ("O PIB da cidade1 é maior que o da cidade2\n");
    } else {
        printf("O PIB da cidade2 é maior que o da cidade1\n");
    }
    







return 0;
}