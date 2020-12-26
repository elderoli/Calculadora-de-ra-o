
#include <stdio.h>

int main() {

        int tipo;
        int tam;
        int fin;


do{ // adicionando retorno pro começo do codigo

        printf("Olá. Obrigado por vir!\n"); /* boas vindas para prender a atenção*/
        printf("O seu animal de estimacao é gato ou cachorro?\nDigite 1 para Cachorro e 2 para gato\n");
        scanf("%i", &tipo); 

    if (tipo == 1) /*caso seja cachorro*/
    {
   
        printf("Voce deve ser bem feliz com seu caozinho =D\n");
        printf("agora me diz qual o peso, em kilos, do seu animal:\n");
        scanf("%i", &tam); /* a quantidade de ração não está certa. É apenas um teste*/

        if (tam < 3)
            printf("Doguinhos pequenos tem muita energia, entao voce deve alimenta-lo com até 67g de ração dividida em 3 porcoes no dia.\n");
        
            else if(tam > 3 && tam <= 7)
                printf("Seu Doguinho ja e grandinho. Coloque de 67g a 112g de racao, ao dia, dividido em 3 porcoes.\n");

            else if(tam > 7 && tam <= 13)
            printf("Seu Dog e gigante hahaha! precisa de 112g a 184g de racao, ao dia, dividido em 3 porcoes\n");

            else if(tam >13 && tam <= 22)
            printf("Seu Dog e gigante hahaha! precisa de 184g a 265g de racao, ao dia, dividido em 3 porcoes\n");

            else if(tam >22 && tam <= 38)
            printf("Seu Dog e gigante hahaha! precisa de 265g a 399 g de racao, ao dia, dividido em 3 porcoes\n");

            else if(tam >38)
            printf("Seu Dog e gigante hahaha! precisa de 399g a 479 g de racao, ao dia, dividido em 3 porcoes\n");
    }
    if (tipo ==2) /* caso seja gato*/
    {
        printf(" Seu gatinho(a) deve ser uma graca!\n");

        printf("agora me diz qual o peso, em kilos, do seu animal:\n");
        scanf("%i", &tam);

    if (tam <= 3)
        printf("Gatos pequenos tem muita energia, entao voce deve alimenta-lo com 40g a 45g de ração dividida em 3 porcoes no dia.\n");
     
        else if(tam > 3 && tam <= 4)
            printf("Seu gato ja e grandinho. Coloque 55g a 70g de racao, ao dia, dividido em 3 porcoes.\n");

        if(tam > 5)
        printf("Seu gato e  gigante, quase um tigre hahaha!\nEle precisa de 75g a 90g de racao, ao dia, dividido em 3 porcoes.\n");
    }

    printf("Muito obrigado por usar a calculadora de racao!\nDigite 5 para finalizar o programa\n");
    scanf ("%i", &fin);
    // adicionando o retorno pro começo do codigo
}while (fin!=5);
        printf("FIM");

    return 0;
}
