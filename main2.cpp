#include <iostream>
#include <graphics.h>
#include <math.h>
#include "fenetre.h"
#include "figure.h"
#include "figure2.h"
#include "BonHomme.h"
#include "cercle1.h"
#include "droite.h"
#include "rectangle1.h"
#include "BonHomme2.h"
//
//
#include "cmath"
#include "iostream"
using namespace std;
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
int main() {
figure Fig[6];
	
fenetre f ;
int a=50;
int b =100;
int x=400;
int y=300;
int R=27;


droite d(x,y,0,a,b);
rectangle1 h(x,y,0,a,b);

f.ouvrir_graphique();

BonHomme2 bon(f,200,200);
bon.dessiner2();
int xCercle=300;
int yCercle=300;

//bon.deplacerCercle(xCercle,yCercle);
int choix ;
cout<<"Choisir un Trajetctoire \n";
cout<<"1- Pour un Trajetctoire Horizontal \n";
cout<<"2- Pour un Trajetctoire Triagulaire \n";
cout<<"3- Pour un Trajetctoire Cerculaire \n";
cin>>choix;
switch(choix){
	
	case(1):bon.deplaceHorizontal(40);break;
	case(2):bon.deplacerTriangle(60);break;
	case(3): bon.deplacerCercle(xCercle,yCercle);break;
}


	getch();
	return 0;
}
