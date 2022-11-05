#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
        char scelta= {'\0'};
        menu ();
        scanf ("%c", &scelta);

        switch (scelta)
        {
                case 'A':
                moltiplica();
                case 'a':
                moltiplica();
                break;
                case 'B':
                dividi();
                case 'b':
                dividi();
                break;
                case 'C':
                ins_string();
                case 'c':
                ins_string();
                break;
        }

return 0;

}


void menu ()
{
        
        printf ("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
        printf ("Come posso aiutarti?\n");
        printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

return; 

}


void moltiplica ()
{
        int  a,b = 0;
        printf ("Inserisci i due numeri da moltiplicare:");
        printf ("\n\nPrimo fattore: ");
        scanf ("%d", &a);
        printf ("\nSecondo fattore: ");
        scanf ("%d", &b);

        int prodotto = a * b;

        printf ("\nIl prodotto tra %d e %d e': %d", a,b,prodotto);

return;

}


void dividi ()
{
        int  a,b = 0;
        printf ("Inserisci il numeratore: ");
        scanf ("%d", &a);
        printf ("\nInserisci il denominatore: ");
        scanf ("%d", &b);

        float divisione = (float)a / (float)b;

        printf ("La divisione tra %d e %d e': %f", a,b,divisione);

return;

}





void ins_string () 
{
        char stringa[10];
        printf ("Inserisci la stringa: ");
        scanf ("%s", &stringa);
printf ("\nTesto inserito: %s", stringa);

return;
}
