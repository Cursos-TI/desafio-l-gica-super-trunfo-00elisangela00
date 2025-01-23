#include <stdio.h>


int main() {
    printf("Pronto para jogar Super Trunfo? Vamos lá!\n");

    char cidade1[30];
    float populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    char Cidade2 [30];
    float Populacao2;
    float Area2;
    float Pib2;
    int Pontos_turisticos2;
 
    printf("Escolha uma Cidade, esta será a Cidade 1:\n");
    scanf("%s",cidade1);//Não consigo responder com nomes composto no scanf
    printf("Qual a População?\n");
    scanf("%f", &populacao1);
    printf("Qual a Área?\n");
    scanf("%f", &area1);
    printf("Valor do PIB?\n");
    scanf("%f", &pib1);
    printf("Quantidade de Pontos Turisticos?\n");
    scanf("%d", &pontos_turisticos1);

    printf("\n"); //Utilizei mais espaço para facilitar a visualização
    printf("Esta é sua carta:\n");
    printf("Cidade: %s \n", cidade1);
    printf("População: %f\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n");
    printf("Agora escolha outra cidade, esta será a Cidade 2:\n");
    scanf("%s",Cidade2);
    printf("Qual a População?\n");
    scanf("%f", &Populacao2);
    printf("Qual a Área?\n");
    scanf("%f", &Area2);
    printf("Valor do PIB?\n");
    scanf("%f", &Pib2);
    printf("Quantidade de Pontos Turisticos?\n");
    scanf("%d", &Pontos_turisticos2);

    printf("\n");
    printf("Esta é sua carta:\n");
    printf("Cidade: %s \n", Cidade2);
    printf("População: %f\n", Populacao2);
    printf("Área: %f\n", Area2);
    printf("PIB: %f\n", Pib2);
    printf("Pontos Turisticos: %d\n", Pontos_turisticos2);

    printf("\n");
    printf("Hora de comparar as cartas\n");
    if (populacao1 > Populacao2){
        printf("A Cidade 1 tem a maior População.\n");
    } else {
        printf("A Cidade 2 tem a maior População.\n");
    }
    if (area1 > Area2){
        printf ("A Cidade 1 tem a maior Área.\n");
    } else {
        printf("A Cidade 2 tem a maior Área.\n");
    }
    if (pib1 > Pib2){
        printf("A Cidade 1 tem o maior PIB.\n");
    } else {
        printf("A Cidade 2 tem o maior PIB.\n");
    }
    if (pontos_turisticos1 > Pontos_turisticos2){
        printf("A Cidade 1 tem mais Pontos Turísticos.\n");
    } else {
        printf("A Cidade 2 tem mais Pontos Turísticos.\n");
    }

    float cidadeVencedora = populacao1 + area1 + pib1 + pontos_turisticos1; //Seria certo colocar o Array aqui embaixo mesmo? Pois quando ele estava em cima não rodava o resultado direito.
    float cidadeVencedora2 = Populacao2 + Area2 + Pib2 + Pontos_turisticos2;
    
    printf("\n");
    if (cidadeVencedora > cidadeVencedora2){
        printf("A vencedora é a Cidade 1: %s", cidade1);
    } else {
        printf("A vencedora é a Cidade 2: %s", Cidade2);
    }


return 0;
}