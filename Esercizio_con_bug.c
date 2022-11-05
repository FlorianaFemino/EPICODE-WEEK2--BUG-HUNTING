#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
        char scelta = {'\0'};
        menu ();
        scanf ("%d", &scelta); // Errore: la variabile "scelta" è di tipo char, ma il tipo di argomento specificato dalla funzione scanf è di tipo int

        switch (scelta)
        {
                case 'A':
                moltiplica();
                break;
                case 'B':
                dividi();
                break;
                case 'C':
                ins_string();
                break;
        }

return 0;

}




void menu ()
{
        printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n"); // C'è un errore di ortografia: "assitente" invece di "assistente"
        printf ("Come posso aiutarti?\n");
        printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
        short int  a,b = 0; // Per la casistica in questione è preferibile utilizzare il tipo int
        printf ("Inserisci i due numeri da moltiplicare:");
        scanf ("%f", &a); // Errore: la variabile "a" è di tipo int, mentre il tipo di argomento specificato dalla funzione scanf è di tipo float
        scanf ("%d", &b);

        short int prodotto = a * b; // Per la casistica in questione è consigliabile il tipo int

        printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);

}


void dividi ()
{
        int  a,b = 0;
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a); 
        printf ("Inserisci il denumeratore:"); // Errore: "denumeratore" invece di "denominatore". Inoltre l'indentazione di printf non è precisa
        scanf ("%d", &b);

        int divisione = a % b; // Errore: L'operatore aritmetico corrispondente alla divisione è "/"
                                                // Inoltre, il tipo di variabile int non supporta risultati in numeri decimali, quindi "divisione" deve essere una variabile di tipo float

        printf ("La divisione tra %d e %d e': %d", a,b,divisione); // Il risultato della divisione tra due interi deve essere una variabile di tipo float

}



void ins_string () 
{
        char stringa[10];
        printf ("Inserisci la stringa:");
        scanf ("%s", &stringa);

}
