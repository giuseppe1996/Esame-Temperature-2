#include "Intestazione1.h"

//definizione funzioni
//leggo i dati dal file di testo e li memorizzo nella struct
void leggi_dati(int& riemp, info_citta vett_temperature[]) {
	ifstream input;
	input.open("dati.txt");
	//controllo che l'apertura del file vada a buon fine altrimenti chiudo 
	if (input.fail()) {
		cout << "Errore nell'apertura del file! ";
		input.close();
		exit(5); //il 5 è per riconoscere che l'errore è nel file e non in altro...
	}
	int i = 0;
	while (!input.eof()) {
		input >> vett_temperature[i].citta;
		input >> vett_temperature[i].mese;
		input >> vett_temperature[i].temp;
		i++;

	}
	riemp = i;
}

float calcola_temp_maggiori(int riemp, stringa nome_citta) {
	int somma, num;
	somma = num = 0;
	float media;
	for (int i = 0;i < riemp;i++) {
		if (strcmp(vett_temperature[i].citta, nome_citta) == 0) {
			num++;
			somma = somma + vett_temperature[i].temperatura;

		}
	}
	media = float(somma) / num;
	return media;
}

void calc_temp_maggiori(int riemp, const info_citta vett_temperature[], vettore temp_mag, int temperatura) {
	int i, j = 0;
	for (i = 0;i < riemp;i++) {
		if (vett_temperature[i].temperatura > temp;) {
			temp_mag[j] = vett_temperature[i].temperatura;
			j++;

		}

	}
}

void stampa_vett(const vettore v) {
	int i = 0;
	while (v[i] != NULL) {
		cout << v[i] << ' ';
		i++;

	}
}