#include <stdio.h>
#include <stdlib.h>

 void fonctionCarre (float nbr1){

           float nbr2=nbr1*nbr1;
            printf("%f\n ", nbr2);
        }
    void fonctionInverse (int *ptA, int *ptB){

       int nbrZ;

        nbrZ = *ptB;
        *ptB = *ptA;
        *ptA = nbrZ;


        }

    void saisie (int tab[])
    {
       int i;
        for (i=0; i<10; i++)
        {
           scanf("%d", &tab[i]);
           printf("\n");
        }

    }


    void affichage (int tab[])
    {
         int i;
        for (i=0; i<10; i++)
        {
           printf("%d", tab[i]);
           printf("\n");
        }

    }

    float moyenne ( int tab [])
    {
        int moyenne;
        moyenne = tab [1] + tab [2] +tab [3] + tab [4] + tab [5] + tab [6]+ tab [7] + tab [8] + tab [9] + tab [0] ;
        moyenne = moyenne / 10;
    }


    void prixBillets (int *age)
    {

        int prix = 50;
        //int age;


        if ((*age<5)&&(*age>0))
            {
                prix = 0;
                printf("le billet est gratuit \n");
            }
        else  if ((*age<17)&&(*age>=5))
            {
                prix -= prix * 75/100;
                printf("réduction de 75 pourcent, le billet coute %d euros \n", prix);
            }
        else if ((*age<39)&&(*age>=18))
            {
                 prix -= prix * 50/100;
                 printf("reduc de 50 pourcent, le billet coute %d euros \n", prix);
            }
        else if ((*age<60)&&(*age>=39))
            {
                 printf("il n'y a pas de réduc, le billet coute %d euros \n", prix);
            }
        else ( printf("la valeur est impossible"));
    }


int main()
{
  // exo 905

    int age;

    printf (" quel age avez vous ?\n");
    scanf("%d", &age);

    prixBillets(&age);







  /*int tab[10];
  int moyen;

  saisie(tab);
  affichage(tab);
  moyenne(tab);

  moyen = moyenne(tab[10]);
  printf("la moyenne des valeurs est %d", moyen);

 */








  /* exo 1001

  int tableau [5][4];
  int i = 0 ;
  int j = 0 ;

    printf ("choisissez les valeurs a afficher dans chaques cases du tableau \n");

  for (i=0; i<5; i++)
    {
        for (j=0; j<4; j++)
        {
              scanf("%d", &tableau[i][j]);
        }
  }

  for (i=0; i<13; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d \n", tableau[i][j]) ;
        }
    } */









  /*{ // exo du prof

      int nbrA = 25;
      int nbrB = 50;

      int *ptA = &nbrA;
      int *ptB = &nbrB;


      printf("A = %d\n", *ptA);
      printf("B = %d\n", *ptB);

      fonctionInverse(ptA, ptB);

      printf("A = %d\n", *ptA);
      printf("B = %d\n", *ptB);
  }*/













  /*{ // exo 801

      float nbr;
        printf("choisir le nombre que vous voulez elever au carre\n");
        scanf("%f", &nbr);
      fonctionCarre(nbr);

  }*/



  /*{ //exo 706
      float solde=0;
      int nbrChoisi;
      int i=0;

      printf("choisissez au bout de combien de mois voulez vous calculer votre epargne\n ");
      scanf("%d\n", &nbrChoisi);

      while (nbrChoisi>i)
        {
            ++i;

            solde = solde + solde*0.003;

            solde = solde+30;
        }

        printf("votre solde au bout de %d mois est %f euros \n", nbrChoisi, solde);
    }*/




  /*{ //exo 702
     int nbr=2;


    while (nbr<=98)
    {
        printf("%d\n", nbr);
        (nbr = nbr + 4);

    }

   } */
    return 0;
}
