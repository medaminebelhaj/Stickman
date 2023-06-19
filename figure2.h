 
 class figure2 {
 public:	
 int type,x,y,a,b,coul,x1,y1;
 
virtual void dessiner(fenetre f)=0;
//------------------------------------------------------------------------------------------
 void deplacer(int dx,int dy,fenetre f) 
 {   
 	x=x+dx;
 	y=y+dy;
 }
 //----------------------------------------------------------------------------------
 int  get_x_centre(void)   {
 return x1;
 }
 //-------------------------------------------------------------------------------------
   figure2(int xc, int yc, int couleur, int l, int h){
  x=xc;
  y=yc;
  x1=x;
  y1=y;
  coul=couleur;
  a=l;
  b=h;
   if(a==0)
  type=1;
  else
  type=2;
 }
//------------------------------------------------------------------------------------------------
void deplacerTriangle(int cote, fenetre f,int i,int sense) 
 {
 	
 
 
	 		   // deplacer(i,-2*i+y+2*x,f);
	 		   if(sense==0){
				
	 		    x=i;
	 		    y=-i+y1+x1;
	 		}
	 		
	 		 else if(sense==1){
				
	 		    x=i;
	 		    y=i+y1-x1-2*cote;
	 		}
	 		else{
	 			x--;
			 }
	 		    //dessiner(f);
	
 }
//----------------------------------------------------------------------------------------------
};
