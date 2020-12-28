#pragma warning(disable: 4996)
#include <iostream>
#include <string.h>

using namespace std;


const unsigned int MAX_LETTRES = 15;
const unsigned int MAX_MOTS = 60;


typedef char Mot[MAX_LETTRES + 1];

struct Liste {
	Mot tab_mots[MAX_MOTS + 1];
	unsigned int nb_mots;
	unsigned int nb_points;
};

bool verification(Liste& liste, Mot& id) {
	unsigned int i;
	for (i = 0; i < liste.nb_mots; i++) {
		if (strcmp(liste.tab_mots[i], id) == 0)
			return true;
	}
	return false;
}


void lire_et_enregistrer(Mot& id, Liste& liste) {
	cin >> id;
	if (strcmp(id, "*") != 0) {
		if (verification(liste, id)==false) {
			strcpy(liste.tab_mots[liste.nb_mots++], id);
		}
	}
}


void tri_alphabetique(Liste& liste) {

}


int main() {
	Mot buffer;
	Liste liste;
	liste.nb_mots = 0;
	liste.nb_points = 0;
	while (strcmp(buffer, "*") != 0) {
		lire_et_enregistrer(buffer, liste);
	}
	for (int i = 0; i < liste.nb_mots; i++) {
		cout << liste.tab_mots[i] << endl;
	}
	return 0;
}