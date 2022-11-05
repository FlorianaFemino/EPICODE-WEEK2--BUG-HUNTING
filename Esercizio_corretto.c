#include <stdio.h>
#include <stdlib.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
        char scelta= {'\0'};
        menu ();
        scanf ("%c", &scelta);
        
        if (scelta != 'A' && scelta != 'a' && scelta != 'B' && scelta != 'b' && scelta != 'C' && scelta != 'c') {
		printf ("A presto!");
        exit;}

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
        
        printf ("***MENU PRINCIPALE***\n\nBenvenuto! Sono un assistente digitale. Posso aiutarti a sbrigare alcuni compiti!\n");
        printf ("Come posso aiutarti?\n\nScegli una tra le opzioni proposte; digita qualsiasi altro tasto per uscire\n");
        printf ("\nA >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
        
}


void moltiplica ()
{
        int  a,b = 0;
        printf ("\nInserisci i due numeri da moltiplicare:");
        printf ("\n\nPrimo fattore: ");
        scanf ("%d", &a);
        printf ("\nSecondo fattore: ");
        scanf ("%d", &b);

        int prodotto = a * b;

        printf ("\nIl prodotto tra %d e %d e': %d", a,b,prodotto);
        
}


void dividi ()
{
        int  a,b = 0;
        printf ("\nInserisci il numeratore: ");
        scanf ("%d", &a);
        printf ("\nInserisci il denominatore: ");
        scanf ("%d", &b);

        float divisione = (float)a / (float)b;

        printf ("La divisione tra %d e %d e': %f", a,b,divisione);

}


void ins_string () 
{
        char stringa[10];
        printf ("\nInserisci la stringa: ");
        scanf ("%s", &stringa);

}
