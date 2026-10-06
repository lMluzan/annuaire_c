#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED


void affiche(){

     tel=fopen("annuaire.txt","a+");
     do{

        fscanf(tel,"%s%s%s",contact.nom,contact.numero,contact.mail);
        printf("\n\t       _________________________________________\n\t");
           printf("       °                                         \n\t");
           printf("       ° %s           \n\t",contact.nom);
           printf("       °                                         \n\t");
           printf("       ° %s           \n\t",contact.numero);
           printf("       °                                         \n\t");
           printf("       ° %s           \n\t",contact.mail);
           printf("       °________________________________________°\t");

     }while(fscanf(tel,"%s%s%s",contact.nom,contact.numero,contact.mail)!=EOF);

    fclose(tel);
}


#endif // CONTACT_H_INCLUDED
