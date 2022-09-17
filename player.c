#include <stdio.h>
#include "player.h"
void selem(void)
{
    printf("Selemou3aleycoum !!\n");
}

void quelAge(void)
{
    int age;
    printf("Quel age as-tu ? :\n");
    scanf("%d", &age);
    printf("Tu as %d ans, Allahyberek !\n", age);
    
}

int jeuCalcul(void)
{
    int nombre1 = 6;
    int nombre2 = 4;
    
    int nombre3 = 35; 
    int nombre4 = 72;

    int nombre5 = 276;
    int nombre6 = 1368;
    int nombre7 = 3;
    int nombre8 = 3;
    int nombre9 = 7;
    int nombre10 = 9;
    
    int resultat = 10;
    int resultatNv2 = 107;
    int resultatNv3 = 1644;
    int resultatNv4 = 9;
    int resultatNv5 = 63;


    printf("Bienvenue aux Jeu de Calcul\n");
    printf("\n=================> NIVEAU 1 <===========\n");

    printf("\nCombien font : %d + %d = \n", nombre1, nombre2);
    scanf("%d", &resultat);

    if (resultat == nombre1 + nombre2)
    {
        printf("Bien jouer ! Calcul correct\n");
        printf("Le resultat est bien de : %d\n", resultat);
    }
    else
    {
        printf("Calcul FAUX !\n");
        printf("Tu as mis : %d <== Ce n'est pas correct\n", resultat);
        return jeuCalcul();
    }

    printf("\n~~~~~~~~~~~~~~~~> NIVEAU 2 <~~~~~~~~~~~~~~~~\n");

    printf("\nCombien font : %d + %d = \n", nombre3, nombre4);
    scanf("%d", &resultatNv2);

    if (resultatNv2 == nombre3 + nombre4)
    {
        printf("Bien jouer ! Calcul correct\n");
        printf("Le resultat est bien de : %d\n", resultatNv2);
    }
    else
    {
        printf("Calcul FAUX !\n");
        printf("Tu as mis : %d <== Ce n'est pas correct\n", resultatNv2);
        return jeuCalcul();
    }

    printf("\n~~~~~~~~~~~~~~~~> NIVEAU 3 <~~~~~~~~~~~~~~~~\n");
    
    printf("\nCombien font : %d + %d = \n", nombre5, nombre6);
    scanf("%d", &resultatNv3);

    if (resultatNv3 == nombre5 + nombre6)
    {
        printf("Bien jouer ! Calcul correct\n");
        printf("Le resultat est bien de : %d\n", resultatNv3);
    }
    else
    {
        printf("Calcul FAUX !\n");
        printf("Tu as mis : %d <== Ce n'est pas correct\n", resultatNv3);
        return jeuCalcul();
    }

    printf("\n~~~~~~~~~~~~~~~~> NIVEAU 4 <~~~~~~~~~~~~~~~~\n");
    
    printf("\nCombien font : %d x %d = \n", nombre7, nombre8);
    scanf("%d", &resultatNv4);

    if (resultatNv4 == nombre7 * nombre8)
    {
        printf("Bien jouer ! Calcul correct\n");
        printf("Le resultat est bien de : %d\n", resultatNv4);
    }
    else
    {
        printf("Calcul FAUX !\n");
        printf("Tu as mis : %d <== Ce n'est pas correct\n", resultatNv4);
        return jeuCalcul();
    }

    printf("\n~~~~~~~~~~~~~~~~> NIVEAU 5 <~~~~~~~~~~~~~~~~\n");
    
    printf("\nCombien font : %d x %d = \n", nombre9, nombre10);
    scanf("%d", &resultatNv5);

    if (resultatNv5 == nombre9 * nombre10)
    {
        printf("Bien jouer ! Calcul correct\n");
        printf("Le resultat est bien de : %d\n", resultatNv5);
    }
    else
    {
        printf("Calcul FAUX !\n");
        printf("Tu as mis : %d <== Ce n'est pas correct\n", resultatNv5);
        return jeuCalcul();
    } 
}