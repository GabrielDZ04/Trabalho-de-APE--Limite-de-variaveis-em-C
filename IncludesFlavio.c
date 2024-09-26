#include <stdio.h>

int encma(int A, int B){

return (A > B) ? A : B;

}

int main (){
    
    int A, B;
    int VF = encma(A, B);

    printf("Escreva um numero:");
    scanf("%d", &A, &B);

    printf ("Escreva um numero:");
    scanf("%d", &B);

    printf("O maior numero e: %d", VF);


    return 0;
}