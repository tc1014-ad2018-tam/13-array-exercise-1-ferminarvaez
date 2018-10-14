// Fermín Narváez Reyes A01411229
#include <stdio.h>
#define MAX_SIZE 10000 // Dice que tanta longitud puede tener

int main()
{
    int array[MAX_SIZE]; // Defino variables, le hago caso a la biblioteca
    int i;
    int n;

    printf("Introduce el tamaño del array: "); // Le pido cuanto va a introducir
    scanf("%d", &n);

    printf("Introduce %d de elementos del array : ", n); // Que lo introduzca
    for(i=0; i<n; i++) // Regla
    {
        scanf("%d", &array[i]);
    }

    printf("\nElementos en el array son: "); // Le dice lo que metió
    for(i=0; i<n; i++) // Regla
    {
        printf("%d ", array[i]); // Lo que mostraré en pantalla
    }

    printf("\nDe atrás para adelante sería: ");
    for(i=n; i>=0; i--);{ // Regla
        for(i=n; i>0; i--){ // Regla 
        printf("%d ", array[i-1]); // Output
    }
    }
    return 0;
}

