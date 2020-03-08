#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>

void principal();
void caseone(int [][3], int [][3]);
void caseoned(int [][3], int [][3]);
void caseonet(int[][3], int[][3]);
void caseoneti(int[][3], int[][3]);
void casetwo(int [][3], int [][3]);
void especial(int [][3], int[][3]);
void pintarPlano();
void dibujarRecta(float,float,float,float,float,float);

main()
{
	principal();
	system("pause");
	return 0;
}

void principal()
{
	int i,j,a,b;
	int equation_1[1][3];
	int equation_2[1][3];
	float af,bf,c,e,f,g;
	
	printf("\t\t\nEquation´s System´s 2 x 2\n");
	printf("\nax + by = c");
	printf("\na'x + b'y = c'\n");
	//First Equation
	printf("\n\tEquation 1\n");
	printf("Please enter: \n");
	
	//data equation 1
	for(i=0; i<1; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&equation_1[i][j]);
				
		}
		printf("\n");
	}
	printf("\n\tEquation 2\n");
	printf("Please enter: \n");
	// data equation 2
	for(a=0; a<1; a++)
	{
		for(b=0; b<3; b++)
		{
			scanf("%d",&equation_2[a][b]);
				
		}
		printf("\n");
	}		
	af=float(equation_1[0][0]);
	bf=float(equation_1[0][1]);
	c=float(equation_1[0][2]);
	e=float(equation_2[0][0]);
	f=float(equation_2[0][1]);
	g=float(equation_2[0][2]);

	
	if(equation_1[0][0]+equation_2[0][0]==0 && equation_1[0][2]+equation_2[0][2]==0 && equation_1[0][2]+equation_2[0][2]==0)
	{
		printf("Equation with infinity solutions");
	}else if(equation_1[0][0]==1 && equation_2[0][0]!=1)
	{
		caseone(equation_1, equation_2);
	}else 	if(equation_1[0][0]!=1 && equation_2[0][0]==1)
			{
				caseoned(equation_1, equation_2);
			}else if(equation_1[0][0]==1 && equation_2[0][0]==1)
					{
						caseonet(equation_1, equation_2);
					}else if(equation_1[0][0]==1 && equation_2[0][0]==-1)
							{
									caseoneti(equation_1, equation_2);
							}else if(equation_1[0][0]&&equation_2[0][0]!=1)
									{
										casetwo(equation_1, equation_2);	
									}

	pintarPlano();
	dibujarRecta(af,bf,c,e,f,g);	
	getch();
	closegraph();
}

void caseone(int equation_1[][3], int equation_2[][3])
{
	int i,j,a;
	int add1,add2,add3;
	float x,y,aux,mista,mista2;
	int auxfi,xfi,mistake,mistake2;
	//case 1
	if(equation_1[0][0]==1 && equation_2[0][0]!=1)
	{
		for(i=0; i<1; i++)
		{
			for(j=0; j<3; j++)
			{
				equation_1[i][j]=(-equation_2[0][0]*equation_1[i][j]);
			}
		}
		
		//add up 
		add1=equation_1[0][0]+equation_2[0][0];
		//printf("\n\t%d",add1);
		add2=equation_1[0][1]+equation_2[0][1];
		//printf("\t%d",add2);
		add3=equation_1[0][2]+equation_2[0][2];
		//printf("\t%d",add3);
		//Case when h and r have a value different to 0
	
		if(add1==0 &&add2&&add3!=0)
		{
			if(add3%add2==0)
			{
				a=add3/add2;
				mistake=equation_1[0][1]/-equation_2[0][0];
				mistake2=equation_1[0][2]/-equation_2[0][0];	
				auxfi=(mistake*a);
				
				xfi=mistake2-auxfi;
				printf("\n\t*****equation with unique solution*****");
				printf("\n\tValue of X: %d",xfi);
				printf("\n\tValue of Y: %d\n",a);	
			}
			else
			{
				y= float(add3)/float(add2);
				
				mista=equation_1[0][1]/-equation_2[0][0];
				mista2=equation_1[0][2]/-equation_2[0][0];				
				aux=float(mista)*y;
				
				x=float(mista2)-aux;
				printf("\n\t*****equation with unique solution*****");
				printf("\n\tValue of X: %f",x);
				printf("\n\tValue of Y: %f\n",y);
				
			}
		}else if(add1==0&&add2==0 &&add3!=0)
					{
						printf("\nEquation with no solution\n");
					}else if(add1&&add2&&add3==0)
						{
							printf("\nEquation with infinity of solutions\n");
						}
	}
}

