#ifndef MODIFIER_H_INCLUDED
#define MODIFIER_H_INCLUDED
#include <string.h>
void modif(){
   char nom[30];
char numero[10],NOM[30];
  char numre[10],NUMERO[10];
   char mail[30],MAIL[30];
   int i,y,z,compte,option,trouve=0;
FILE *tel,*nouv;

nouv=fopen("receuil.txt","w+");
 fclose(nouv);

tel=fopen("annuaire.txt","r+");
nouv=fopen("receuil.txt","r+");
system("cls");
  printf("\n\n\t\t        __________________________________  ");
              printf("\n\t\t        °                                °");
              printf("\n\t\t        °       contact a modifier       ° " );
              printf("\n\t\t        °________________________________° \t\t ");
         printf("\n\n\t\t        TEL: ");
    scanf("%s",&numre);
i=0;
while(fscanf(tel,"%s%s%s",nom,numero,mail)!=EOF){

                               y=y+1;
    if(strcmp(numero,numre)!=0){
        fprintf(nouv,"\n\t%s\n",nom);
        fprintf(nouv,"\n\t%s\n",numero);
        fprintf(nouv,"\n\t%s\n",mail);
        }

    else if(trouve==0){ i=1;trouve=1;
            printf("\n\n\t\t        __________________________________  ");
              printf("\n\t\t        °                                °");
              printf("\n\t\t        °        nouveau parametre       ° " );
              printf("\n\t\t        °________________________________° \t\t ");
              z=y;
    printf("\n\n\t\t        NOM: ");
    scanf("%s",&nom);

    printf("\n\t\t        Tel: ");
    scanf("%s",&numero);

    printf("\n\t\t        EMAIL: ");
    scanf("%s",&mail);
     for(compte==0;compte==29;compte++){
      if(compte<=9){NUMERO[compte]=numero[compte]; }
      NOM[compte]=nom[compte]; MAIL[compte]=mail[compte];
     }
  fprintf(nouv,"\n\t%s",nom);
  fprintf(nouv,"\n\t%s",numero);
  fprintf(nouv,"\n\t%s",mail);

     }


        }
 fclose(tel);

                  tel=fopen("annuaire.txt","r+");
                  y=0;
                  while(fscanf(tel,"%s%s%s",nom,numero,mail)!=EOF){
                        y=y+1;
 if(strcmp(numero,NUMERO)==0 && strcmp(nom,NOM)!=0 && y!=z){
             option=1;
     printf("\n\t\t        LE NUMERO EST DEJA ATTRIBUER !!! \n\t\t    MODIFICATION IMPOSSIBLE !!! ");
           }

                  }
 fclose(tel);
 fclose(nouv);


              if(option==0 && i==1){

tel=fopen("annuaire.txt","w+");
fclose(tel);

tel=fopen("annuaire.txt","a+");
nouv=fopen("receuil.txt","a+");

while(fscanf(nouv,"%s%s%s",nom,numero,mail)!=EOF){

    fprintf(tel,"\n\n\t%s",nom);
        fprintf(tel,"\n\t%s",numero);
        fprintf(tel ,"\n\t%s",mail);
}
fclose(tel);
 fclose(nouv);
nouv=fopen("receuil.txt","w+");
 fclose(nouv);
printf("\n\t\t    modification reussi!!! \n ");
printf("\n\t\t    °________________________________° \t\t ");

}
else if(i!=1 && option!=1){
    printf("\n\n\t\t        CONTACT NON REPERTORIER\n\n\n\n\n");
             printf("         \t\t           \n\t");
           printf("             °________________________________________°\t");
}
if(option==1){
    tel=fopen("receuil.txt","w+");
fclose(nouv);
}
}
#endif // MODIFIER_H_INCLUDED
