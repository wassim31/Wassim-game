#include <stdio.h>
#include <stdlib.h>
int main() {

printf("                    =====Bienvenue Chez Votre Application=====\n");
printf("                    =====Calculatrice De Votre Moyene===== \n");
printf("                    =====Premiere Annee Secondaire===== \n\n");
int math = 0, phisic = 0, sience = 0, arabe = 0, english = 0, french = 0, tech = 0, islamic = 0, sport = 0, histoire = 0;

printf("         =====Entrez La Moyene Du Math=====\n");
scanf("%d", &math);
printf("         =====Entrez La Moyene Du phisic=====\n");
scanf("%d", &phisic);
printf("         =====Entrez La Moyene Du Sience=====\n");
scanf("%d", &sience);
printf("         =====Entrez La Moyene Du Arabe=====\n");
scanf("%d", &arabe);
printf("         =====Entrez La Moyene Du Anglais=====\n");
scanf("%d", &english);
printf("         =====Entrez La Moyene Du Francais=====\n");
scanf("%d", &french);
printf("         =====Entrez La Moyene Du Education Civique=====\n");
scanf("%d", &tech);
printf("         =====Entrez La Moyene Du Education Islamic=====\n");
scanf("%d", &islamic);
printf("         =====Entrez La Moyene Du Sport=====\n");
scanf("%d", &sport);
printf("         =====Entrez La Moyene Du Histoire Geo=====\n");
scanf("%d", &histoire);
int math1 = math * 5;
int phisic1 = phisic * 4;
int sience1 = sience * 4;
int arabe1 = arabe * 3;
int english1 = english * 2;
int french1 = french * 2;
int tech1 = tech * 2;
int islamic1 = islamic * 2;
int sport1 = sport * 2;
int histoire1 = histoire * 2;
double sum = math1 + phisic1 + sience1 + arabe1 + english1 + french1  + tech1 + islamic1 + sport1 + histoire1;
double sum1 = sum / 28;
printf("La resutlat est %f" ,sum1);
return 0;

}
