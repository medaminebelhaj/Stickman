class cercle1:public figure2{
		public:cercle1(int xc, int yc, int couleur, int a1):
	figure2(xc, yc, couleur, a1, 0){
		  
	}
	
	void dessiner(fenetre f){
		     int r=a/2;   // a c'est le diametre du cercle , r c est le rayon
     for(int i=x-r;i<x+r;i++){
     	int y1=y+sqrt(pow(r,2)-pow(i-x,2));
     	int y2=y-sqrt(pow(r,2)-pow(i-x,2));
     	f.allume(i,y1,5);
     	f.allume(i,y2,5);
     	
	 }
	}
};