void caseoned(int equation_1[][3], int equation_2[][3])
{
	int i,j,l,m,a,cam;
	int add1,add2,add3;
	float x,y,aux,mista,mista2;
	int auxfi,xfi,mistake,mistake2;
	//case 1.1
	if(equation_1[0][0]!=1 && equation_2[0][0]==1)
	{
		//two for are used to change the equations
		for(l=0; l<1; l++)
		{
			for(m=0; m<3; m++)
			{
				cam=equation_1[l][m];
				equation_1[l][m]=equation_2[l][m];
				equation_2[l][m]=cam;
			}
			
		}
		
		for(i=0; i<1; i++)
		{
			for(j=0; j<3; j++)
			{
				equation_1[i][j]=(-equation_2[0][0]*equation_1[i][j]);
			}
		}
		
		//add up 
		add1=equation_1[0][0]+equation_2[0][0];
		//printf("\n\t%d",add1);
		add2=equation_1[0][1]+equation_2[0][1];
		//printf("\t%d",add2);
		add3=equation_1[0][2]+equation_2[0][2];
		//printf("\t%d",add3);
		//Case when h and r have a value different to 0
	
		if(add1==0 &&add2&&add3!=0)
		{
			if(add3%add2==0)
			{
				a=add3/add2;
				mistake=equation_1[0][1]/-equation_2[0][0];
				mistake2=equation_1[0][2]/-equation_2[0][0];	
				auxfi=(mistake*a);
				
				xfi=mistake2-auxfi;
				printf("\n\t*****equation with unique solution*****");
				printf("\n\tValue of X: %d",xfi);
				printf("\n\tValue of Y: %d\n",a);	
			}
			else
			{
				y= float(add3)/float(add2);
				
				mista=equation_1[0][1]/-equation_2[0][0];
				mista2=equation_1[0][2]/-equation_2[0][0];				
				aux=float(mista)*y;
				
				x=float(mista2)-aux;
				printf("\n\t*****equation with unique solution*****");
				printf("\n\tValue of X: %f",x);
				printf("\n\tValue of Y: %f\n",y);
				
			}
		}else if(add1==0&&add2==0 &&add3!=0)
					{
						printf("\nEquation with no solution\n");
					}else if(add1&&add2&&add3==0)
						{
							printf("\nEquation with infinity of solutions\n");
						}
	}
}

