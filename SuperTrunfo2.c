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


    
}



int main (){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf ("Temperatura está alta\n");
    } else {
        printf("Temperatura está dentro dos parâmetros\n");
    }

    if (umidade > 50){
        printf ("Úmidade elevada\n");
    } else {
        printf("Úmidade está dentro dos parâmetros\n");
    }

    if (estoque < estoqueMinimo){
        printf ("Estoque abaixo do minímo!\n");
    } else {
        printf("Estoque normal!\n");
    }



return 0;
}