#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
char palavra[21];
char resposta[21];
char letra[21];
char espaco[21]="*";
char erradas[21];
char tamanho;
int tentativas=5, acertos=0, erros=5;
int cont, corretas;


    printf(">>>>>>>>>>><<<<<<<<<<\n");
    printf(">>> JOGO DA FORCA <<< \n");
    printf(">>>>>>>>>><<<<<<<<<<<\n");

    printf("\nDigite a palavra que deseja: ");
    gets(palavra); // pega a palavra digitada e salva pra retornar a palavra no final //
    system ("cls"); // limpa a tela pra nao aparecer a palavra, para o jogador 2 nao ver //


    for (cont =0; cont<strlen(palavra); cont++) // declarado para aparecer a quantidade de letras em *; e strlen para ficar no mesmo tamanho //
        espaco[cont]='*'; // iguala as variaveis //
        tamanho=strlen(palavra); // define q o tamanho sera o tamanho da palavra

        while (erros > 0) // enquanto tiver erros para gastar //
        {
            corretas =0;
            printf("\n%s\n", espaco); // mostra os ***//
            printf("\nDigite uma letra: "); // uma sugest�o de letra //
            gets(letra); // pega a letra e salva
            printf("\n\tLetra digitada: %s\n", letra); // mostra qual letra digitou

            for (cont =0; cont <strlen(palavra); cont++)
            {
                if (letra[0] == palavra[cont]) // verifica se tem a letra na palavra e troca o ** pela letra
                {
                    espaco[cont] = palavra[cont]; // aqui troca * por letra
                    corretas++; // incrementadores
                    acertos++; // incrementadores
                }
            }

              while (acertos == tamanho)  // verifica se as letras acertadas condizem com a palavra //
                    {
                        printf("\nAcertou a palavra\n");
                        return 0;

                    }
                    if (corretas ==0) // se errar uma letra
                    {
                         printf("\nVoce errou uma letra, ainda tem %d chances", tentativas); // aparece quantas chances ainda tem
                        erradas[erros] = letra[0]; // iguala as variaveis; e ve se tem letras //
                        erros++; // incrementa os erros
                        tentativas--; // decrementa tentativas
                       if (tentativas ==0) // se nao houver mais chances
                        {

                        printf("\nVoce Faleceu\n");
                        printf("\nA palavra era %s\n", palavra);
                        break; // forca a saida
                        }

                       }








        }
}
