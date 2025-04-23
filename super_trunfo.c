#include <stdio.h>

int main(){

    char carta [4];
    char cart [4];
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
    scanf("%3s", &carta);
    printf("A carta informada foi: %s\n", carta);
    
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

    //Limpa o buffer, limpar as linhas
    printf("------------------------------------------\n");

    //Solicitando dados da outra carta com printf e scanf

    printf("Digite o código da carta, ex B02\n");
    scanf("%3s", &cart);
    printf("A carta informada foi: %s\n", cart);
    
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
    printf("As cartas apresentadas foram: → A - B ← \n", carta, cart);  
    printf("--------------------------------------------------\n");

    //escolha a carta para ser a vencedora
    printf("Escolha uma Carta ► A ◄ ou ► B ◄ ?\n");
    scanf(" %c", &escolha);
    printf("Sua escolha foi: %c", escolha);   
    
    //Transformar as letras escolhidas em maiúscula se digitada minúscula
    escolha = (escolha >= 'a' && escolha <= 'b') ? escolha - 32 : escolha; 

    //Menu de cartas
    printf("\n>> Dados Carta A - Confira ↓:\n");
    printf("A Carta escolhida: A\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", turismo);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("----------------------------------\n");

    printf("\n>> Dados Carta B, Confira ↓:\n");
    printf("A Carta escolhida: B\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", turismo);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("----------------------------------\n");  

    //Apenas imprimir a escolha se for A ou B, senão imprimir erro
    printf("Carta escolhida: %c\n", escolha);
    printf("Essa opção está %s\n", (escolha == 'A' || escolha == 'B')? "☺" : "░ERRADA|ERROR░");

    printf("A carta vencedora   '\('0')/'     %c \n", escolha);

    return 0;

}
