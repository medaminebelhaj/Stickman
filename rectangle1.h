 class rectangle1:public figure2{
		public:rectangle1(int xc, int yc, int couleur, int a1, int b1)
	:figure2(xc, yc, couleur, a1, b1){
		  
	}
	
	void dessiner(fenetre f){
		      for(int i=0;i<a;i++){
   	f.allume(x+i,y,5);
   	
   }
    for(int i=0;i<b;i++){
   	f.allume(x,y+i,5);
   	 }
    for(int i=0;i<a;i++){
   	f.allume(x+i,y+b,5);
   	 }
   	for(int i=0;i<b;i++){
   	f.allume(x+a,y+i,5);
   	 }
	 }
	 
};
