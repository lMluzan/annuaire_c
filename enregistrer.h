#ifndef ENREGISTRER_H_INCLUDED
#define ENREGISTRER_H_INCLUDED
#include "entete.h"

 void ajout(){
char nom[30];
char mail[30];
char numero[10];
FILE *tel;
      printf("\n\n\t\t    __________________________________  ");
              printf("\n\t\t    °                                °");
              printf("\n\t\t    °        parametre contact       ° " );
              printf("\n\t\t    °________________________________° \t\t ");

    printf("\n\n\t\t    NOM: ");
    scanf("%s",nom);

      tel=fopen("annuaire.txt","a+");

    fprintf(tel,"\n\n\t%s",nom);

    printf("\n\t\t    Tel: ");
    scanf("%s",numero);

    fprintf(tel,"\n\t%s",numero);

    printf("\n\t\t    EMAIL: ");
    scanf("%s",mail);

    fprintf(tel,"\n\t%s",mail);
    printf("\n\t\t    °________________________________° \t\t ");
    fclose(tel);

}



#endif // ENREGISTRER_H_INCLUDED
