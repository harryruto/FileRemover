#include <stdio.h>
#include <stdlib.h>

int main()
{
char nomFichier[100] =  {0};

printf("Nom du fichier a supprimer : ");
scanf("%s", nomFichier);
FILE* fichier = fopen(nomFichier, "r+");


if (fichier != NULL) {
    fclose(fichier);
    remove(nomFichier);
} else {
    printf("Merci de mettre ce .exe dans le meme dossier que le fichier a supprimer\n\n");
    }

system("pause");
return 0;
}

