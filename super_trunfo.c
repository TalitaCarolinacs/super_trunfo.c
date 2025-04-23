#include <stdio.h>

int main(){

    char carta = 'A01';
    char cart = 'B02';
    char escolha;
    char estado [20];
    char cidade [20];

    int populacao;
    int turismo;

    float area;
    float pib, piB;

    //usando o printf na descrição das variáveis
    //usando o scanf para leitura dos valores
    //usando o printf para imprimir as informações
    
    printf("Digite o código da carta, ex A01\n");
    scanf(" %c", &carta);
    printf("A carta informada foi: %c\n", carta);
    
    printf("Digite o estado, ex SP\n");
    scanf("%s", &estado);
    printf("O estado informado é: %s\n", estado);

    printf("Digite a cidade:\n");
    scanf("%s", &cidade);
    printf("A cidade informada foi: %s\n", cidade);


    printf("Informar a População local:\n");
    scanf("%d", &populacao);
    printf("População informada: %d\n", populacao);

    printf("Total de pontos turisticos: \n");
    scanf("%d", &turismo);
    printf("Turismo local: %d\n",  turismo);

    printf("Área em km²:\n");
    scanf("%f", &area);
    printf("Área|km: %f\n", area);

    printf("Informar o PIB:\n");
    scanf("%f", &pib);
    printf("O PIB informado foi: %f\n", pib);

    //Limpa o buffer
    printf("------------------------------------------\n");

    //Solicitando dados da outra carta com printf e scanf

    printf("Digite o código da carta, ex B02\n");
    scanf(" %c", &cart);
    printf("A carta informada foi: %c\n", cart);
    
    printf("Digite o estado, ex SP\n");
    scanf("%s", &estado);
    printf("O estado informado é: %s\n", estado);

    printf("Digite a cidade:\n");
    scanf("%s", &cidade);
    printf("A cidade informada foi: %s\n", cidade);


    printf("Informar a População local:\n");
    scanf("%d", &populacao);
    printf("População informada: %d\n", populacao);

    printf("Total de pontos turisticos: \n");
    scanf("%d", &turismo);
    printf("Turismo local: %d\n",  turismo);

    printf("Área em km²:\n");
    scanf("%f", &area);
    printf("Área|km: %f\n", area);

    printf("Informar o PIB:\n");
    scanf("%f", &piB);
    printf("O PIB informado foi: %f\n", piB);

    printf("--------------------------------------------------\n");
    //Menu de cartas
    printf("As cartas apresentadas foram: → %c - %c ← \n", carta, cart);
    printf("--------------------------------------------------\n");


    //a carta que tem a maior informação de PIB, será a carta ganhadora do jogo

    printf("Escolha uma Carta ► A ◄ ou ► B ◄ ?\n");
    scanf(" %c", &escolha);
    printf("Sua escolha foi: %c", escolha);
    
    
    //Transformar as letras escolhidas em maiúscula se digitada minúscula
    escolha = (escolha >= 'a' && escolha <= 'b') ? escolha - 32 : escolha;


    printf("A carta vencedora   '\('0')/'     %c \n", escolha);



    //Apenas imprimir a escolha se for A ou B, senão imprimir erro
    
    printf("Carta escolhida: %c\n", escolha);
    printf("Essa opção está %s\n", (escolha == 'A' || escolha == 'B')? "☺" : "░ERRADA|ERROR░");

    return 0;

}

