class BonHomme2{
	
	fenetre f ;
	int xcentre,ycentre;
	public : droite *main1,*main2,*pied1,*pied2;
	rectangle1 *corps;
	cercle1 *tete;
	
	//----------------------------------------------------------------------------------------------
	 	BonHomme2(fenetre f1,int xcentre1,int ycentre1){
	 		xcentre=xcentre1;
	 		ycentre=ycentre1;
	 		
			 f=f1;
		 }
		 		 
//----------------------------------------------------------------------------------------------

void dessiner2(){
int a=50;
int b =100;

int R=27;

  tete=new cercle1(xcentre+R,ycentre-R,4,R*2);	
   tete->dessiner(f);
   corps=new rectangle1(xcentre,ycentre,4,a,b);
   corps->dessiner(f);
   pied1=new droite(xcentre,ycentre+b,2,0,70);//Droite Verticale (Pied 1)
   pied1->dessiner(f);
   pied2=new droite(xcentre+a,ycentre+b,2,0,70);//Droite Verticale (Pied 2)
   pied2->dessiner(f);
   main1=new droite(xcentre,ycentre,1,-1,30);//Droite OUBLIQUE (Pied 1)
   main1->dessiner(f);
   main2=new droite(xcentre+a,ycentre,-1,1,30);//Droite OUBLIQUE (Pied 1)
   main2->dessiner(f);	
}

//----------------------------------------------------------------------------------------------
void dessigner(){
   tete->dessiner(f);
   corps->dessiner(f);
   pied1->dessiner(f);
   pied2->dessiner(f);
   main1->dessiner(f);
   main2->dessiner(f);	
}
//----------------------------------------------------------------------------------------------		 
void deplacer(int dx,int dy){

			cleardevice(); 
			tete->deplacer(dx,dy,f);
			corps->deplacer(dx,dy,f);
			main1->deplacer(dx,dy,f);
			main2->deplacer(dx,dy,f);
			pied1->deplacer(dx,dy,f);
			pied2->deplacer(dx,dy,f);
			dessigner();
			
		}

//----------------------------------------------------------------------------------------------
void deplaceHorizontal(int dep){
	int i=0;
	while(i<dep){
		deplacer(i,0);
		delay(100);
		i=i+1;
	}
}
//---------------------------------------------------------------------------------------------	

//----------------------------------------------------------------------------------------------		
 void deplacerTriangle(int cote) 

 {
 	//cleardevice();
 	
 	
 	for(int i=0;i<=cote;i++){
 	            
 	   cleardevice();
 	   int x1=tete->get_x_centre();
 	   tete->deplacerTriangle(cote,f,x1+i,0) ;
 	   x1=corps->get_x_centre();
 	   corps->deplacerTriangle(cote,f,x1+i,0) ;
 	   x1=main1->get_x_centre();
 	   main1->deplacerTriangle(cote,f,x1+i,0) ;
 	   x1=main2->get_x_centre();
 	   main2->deplacerTriangle(cote,f,x1+i,0) ;
 	   x1=pied1->get_x_centre();
 	   pied1->deplacerTriangle(cote,f,x1+i,0) ;
 	   x1=pied2->get_x_centre();
 	   pied2->deplacerTriangle(cote,f,x1+i,0) ;
 	   dessigner();
			
			// dessiner2();
			 delay(4);
	 }
	
	 for(int i=0;i<=cote;i++){
 	              cleardevice();
 	
		int x1=tete->get_x_centre();;	 
	    tete->deplacerTriangle(cote,f,x1+cote+i,1) ;
	     x1=corps->get_x_centre();
 	   corps->deplacerTriangle(cote,f,x1+cote+i,1) ;
 	    x1=main1->get_x_centre();
 	   main1->deplacerTriangle(cote,f,x1+cote+i,1) ;
 	    x1=main2->get_x_centre();
 	   main2->deplacerTriangle(cote,f,x1+cote+i,1) ;
 	    x1=pied1->get_x_centre();
 	   pied1->deplacerTriangle(cote,f,x1+cote+i,1) ;
 	    x1=pied2->get_x_centre();
 	   pied2->deplacerTriangle(cote,f,x1+cote+i,1) ;
 	   dessigner();
			 // cleardevice();
			// dessiner2();
			 delay(4);
	 }
	
	  for(int i=0;i<=2*cote;i++){
 	         cleardevice();    
 	
	   tete->deplacerTriangle(cote,f,i,3) ;
 	   corps->deplacerTriangle(cote,f,i,3) ;
 	   main1->deplacerTriangle(cote,f,i,3) ;
 	   main2->deplacerTriangle(cote,f,i,3) ;
 	   pied1->deplacerTriangle(cote,f,i,3) ;
 	   pied2->deplacerTriangle(cote,f,i,3) ;
 	   dessigner();
			//  cleardevice();
			//dessiner2();
			 delay(4);
	 }
 		
 	
 }
 
  //----------------------------------------------------------------------------------------------
 void deplacerCercle(int Xcercle,int Ycercle){
 			
 			float teta=0.0;
 			int r = distance(Xcercle,Ycercle);
 			while(teta<2*M_PI){	
 				
			cleardevice();
			
  	            xcentre=r*cos(teta)+Xcercle;
  	            ycentre=r*sin(teta)+Ycercle;
			dessiner2();
			teta=teta+0.1;
			delay(100);
			 }
		
			
		}
//----------------------------------------------------------------------------------------------	
//--------------------------------------------------------------------------------	
int  distance(int xCercle,int yCercle){
  	int d=sqrt(pow(xcentre-xCercle,2)+pow(ycentre-yCercle,2));
  	return d;
  }
//----------------------------------------------------------------------------------------------	
	
};
