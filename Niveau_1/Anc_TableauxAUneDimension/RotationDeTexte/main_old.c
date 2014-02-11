#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NbChar = 0, NbRotation, i;
    int Charactere_avant[100];
    int Charactere_apres[100];

    scanf("%d", &NbChar);
    scanf("%d", &NbRotation);

    for (i = 0; i <= NbChar; i++)
        scanf ("%c", &Charactere_avant[i]);

    if (NbRotation > NbChar)
        NbRotation = NbRotation % NbChar;
    
    if (NbRotation >= 0)
    {
        for (i = 0; i <= NbChar; i++)
        {
            if (i < NbRotation)
                Charactere_apres[i] = Charactere_avant[i - NbRotation + NbChar+1];
            else
                Charactere_apres[i] = Charactere_avant[i - NbRotation];
        }
    }
    else
    {
        for (i = 0; i < NbChar; i++)
        {
            if (i < (NbRotation + NbChar))
                Charactere_apres[i] = Charactere_avant[i - NbRotation+1];
            else
                Charactere_apres[i] = Charactere_avant[i - NbRotation - NbChar+1];
        }
    }

    for (i = 0; i <= NbChar; i++)
    {
        if (Charactere_apres[i] != '\n')
            printf ("%c", Charactere_apres[i]);
    }
    
    return 0;
}

/*
- Faire un printf pour chaque condition ( Si + ou - ) pour réglé le problème du dernier caractère
- Effectuer le modulo dans la condition ( Si < avec une rotation - ) 
*/