void caseonet(int equation_1[][3], int equation_2[][3])
{
	int equationr[1][3];
	int i,j,a;
	int add1,add2,add3;
	float x,y,aux,mista,mista2;
	int auxfi,xfi,mistake,mistake2;
	//case 1
	if(equation_1[0][0]==1 && equation_2[0][0]==1)
	{
		for(i=0; i<1; i++)
		{
			for(j=0; j<3; j++)
			{
				equation_1[i][j]=(-equation_2[0][0]*equation_1[i][j]);
			}
		}
		
		//add up 
		add1=equation_1[0][0]+equation_2[0][0];
		//printf("\n\t%d",add1);
		add2=equation_1[0][1]+equation_2[0][1];
		//printf("\t%d",add2);
		add3=equation_1[0][2]+equation_2[0][2];
		//printf("\t%d",add3);
		//Case when h and r have a value different to 0
	
		if(add1==0 &&add2&&add3!=0)
		{
			if(add3%add2==0)
			{
				a=add3/add2;
				mistake=equation_1[0][1]/-equation_2[0][0];
				mistake2=equation_1[0][2]/-equation_2[0][0];	
				auxfi=(mistake*a);
				
				xfi=mistake2-auxfi;
				printf("\n\t*****equation with unique solution*****");
				printf("\n\tValue of X: %d",xfi);
				printf("\n\tValue of Y: %d\n",a);	
			}
			else
			{
				y= float(add3)/float(add2);
				
				mista=equation_1[0][1]/-equation_2[0][0];
				mista2=equation_1[0][2]/-equation_2[0][0];				
				aux=float(mista)*y;
				
				x=float(mista2)-aux;
				printf("\n\t*****equation with unique solution*****");
				printf("\n\tValue of X: %f",x);
				printf("\n\tValue of Y: %f\n",y);
				
			}
		}else if(add1==0&&add2==0 &&add3!=0)
					{
						printf("\nEquation with no solution\n");
					}else if(add1&&add2&&add3==0)
						{
							printf("\nEquation with infinity of solutions\n");
						}
	}		
}

