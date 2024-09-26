#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 
#include <math.h>

int func_val(int x, int b) {

    double a0 = 186.752, a1 = -148.235, a2 = 34.5049, a3 = -3.5091, a4 = 0.183166, a5 = -0.00513554, a6 = 0.0000735464, a7 = -4.22038e-7;

    double resultado = a0 + (a1 + b) * x + a2 * pow(x, 2) + a3 * pow(x, 3) + a4 * pow(x, 4) + a5 * pow(x, 5) + a6 * pow(x, 6) + a7 * pow(x, 7);

}

int main() {

    int vezes, i, length, j, decimal, b;
    char hexadecimal[101];
    char dupla[3] = "00";

    printf("Quantas mensagens voce quer decifrar?");
    scanf("%d",&vezes);

    for (i = 0; i <= vezes; i++)
    {
        printf("Digite a mensagem hexadecimal a ser codificada:");
        scanf("%s",hexadecimal);

        printf("Digite a variavel b:");
        scanf("%d",&b);

        length=strlen(hexadecimal);

        for (j = 0; j <=length; j+=2)
        {
            dupla[0] = hexadecimal[j];
            dupla[1] = hexadecimal[j+1];
            decimal = strtol(dupla, NULL, 16);

            if (func_val(j, b) != 0){
                printf("%c", decimal);
            }

            if(decimal == 0){
                break;
            }            
        }
        
        printf("\n \n");
    }

    return 0; 
}