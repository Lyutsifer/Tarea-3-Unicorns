#include <stdio.h>
#include <stdlib.h>
#include "hashmap.h"
#include "funciones.h"
int main()
{
    int option;
    HashMap * Ciudades = createMap(200);
    while (1){
        printf("\nWelcome to the Unicorn's City (n _ n) What would you like to do?  \n\n");
        printf("Option 1 <3 : Import cities from a file \n");
        printf("Option 2 <3 : Show the nearest city \n");
        printf("Option 3 <3 : Create a route \n");
        printf("Option 4 <3 : Search the shortest route between cities  \n");
        printf("Option 5 <3 : Best circuit \n");
        scanf ("%d", &option);

        switch (option){
            case 1: ImportarCiudades(Ciudades);
            break;
            /* case 2:
            break;
            case 4:
            break
            case 3:
            break;
            case 4:
            break;
            case 5:
            break; */
        }

    }
    return 0;
}
