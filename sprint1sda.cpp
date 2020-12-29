#pragma warning(disable: 4996)
#include <iostream>
#include <string.h>

const unsigned int MAX_LETTRES = 15;
const unsigned int MAX_MOTS = 20;
using namespace std;

typedef char Mot[MAX_LETTRES + 1];

struct Liste {
	Mot tab_mots[MAX_MOTS + 1];
	unsigned int nb_mots;
	unsigned int nb_points;
};

void comptage_de_points(int nb_lettres_mot, Liste& liste);

void lire(Mot &id, Liste &liste) {
	cin >> id;
	comptage_de_points(strlen(id), liste);
}

void comptage_de_points(int nb_lettres_mot, Liste &liste) {
	int nb_points_mot;
	if (nb_lettres_mot <= 2) {
		nb_points_mot = 0;
	}
	if (nb_lettres_mot== 3 || nb_lettres_mot == 4) {
		nb_points_mot = 1;
	}
	if (nb_lettres_mot == 5) {
		nb_points_mot = 2;
	}
	if (nb_lettres_mot == 6) {
		nb_points_mot = 3;
	}
	if (nb_lettres_mot== 7) {
		nb_points_mot = 5;
	}
	if (nb_lettres_mot == 8) {
		nb_points_mot = 11;
	}
	liste.nb_points += nb_points_mot;
}

int main() {
	Mot buffer;
	Liste liste = { 0, 0 };
	while (strcmp(buffer, "*") != 0) {
		lire(buffer, liste);
	}
	cout << liste.nb_points;
	return 0;
}