class droite:public figure2 {
	public : droite(int xc, int yc, int couleur, int a1, int b1)
	:figure2(xc, yc, couleur, a1, b1){
		  
	}
	void dessiner(fenetre f){
		if(type==1)  //  Virtucal
   {
    for(int i=0;i<b;i++)
    f.allume(x,y+i,5);
   }
  else if(type==2) // Horizental
   {
   	int k=30;
   
   	if(a==-1){   // Horizental Incliné gauche
   		
   		for(int i=x-k;i<x;i++)
    f.allume(i,a*i+y+x,5);
	   }
	   
	   // Horizental Incliné droite
	   else{
	   		for(int i=x+a;i<x+a+k;i++)
              f.allume(i,(a*i)+y-x-a,5);   // Fonction affine y=(a*i)+y-x-a
	   }
    
	}
}
};
