#include <stdio.h>

int main()
{
    // carta 01
    char estado1;
    char codigocarta1[4];
    char nomecidade1[50];
    int populacao1, pontostur1;
    float pib1, area_km1;


     // carta 02
     char estado2;
     char codigocarta2[4];
     char nomecidade2[50];
     int populacao2, pontostur2;
     float pib2, area_km2;

     
     // Codigo da Carta 01
    printf("Primeiramente iremos inserir as informações correspondentes a Carta 01!! \n");

    printf("Digite uma letra maiúscula entre A e H (ela irá corresponder à carta 01): \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (sendo o código correspondente a letra inserida anteriormente + um numero de 01 a 04): \n");
    scanf(" %s", &codigocarta1);

    printf("Digite o nome da cidade que a carta corresponderá: \n");
    scanf(" %s", &nomecidade1);

    printf("Digite a quantidade da populacao dessa cidade: \n");
    scanf(" %i", &populacao1);

    printf("Digite a area em km2 da cidade: \n");
    scanf(" %f", &area_km1);

    printf("Digite o pib da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf(" %i", &pontostur1);

    printf("OK! Você já inseriu os dados da carta 01.");
    
    // Codigo da Carta 02
    
    printf("Agora iremos inserir as informações correspondentes a Carta 01!! \n");

    printf("Digite uma letra maiúscula entre A e H (ela irá corresponder à carta 01): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (sendo o código correspondente a letra inserida anteriormente + um numero de 01 a 04): \n");
    scanf(" %s", &codigocarta2);

    printf("Digite o nome da cidade que a carta corresponderá: \n");
    scanf(" %s", &nomecidade2);

    printf("Digite a quantidade da populacao dessa cidade: \n");
    scanf(" %i", &populacao2);

    printf("Digite a area em km2 da cidade: \n");
    scanf(" %f", &area_km2);

    printf("Digite o pib da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf(" %i", &pontostur2);

 return 0;

} 
