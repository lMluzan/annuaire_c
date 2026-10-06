#ifndef DENICHER_H_INCLUDED
#define DENICHER_H_INCLUDED
#include <string.h>
#include "trnom.h"
#include "rechersup1.h"
#include "rechermodif1.h"
int quitte;
void trouver(){
int i,option;
char numre[10];
char noma[30];
char numeroa[10];
char maila[30];

system("cls");quitte=0;

      printf("\n\n\t\t     ______________________________________  ");
              printf("\n\t\t     °                                    °");
              printf("\n\t\t     °              RECHERCHE             ° " );
              printf("\n\t\t     °____________________________________° \t\t\n ");

               printf("\t\t  ____________________________________________ \n");
               printf("\t          °                                          °\n");
               printf("\t          °   .1  recherche contact par nom          °\n");
               printf("\t          °                                          °\n");
               printf("\t          °   .2  recherche contact par numero       °\n");fflush(stdin);
               printf("\t          °__________________________________________°\n\n");

               printf("\t\t  entrer votre choix: ");
               scanf("%d",&option);

              if(option==1){
                Trnom();
              }

              if(option==2){

                    system("cls");

      printf("\n\n\t\t   ______________________________________  ");
              printf("\n\t\t   °                                    °");
              printf("\n\t\t   °              RECHERCHE             ° " );
              printf("\n\t\t   °____________________________________° \t\t ");



printf("\n\n\t\t    ENTRER TEL: ");
scanf("%s",rechm);


FILE* tel;
tel=fopen("annuaire.txt","r+");
i=1;
 while(fscanf(tel,"%s%s%s",noma,numeroa,maila)!=EOF){

 if(strcmp(numeroa,rechm)==0){
i=2;

                 printf("\n\t       _________________________________________\n\t");
           printf("       °                                         \n\t");
           printf("       ° %s     \n\t",noma);
           printf("       °                                         \n\t");
           printf("       ° %s           \n\t",numeroa);
           printf("       °                                         \n\t");
           printf("       ° %s            \n\t",maila);
           printf("       °__________________________________________°\t");

    }
    }


 if(i==1)
    {
            printf("\n\n\t\t    CONTACT NON REPERTORIER\n\n\n\n\n");
             printf("         \t\t           \n\t");
           printf("        °________________________________________°\t");
    }

 fclose(tel);
              }
              option=i;

              /* introduction de la foctions modifier et supprimer */

             if(i==2){
                    printf("\n\n\t       ____________________________________________\t");
                    printf("\n\t       °                                          °\t");
                    printf("\n\t       ° 1 modifier      2 supprimer      3 sortir°");
                    printf("\n\t       °__________________________________________°\t");

                      printf("\n\n\t\t       entrer votre choix: ");
                      scanf("%d",&option);

                      if(option==1){
                        rechmodif1();
                      }

                      if(option==2){
                        rechs1();
                      }
                       if(option==3){
                       system("cls"); quitte=1;
                      }

             }



    }


#endif // DENICHER_H_INCLUDED
