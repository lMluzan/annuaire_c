#ifndef AFFICHER_H_INCLUDED
#define AFFICHER_H_INCLUDED
#include <string.h>
#include "entete.h"

void affiche(){
    int y;
FILE *tel;
     tel=fopen("annuaire.txt","r+");

char noma[30];
char maila[30];
char numeroa[10];

system("cls");
 printf("\n\n\t\t       __________________________________  ");
              printf("\n\t\t       °                                °");
              printf("\n\t\t       °         LISTE CONTACT          ° " );
              printf("\n\t\t       °________________________________° \n\t\t ");


          while(fscanf(tel,"%s%s%s",&noma,&numeroa,&maila)!=EOF){
          y=1;

        printf("\n\t           _________________________________________\n\t");
           printf("           °                                         \n\t");
           printf("           ° %s           \n\t",noma);
           printf("           °                                         \n\t");
           printf("           ° %s            \n\t",numeroa);
           printf("           °                                         \n\t");
           printf("           ° %s           \n\t",maila);
           printf("           °________________________________________°\t");

     }
      if (y!=1){
    printf("\n\n\t\t     liste vide !!! \n\n");
    printf("     \t\t   °_________________________________°\n\n\n\n");

}

    fclose(tel);rename("receuil.txt","annuaire.txt");
}



#endif // AFFICHER_H_INCLUDED
