#ifndef TRNOM_H_INCLUDED
#define TRNOM_H_INCLUDED
#include <string.h>

char rechm[30];

void Trnom(){

char numre[30];
char noma[30];
char numeroa[12];
char maila[30];
int i,y;
system("cls");

      printf("\n\n\t\t   ______________________________________  ");
              printf("\n\t\t   °                                    °");
              printf("\n\t\t   °              RECHERCHE             ° " );
              printf("\n\t\t   °____________________________________° \t\t ");
printf("\n\n\t\t    ENTRER NOM: ");
scanf("%s",rechm);


 /* variable global*/

FILE* tel;
tel=fopen("annuaire.txt","r+");
i=1;

        while(fscanf(tel,"%s%s%s",noma,numeroa,maila)!=EOF){

 if(strcmp(noma,rechm)==0 ){
i=i+1;

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
           printf("         °________________________________________°\t");

    }

 fclose(tel);

}



#endif // TRNOM_H_INCLUDED
