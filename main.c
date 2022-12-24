#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include "biblio.h" // fichier contenant les fonctions //




int main()
  {
      int b,n,b1,x; //b est la base de depart , n est le nombre saisi par l'utilisateur , b1 est la base de destination , x est un entier pour savoir si l'utilisateur veut continuer ou non
      char n1[100]; //n1 est  caractere pour stocker le nombre saisi par l'utilisateur

      //cas d erreur si b!=2||8||10||16
   x=1;

   do{      if(x!=0 && x!=1){printf("ERREUR! Veuillez entrer soit 1 pour OUI ou 0 pour NON\n");
                           scanf("%d",&x);}

            else if(x==1){
  printf("Choisissez la base que vous voulez convertir parmi les bases suivantes :\n");
  printf("� Base 2\n");
  printf("� Base 8\n");
  printf("� Base 10\n");
  printf("� Base 16\n");
  scanf("%d",&b);


    if (verif2(b)==true) //appelle a la fonction qui verifie si b est parmi(2,8,10,16)
  {
          if (b==16 ) //nombre saisi par l'utilisateur est une chaine de car
          {
            printf("Entrez un nombre Positif\n");
            scanf("%s",&n1);
            if(verif3(n1)==true){//appelle a la fonction qui verifie si le nombre est sous la forme de la base  //
            printf("Choisissez la base laquelle voulez vous convertir votre nombre :\n");
            printf("� Base 2\n");
            printf("� Base 8\n");
            printf("� Base 10\n");
            printf("� Base 16\n");
            scanf("%d",&b1); //cas d'erreur si b1!=de les bases precedentes ou b = b1

            if (verif2(b1)==true && b1!=b) //appelle a la fonction qui verifie si b est parmi(2,8,10,16)
            {
            switch (b1)
            {
            case 10 :
            b16versb10(n1); //appelle a la fonction qui fait la conversion de la base 16 vers 10
            break;
            case 2 :
            b16versb2(n1); //appelle a la fonction qui fait la conversion de la base 16 vers 2
            break;
            case 8 :
            b16versb8(n1); //appelle a la fonction qui fait la conversion de la base 16 vers 8
            break;
            }
            printf("\nVoulez vous continuer? TAPEZ sur 1 si OUI 0 SINON\n"); //si l'utilisateur veut continuer ou non //
            scanf("%d",&x);
            }
            else
            {
              printf("Veuillez choisir une base differente de la premiere base et parmi la liste suivante :'2,8,10,16'\n");//cas d'erreur si b1!=de les bases precedentes ou b = b1 //
            }
                               }else
            {
             printf("veuillez entrez un nombre qui contient des chiffres entre 0..9 et des lettres entre A..F ou a..f\n"); //cas d'erreur si le nombre n'est pas sous la forme de la base 16 //
            }
         }
         else //si b!=16
         {
             printf("entrez un nombre positif:\n");
             scanf("%d",&n);
            printf("Choisissez la base laquelle voulez vous convertir votre nombre :\n");
            printf("� Base 2\n");
            printf("� Base 8\n");
            printf("� Base 10\n");
            printf("� Base 16\n");
             scanf("%d",&b1);
        if(verif2(b1)==true && b1!=b) //appelle a la fonction qui verifie si b est parmi(2,8,10,16) //
                {
                  if (b==2)
                  {
              if(verif(2,n)==true && n>=0) //appelle a la fonction qui verifie si le nombre est sous la forme de la base 2 //
                {
                  switch (b1)
                  {
                  case 10 :
                  printf("Sa valeur decimal est : %d\n",b2versb10(n)); //appelle a la fonction qui fait la conversion de la base 2 vers 10
                  break;
                  case 8 :
                  printf("Sa valeur octal est : %d \n",b2versb8(n)); //appelle a la fonction qui fait la conversion de la base 2 vers 8
                  break;
                  case 16 :
                  b2versb16(n);
                  }printf("\nvoulez vous continuer? TAPEZ sur 1 si OUI 0 SINON\n"); //si l'utilisateur veut continuer ou non //
                   scanf("%d",&x);
                }
              else //si l'utilisateur saisie un nombre qui contient un chiffre plus grand que la base
                {
                  printf("Veuillez saisir un nombre positif sous la forme da la base que vous avez choisi\n"); //cas d'erreur si le nombre n'est pas sous la forme de la base 2 //
                }
                  }

                else
                if(b==10)
                {
                switch (b1)
                {
                case 2 :
                printf("sa valeur binaire est :%d\n",b10versb2(n)); //appelle a la fonction qui fait la conversion de la base 10 vers 2
                break;
                case 8 :
                printf("sa valeur octal est : %d\n",b10versb8(n)); //appelle a la fonction qui fait la conversion de la base 10 vers 8
                break;
                case 16 :
                b10versb16(n); //appelle a la fonction qui fait la conversion de la base 10 vers 16
                break;
                }printf("\nVoulez vous continuer? TAPEZ sur 1 si OUI 0 SINON\n"); //si l'utilisateur veut continuer ou non //
                scanf("%d",&x);
                }
                else
                if(b==8)
                {
            if(verif(8,n)==true && n>0)
            {
                switch (b1)
                {
                case 10:
                printf("sa valeur decimal est : %d",b8versb10(n)); //appelle a la fonction qui fait la conversion de la base 8 vers 10
                break;
                case 2 :
                printf("sa valeur binaire est : %d",b8versb2(n)); //appelle a la fonction qui fait la conversion de la base 8 vers 2
                break;
                case 16 :
                b8versb16(n); //appelle a la fonction qui fait la conversion de la base 8 vers 16
                break;
                }printf("\nvoulez vous continuer? TAPEZ sur 1 si OUI 0 SINON\n");
                scanf("%d",&x);
            }
           else //erreur si nombre contient un chiffre plus grand que la base
            {
                printf("veuillez saisir un nombre sous la forme da la base que vous avez choisi\n");
            }
               }

            }
              else// si l'utilisateur choisie la 2eme base base !=(2,8,10,16) ou b1=b
              {
              printf("veuillez choisir une base differente de la premiere base et parmi la liste suivante :'2,8,10,16'\n");
              }

              }}
           else // si l'utilisateur choisie la 1ere base !=(2,8,10,16)
            {
            printf("veuillez choisir une base parmi la liste suivante :'2,8,10,16'\n");
            }
   }
   }while(x==1 || (x!=0 && x!=1)); //si l'utilisateur veut continuer ou non //


                           if(x==0) //si l'utilisateur veut quitter le programme //
   {printf("By Abd Raouf Zerkhef & Khalil Lounis\n");} //affichage du nom des auteurs //





    return 0;
}
