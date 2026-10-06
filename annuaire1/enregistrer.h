#ifndef ENREGISTRER_H_INCLUDED
#define ENREGISTRER_H_INCLUDED
#include "entete.h"

 void ajout(){
char nom[30],NOM[30];
char mail[30],MAIL[30];
char numero[10],NUMERO[10];
int i;
FILE *tel;
      printf("\n\n\t\t        __________________________________  ");
              printf("\n\t\t        °                                °");
              printf("\n\t\t        °        parametre contact       ° " );
              printf("\n\t\t        °________________________________° \t\t ");

    printf("\n\n\t\t        NOM: ");
    scanf("%s",NOM);

      tel=fopen("annuaire.txt","a+");


    printf("\n\t\t        Tel: ");
    scanf("%s",NUMERO);


    printf("\n\t\t        EMAIL: ");
    scanf("%s",MAIL);

    while(fscanf(tel,"%s%s%s",nom,numero,mail)!=EOF){
           if(strcmp(numero,NUMERO)==0 && strcmp(nom,NOM)!=0){
              i=1;
     printf("\n\t\t        LE NUMERO EST DEJA ATTRIBUER !!! ");
           }

    }
    printf("\n\t\t        °________________________________° \t\t ");
    fclose(tel);

    tel=fopen("annuaire.txt","a+");

    if(i==1){

    }
    else{
         fprintf(tel,"\n\n\t%s",NOM);
        fprintf(tel,"\n\t%s",NUMERO);
        fprintf(tel ,"\n\t%s",MAIL);
    }
    fclose(tel);
}



#endif // ENREGISTRER_H_INCLUDED
