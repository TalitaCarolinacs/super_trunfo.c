#include <stdio.h>

int main(){
     char peca;

     printf("Escolha a peça para mover → 'T' Torre | 'R' rainha | 'B' bispo | 'C' cavalo: \n");
     scanf(" %c", &peca);

     if ( peca == 'T' || peca =='t'){

//Movimento da Torre 5 casa para direita/linha reta, com FOR
void moverTorre(int casas){
    if (casas > 0){
        printf("%d \n", casas);
        moverTorre(casas - 1);
    }
}

int main(){

   moverTorre(5);

    printf("Contagem regressiva...\n");
    moverTorre(5);}
printf("Moviemnto da TORRE (FOR) :\n");
for (int i = 1; i < 5; i++){
    printf("Torre move para direita %d\n", i); // imprime a direção
}
 } else if ( peca == 'R' || peca =='r') //Movimentando a Rainha com WHILE, andar 8 casas em qualquer direção
{ 
    printf("Movimento da Rainha (DO WHILE):\n");
    int j = 1;
    do { 
    printf("Rainha move para diagonal %d\n", j);
    j++;
    } while ( j <= 8);
} else if ( peca == 'B' || peca == 'b')//Movimento do BISPO com WHILE, anda 7 casas na diagonal
{ printf("Movimento do Bispo (WHILE):\n");
    int k = 1;
    while ( k <= 7){
    printf("Bispo move para diagonal %d\n", k);
    k++;}
    }else if(peca == 'C' || peca == 'c'){
        printf("Movimento do Cavalo (FOR em l):\n");
        int movimentos [8][2] = {{2,1}, {1,2},{-1,2},{-2,1},
            {-2,-1},{-1,-2},{1,-2},{2,-1}};

        {
        for (int m = 0; m < 8; m++)
        {
        printf("Cavalo por ir para: x %d, y %+d\n", movimentos [m]
            [0], movimentos [m][1]); }
        }
} else {
    printf("\n peça inválida, tente novamente.\n");
}

    return 0;
}
