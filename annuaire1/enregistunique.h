#ifndef ENREGISTUNIQUE_H_INCLUDED
#define ENREGISTUNIQUE_H_INCLUDED


#include <string.h>

void seul(){
char noma[30],numeroa[10],maila[30];
   char nom[30];
char numero[10];
  char numre[10];
   char mail[30];
   int i,z;
FILE *tel,*nouv;

nouv=fopen("receuil.txt","w+");
 fclose(nouv);

tel=fopen("annuaire.txt","r+");
nouv=fopen("receuil.txt","a+");

i=0;z=0;
system("cls");

 printf("\n\n\t\t    __________________________________  ");
              printf("\n\t\t    °                                °");
              printf("\n\t\t    °        parametre contact       ° " );
              printf("\n\t\t    °________________________________° \t\t ");
         printf("\n\n\t\t    NOM: ");
    scanf("%s",noma);

    printf("\n\t\t    Tel: ");
    scanf("%s",numeroa);

 printf("\n\t\t    EMAIL: ");
    scanf("%s",maila);



while( fscanf(tel,"%s%s%s",nom,numero,mail)!=EOF){


    if(strcmp(numero,numeroa)!=0){
        fprintf(nouv,"\n\t%s\n",nom);
        fprintf(nouv,"\n\t%s\n",numero);
        fprintf(nouv,"\n\t%s\n",mail);
        }

     if(strcmp(numero,numeroa)==0 && strcmp(nom,noma)!=0){

           i=1;  z=1;                                                     fflush(stdin);

    printf("\n\n\t\t le numero deja attribuer au contact\n");

    printf("\n\t       _________________________________________\n\t");
           printf("       °                                         \n\t");
           printf("       ° %s           \n\t",nom);
           printf("       °                                         \n\t");
           printf("       ° %s            \n\t",numero);
           printf("       °                                         \n\t"); fflush(stdin);
           printf("       ° %s           \n\t",mail);
           printf("       °________________________________________°\t");

            printf("\n\n\t       ____________________________________________\t");
                    printf("\n\t       °                                          °\t");
                    printf("\n\t       ° 1 ecraser                       2 annuler°");
                    printf("\n\t       °__________________________________________°\t");

                    printf("\n\n\t\t  choix attendu : ");
                    scanf("%d",&z);
                    if(z==1){

    fprintf(nouv,"\n\n\t%s",noma);


   fprintf(nouv,"\n\t%s",numeroa);


  fprintf(nouv,"\n\t%s",maila);


     }
     }                                           fflush(stdin);


        }
 fclose(nouv);                                    fflush(stdin);
 fclose(tel);

 if(z==1 && i==1){

tel=fopen("annuaire.txt","w+");
fclose(tel);

nouv=fopen("receuil.txt","r+");
tel=fopen("annuaire.txt","a+");

while(fscanf(nouv,"%s%s%s",nom,numero,mail)!=EOF){


    fprintf(tel,"\n\n\t%s",nom);
        fprintf(tel,"\n\t%s",numero);
        fprintf(tel ,"\n\t%s",mail);
}
fclose(tel);
 fclose(nouv);
nouv=fopen("receuil.txt","w+");fflush(stdin);
 fclose(nouv);fflush(stdin);

printf("\n\t\t     nouveau parametre enregistrer!!! \n "); fflush(stdin);
printf("\n\t\t°_____________________________________° \t\t ");

}else
     if(z==0){   /*enregistrement nouveau contact si numero non deja attribuer*/

        tel=fopen("annuaire.txt","a+");                fflush(stdin);
        fprintf(tel,"\n\n\t%s",noma);
        fprintf(tel,"\n\t%s",numeroa);                 fflush(stdin);
        fprintf(tel,"\n\t%s",maila);                 fflush(stdin);
    fclose(tel);

    printf("\n\t\t    enregistrement reussi!!! \n ");
printf("\n\t\t°_____________________________________° \t\t ");

}
tel=fopen("annuaire.txt","w+");                fflush(stdin);
fclose(nouv);
}


#endif // ENREGISTUNIQUE_H_INCLUDED