void caseoneti(int equation_1[][3], int equation_2[][3])
{
	
	int i,j,a;
	int add1,add2,add3;
	float x,y,aux,mista,mista2;
	int auxfi,xfi,mistake,mistake2;
	
	if(equation_1[0][0]==1 && equation_2[0][0]==-1)
		{
			printf("\nEquation with infinity of solutions");
				//add up
				add1=equation_1[0][0]+equation_2[0][0];
				printf("\n\t%d",add1);
				add2=equation_1[0][1]+equation_2[0][1];
				printf("\t%d",add2);
				add3=equation_1[0][2]+equation_2[0][2];
				printf("\t%d",add3);
				if(add1==0&&add2==0 &&add3!=0)
					{
						printf("\nEquation with no solution\n");
					}else if(add1&&add2&&add3==0)
						{
							printf("\nEquation with infinity of solutions\n");
						}
				
		}
}
void casetwo(int equation_1[][3], int equation_2[][3])
{
	int i,j,a;
	int add1,add2,add3;
	float x,y,aux,mista,mista2;
	int auxfi,xfi,mistake,mistake2;
	int des;
	int mistakecero=equation_1[0][1];
	int mistakecero2=equation_1[0][2];
	int mistakecero3=equation_1[0][0];
	
	
	if(equation_1[0][0]&&equation_2[0][0]!=1)
	{
		if(equation_1[0][0] && equation_2[0][0] >0)
		{
			for(i=0; i<1; i++)
			{
				for(j=0; j<3; j++)
				{
				equation_1[i][j]=(-equation_2[0][0]*equation_1[i][j]);
			//	printf("\t%d",equation_1[i][j]);
				}	
			}
			
			des=equation_1[0][0]/-equation_2[0][0];//recuperate original value of e1_[0][0]			
			for(i=0; i<1; i++)
			{
				for(j=0; j<3; j++)
				{
				equation_2[i][j]=(des*equation_2[i][j]);
				//printf("\t%d",equation_2[i][j]);
				}	
			}
			//add up 
			add1=equation_1[0][0]+equation_2[0][0];
			printf("\n\t%d",add1);
			add2=equation_1[0][1]+equation_2[0][1];
			printf("\t%d",add2);
			add3=equation_1[0][2]+equation_2[0][2];
			printf("\t%d",add3);
			//Case when h and r have a value different to 0

			if(add1==0 &&add2&&add3!=0)
			{
				if(add3%add2==0)
				{	
					a=add3/add2;
							auxfi=(mistakecero*a);
							xfi=((mistakecero2-auxfi)/mistakecero3);
							printf("\n\t*****equation with unique solution*****");
							printf("\n\tValue of X: %d ",xfi);
							printf("\n\tValue of Y: %d\n",a);	
							}
							else
						{
							y= float(add3)/float(add2);			
							aux=(float(mistakecero)*y);
				
							x=float(mistakecero2-aux)/float(mistakecero3);
							printf("\n\t*****equation with unique solution*****");
							printf("\n\tValue of X: %f",x);
							printf("\n\tValue of Y: %f\n",y);
				}
			}else if(add1==0&&add2==0 &&add3!=0)
					{
						printf("\nEquation with no solution\n");
					}else if(add1&&add2&&add3==0)
						{
							printf("\nEquation with infinity of solutions\n");
						}
						//case2.2
		}else if(equation_1[0][0] && equation_2[0][0] <0)
				{
					for(i=0; i<1; i++)
					{
						for(j=0; j<3; j++)
						{
							equation_1[i][j]=(-equation_2[0][0]*equation_1[i][j]);
						}	
					}
						des=-1*(equation_1[0][0]/-equation_2[0][0]);//recuperate original value of e1_[0][0]			
					for(i=0; i<1; i++)
					{
						for(j=0; j<3; j++)
						{
							equation_2[i][j]=(des*equation_2[i][j]);
						}	
					}
					
						add1=equation_1[0][0]-equation_2[0][0];
						printf("\n\t%d",add1);
						add2=-1*(equation_1[0][1]-equation_2[0][1]);
						printf("\t%d",add2);
						add3=-1*(equation_1[0][2]-equation_2[0][2]);
						printf("\t%d",add3);
						
						if(add1==0 &&add2&&add3!=0)
						{
							if(add3%add2==0)
							{	
							a=add3/add2;
							auxfi=(mistakecero*a);
							xfi=((mistakecero2-auxfi)/mistakecero3);
							printf("\n\t*****equation with unique solution*****");
							printf("\n\tValue of X: %d ",xfi);
							printf("\n\tValue of Y: %d\n",a);	
							}
							else
						{
							y= float(add3)/float(add2);			
							aux=(float(mistakecero)*y);
				
							x=float(mistakecero2-aux)/float(mistakecero3);
							printf("\n\t*****equation with unique solution*****");
							printf("\n\tValue of X: %f",x);
							printf("\n\tValue of Y: %f\n",y);
						}
						}else if(add1==0&&add2==0 &&add3!=0)
								{
									printf("\nEquation with no solution\n");
								}else if(add1&&add2&&add3==0)
									{
										printf("\nEquation with infinity of solutions\n");
									}	
				}else if(equation_1[0][0]<0&&equation_2[0][0]>0)
						{
							printf("Infinity solutions");
						}
	}			
}

void dibujarLinea( int moverX, int moverY, int dibujarX, int dibujarY, int color, int textoX, int textoY ) 
{
    moveto   ( moverX, moverY );
    setcolor ( color );
    lineto   ( dibujarX, dibujarY );    
}
  
void dibujarRecta ( float af, float bf, float c, float e, float f, float g )
{
	float x,xa,y,ya;
	for ( x = -360; x <= 360; x += 0.01 )
	{
		y = ( - c - ( af * x ) ) / bf;
		putpixel( 360 + x , 360 - y , RED );
	}
	
	for ( xa = -360; xa <= 360; xa += 0.01 ) 
	{
		ya = ( - g - ( e * xa ) ) / f;
		putpixel( 360 + xa , 360 - ya , BLUE);
	}
}

 
void pintarPlano ( ) 
{	
	int ALTO=640, ANCHO=640;
	initwindow( ANCHO, ALTO );	
    dibujarLinea( 0, ALTO / 2, ANCHO, ALTO / 2, WHITE, ANCHO - 20, ALTO / 2 + 10 );
    dibujarLinea( ANCHO / 2, 0, ANCHO / 2, ALTO, WHITE, ANCHO / 2 + 10, 0 );
}

