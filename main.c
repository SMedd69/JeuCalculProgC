#include <stdio.h>
#include "player.h"

int main(void)
{
    selem();
    quelAge();
    jeuCalcul();
    printf("\n---------------------------------\n");
    printf("\nNom du fichier : %s\n", __FILE__);
    printf("Nous sommes le : %s\t", __DATE__);
    printf("Il est : %s\n", __TIME__);
    
    
    return 0;
}
