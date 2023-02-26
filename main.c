#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("***DE BINARIO A DECIMAL***\n");
    int tamanio;
    printf("Ingrese la longitud del numero binario: ");
    scanf("%d", &tamanio);
    int vectorBinario[tamanio];

    for(int i=0;i<tamanio;i++){
        printf("NumeroBinario[%d] = ",i);
        scanf("%d", &vectorBinario[i]);
    }

    int k = tamanio-1;
    int numDecimal = 0;
    for(int i=0;i<tamanio;i++){
        numDecimal = numDecimal + vectorBinario[i] * pow(2,k);
        k--;
    }

    printf("NUMERO DECIMAL: %d", numDecimal);

    return 0;
}
