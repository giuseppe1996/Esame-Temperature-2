#pragma once
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int DIM = 50;
typedef char stringa[DIM];
typedef int vettore[DIM];

struct info_citta {
	stringa citta;
	stringa mese;
	int temperatura;

};

info_citta vett_temperature[DIM];



//prototipi funzioni

//legge i dati da file e li memorizza nella struct
void leggi_dati(int&, info_citta vett_temperature);
//calcola la media delle temperature per la città indicata
float calcola_media_temp(int, stringa);
//calcola le temperature maggiori di quella indicata
void calc_temp_maggiori(int, int, info_citta vett_temperature[],vettore temp_mag[]);
//stampa a video un vettore
void stampa_vett(const vettore);