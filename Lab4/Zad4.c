#include "Funkcije.h"
#include "Polynomial.c"
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char** argv){
	Poly poly1 = {.baza = 0, .exp = 0, .next = NULL};
	Poly poly2 = {.baza = 0, .exp = 0, .next = NULL};
	Poly zbroj = {.baza = 0, .exp = 0, .next = NULL};
	Poly umnozak = {.baza = 0, .exp = 0, .next = NULL};
	char buff1[MAX], buff2[MAX];

	ProcitajDatoteku("polinom1.txt", buff1, &poly1);
	ProcitajDatoteku("polinom2.txt", buff2, &poly2);
	printf("Polinom 1: ");
	Ispis(poly1.next);
	printf("Polinom 2: ");
	Ispis(poly2.next);

	ZbrojiPolinome(&poly1, &poly2, &zbroj);
	printf("Zbroj polinoma: ");
	Ispis(zbroj.next);

	PomnoziPolinome(&poly1, &poly2, &umnozak);
	printf("Umnozak polinoma: ");
	Ispis(umnozak.next);

	OslobodiMemoriju(&poly1);
	OslobodiMemoriju(&poly2);
	OslobodiMemoriju(&zbroj);
	OslobodiMemoriju(&umnozak);
	return 0;
};

