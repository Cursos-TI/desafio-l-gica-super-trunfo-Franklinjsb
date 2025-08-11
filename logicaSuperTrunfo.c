#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //atributos carta 1
    char estado[20] = "AMAZONAS";
    char codigo_carta[4] = "A01";
    char cidade[20]="MANAUS";
    int populacao=10000;
    int pontos_turisticos=5;
    float area=500000;
    float pib =12000;
    float densidade;
    float pib_per_capita;
    float super_poder;

    //atributos carta 2
    char estado_2[20]="ACRE";
    char codigo_carta_2[4]="A02";
    char cidade_2[20]="RIO BRANCO";
    int populacao_2=15000;
    int pontos_turisticos_2=3;
    float area_2=3000;
    float pib_2=7000;
    float densidade_2;
    float pib_per_capita_2;
    float super_poder2;

    //variável para comparação
    int resultado;


    //cálculo densidade e pib per capita:
    densidade = populacao/area;

    printf("Densidade Cidade 1= %f\n",densidade);

    pib_per_capita = populacao/pib;

    printf("Pib per Capita Cidade 1= %f\n\n",pib_per_capita);
 

    densidade_2 = populacao_2/area_2;

    printf("Densidade Cidade 2= %f\n",densidade_2);

    pib_per_capita_2 = populacao_2/pib_2;

    printf("Pib per Capita Cidade 2= %f\n\n",pib_per_capita_2);

    

    
    //comparação das cartas
    if (area>area_2)
    {
        printf("Código da Carta Vencedora é: %s\n\n", codigo_carta); 
    }
    else
    {
        printf("Código da Carta Vencedora é: %s\n\n", codigo_carta_2);
    
    }
    
    //Nível Aventureiro
    printf("***Carta 1:***\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome de Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    
    
    printf("\n***Carta 2:***\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_carta_2);
    printf("Nome de Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km² \n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
    

    //Nível Mestre

    //soma dos super poderes
    super_poder  = populacao + area + pib + pontos_turisticos + pib_per_capita + (1/densidade);

    super_poder2 = populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pib_per_capita_2 + (1/densidade_2);

    //comparação dos atributos das cartas
    printf("\n***Comparação de Cartas:***\n");
    
    resultado = populacao>populacao_2;

    if (resultado ==1)
    {
        printf("População: Carta 1 venceu (%d)\n", resultado); 
    }
    else
    {
        printf("População: Carta 2 venceu (%d)\n", resultado); 
    
    }
    
    resultado = area>area_2;

    if (resultado ==1)
    {
        printf("Área: Carta 1 venceu (%d)\n", resultado); 
    }
    else
    {
        printf("Área: Carta 2 venceu (%d)\n", resultado); 
    
    }

    resultado = pib>pib_2;

    if (resultado ==1)
    {
        printf("Pib: Carta 1 venceu (%d)\n", resultado); 
    }
    else
    {
        printf("Pib: Carta 2 venceu (%d)\n", resultado); 
    
    }

    resultado = pontos_turisticos>pontos_turisticos_2;

    if (resultado ==1)
    {
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultado); 
    }
    else
    {
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", resultado); 
    
    }

    resultado = densidade<densidade_2;

    if (resultado ==1)
    {
        printf("Densidade: Carta 1 venceu (%d)\n", resultado); 
    }
    else
    {
        printf("Densidade: Carta 2 venceu (%d)\n", resultado); 
    
    }

    resultado = pib_per_capita>pib_per_capita_2;

    if (resultado ==1)
    {
        printf("Pib per Capita: Carta 1 venceu (%d)\n", resultado); 
    }
    else
    {
        printf("Pib per Capita: Carta 2 venceu (%d)\n", resultado); 
    
    }

    resultado = super_poder>super_poder2;

    if (resultado ==1)
    {
        printf("Super Poder: Carta 1 venceu (%d)\n", resultado); 
    }
    else
    {
        printf("Super Poder: Carta 2 venceu (%d)\n", resultado); 
    
    }
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
