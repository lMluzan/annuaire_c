#include <stdio.h>
#include <stdlib.h>
#include "entete.h"
#include "AFFICHER.h"
#include "enregistrer.h"
#include "denicher.h"
#include "modifier.h"
#include "supprime.h"
 int main()

   {
        FILE *tel;


                choix=1;
               while(choix!=0){

               printf("\t                        __________\n");
               printf("\t                        °        ° \n");
               printf("\t                        °  MENU  °\n");
               printf("\t                        °________°\n");
               printf("\t       ___________________________________________ \n");
               printf("\t       °                                         °\n");
               printf("\t       °  .1  enrgistrer un contact              °\n");
               printf("\t       °                                         °\n");
               printf("\t       °  .2  voir liste des contact             °\n");
               printf("\t       °                                         °\n");
               printf("\t       °  .3  rechercher un contact              °\n");
               printf("\t       °                                         °\n");
               printf("\t       °  .4  modifier un contact                °\n");
               printf("\t       °                                         °\n");fflush(stdin);
               printf("\t       °  .5  supprimer un contact               °\n");
               printf("\t       °                                         °\n");fflush(stdin);
               printf("\t       °_________________________________________°\n\n");

               printf("\t       entrer votre choix: ");

               scanf("%d",&choix);
               switch(choix){
                         case 1:system("cls"); ajout(); break;    /*fonction ajout possede la fonction menue*/
                         case 2:affiche(); break;
                         case 3:trouver();break;
                         case 4:modif();break;
                         case 5:supprimer();break;
               }
 printf("\n\n\t\t1 MENU \t\t\t\t0 quittez");

 printf("\n\n\t\t  choix attendu :");

 scanf("%d",&choix);

 if(choix==0){
              printf("\n\n\t\t    __________________________________" );
              printf("\n\t\t    °                                °  ");
              printf("\n\t\t    ° voulez vous fermer l'annuaire? °  ");
              printf("\n\t\t____°________________________________°____  ");
              printf("\n\t\t°                                        ° ");
              printf("\n\t        ° 1 annuler\t     °        \t0 fermer °\t\t");
              printf("\n\t\t°________________________________________° ");
               printf("\n\n\t\t  choix attendu :");
              scanf("%d",&choix);
              if (choix==1){  system("cls");  }
              }
              else{
                    system("cls");
              }
 if(choix==0){
    system("cls");

 }
  }
  return 0;
          }




