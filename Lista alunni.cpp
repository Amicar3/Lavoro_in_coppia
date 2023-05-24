//inserire una lista di nomi e cognomi all'interno di un file, dare la possibilit� di leggere o scrivere, se alla prima dice leggere dire file vuoto,se sceglie scrivere chiedere quanti nomi inserire
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Funzione per scrivere la lista di nomi e cognomi in un file
void scriviLista()
{
ofstream myfile("lista.txt");

if (myfile.is_open())
{
    int numNomi;
    string nome, cognome;

    cout<<"Quanti nomi vuoi inserire nella lista? ";
    cin>>numNomi;

    for (int i=0; i<numNomi; i++)
    {
        cout<<"Inserisci il nome e cognome della persona " << i + 1 << ": ";
        cin>>nome >> cognome;

        myfile<<nome<< " " <<cognome <<endl;
    }

    cout << "La lista e' stata scritta nel file con successo." << endl;
    myfile.close();
}
else
{
    cout << "Impossibile aprire il file." << endl;
}
}

// Funzione per leggere la lista di nomi e cognomi da un file
void leggiLista()
{
ifstream myfile("lista.txt");

if (myfile.is_open())
{
    string riga;
    bool vuoto = true;

    while (getline(myfile, riga))
    {
        vuoto = false;
        cout << riga << endl;
    }

    if (vuoto)
    {
        cout << "Il file e' vuoto." << endl;
    }

    myfile.close();
}
else
{
    cout << "Impossibile aprire il file." << endl;
}
}

int main()
{
int scelta;

do
{
    cout<<"Cosa vuoi fare? (1 = Scrivere lista, 2 = Leggere lista) "<<endl;
    cin >> scelta;

    switch (scelta)
    {
        case 1:
            scriviLista();
            break;

        case 2:
            leggiLista();
            break;

    }
} while (scelta != 0);

return 0;
}
