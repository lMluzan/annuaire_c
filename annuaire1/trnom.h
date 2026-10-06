#ifndef TRNOM_H_INCLUDED
#define TRNOM_H_INCLUDED
#include <string.h>
#include "rechersup.h"
#include "rechermodif.h"

int quit=0;

void Trnom(){

char numre[30];
char noma[30];
char numeroa[12];
char maila[30];
int i,y,option;
system("cls");

      printf("\n\n\t\t     ______________________________________  ");
              printf("\n\t\t     °                                    °");
              printf("\n\t\t     °              RECHERCHE             ° " );
              printf("\n\t\t     °____________________________________° \t\t ");
printf("\n\n\t\t    ENTRER NOM: ");
scanf("%s",rechm);


 /* variable global*/

FILE* tel;
tel=fopen("annuaire.txt","r+");
i=1;

        while(fscanf(tel,"%s%s%s",noma,numeroa,maila)!=EOF){

 if(strcmp(noma,rechm)==0 ){
i=2;

                 printf("\n\t       _________________________________________\n\t");
           printf("       °                                         \n\t");
           printf("       ° %s     \n\t",noma);
           printf("       °                                         \n\t");
           printf("       ° %s           \n\t",numeroa);
           printf("       °                                         \n\t");
           printf("       ° %s            \n\t",maila);
           printf("       °_________________________________________°\t");

    }
    }


 if(i==1)
    {
            printf("\n\n\t\t    CONTACT NON REPERTORIER\n\n\n\n\n");
             printf("         \t\t           \n\t");
           printf("         °________________________________________°\t");

    }

 fclose(tel);


option=i;

              /* introduction de la foctions modifier et supprimer */

             if(i==2){
                    printf("\n\n\t       ____________________________________________\t");
                    printf("\n\t       °                                          °\t");
                    printf("\n\t       ° 1 modifier      2 supprimer      3 sortir°");
                    printf("\n\t       °__________________________________________°\t");

                      printf("\n\n\t\t       entrer votre choix: ");
                      scanf("%d",&option);

                     if(option==3){
                        quit=1;
                      }
                      if(option==1){
                        rechmodif();
                      }

                      if(option==2){
                        rechs();
                      }


             }
}


#endif // TRNOM_H_INCLUDED
