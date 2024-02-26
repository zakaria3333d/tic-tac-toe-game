#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>





/*                                                -----------------------
                                                  | the XO game guide : |
                                                  -----------------------
                                                   

the libraries :
---------------

stdio for the standard functions (printf /scanf.....)
conio library  for (getch )
stdlib library for random function (rand)
and the windows library for setting the gotoxy fun (because it isn't availble in conio.h )


 the declarations 
--------------------

4 intigers (i,j) for the loops and (x,y) for tracking the position of the cursor (where you put x or o)
2 char (a) for the input (arrows keys or enter) (k) to save the letter of who won ( x for the X and o for the O and d for draw)
3 matrices of 3 lines and 3 columns (A) for the O shape and (B) for the X shape and the (C) to save the places of the o and x 


drawing the score table :
-------------------------
with the gotoxy and printf functions and by useing  the ascci code of the table corners and walls 
 
 
 
 the game main loop (while)
 ---------------------------
 the game will start if the value of the variable e is 1
 and exit the game if it's 0  
 
  
	 
	 Draw the game table on the console
	------------------------------------
	
	i used the gotoxy and printf functions to draw it ine by line 
	i used the ascii codes for the shapes to draw it 
	
	
	 drawing the cursor frame 
	--------------------------
	
	i changed the cursor to a frame with the corners only 
	initilaze the x and y variable to the coordinates of the first box  
	and i used the gotoxy and printf functoin to draw the frame 
	
	
	 the game loop ( for ) 
	-----------------------
	
	i is being incremented by 1 from 0 to the number of the boxes (9)
	
			 the while 1 loop 
			------------------
			
					 the switch function
					---------------------
					
					this function will receive an inout from the player 
					if it's the arrows keys it'll move the cursore frame to the direction of the arrow (by an algorithme i can't explain :) ) 
					
					
					 the case of the output (enter key) the if statment 
					----------------------------------------------------
					
					the if function will test if the place the frame is in is empty (by comparing it with its place in the matrix (with some   " math ")  ) 
					and it'll print one of the chapes O or X  (O if the i variable of the for loop is even and X if it's odd)
					and also saving in the C matrix that this place is taken with x or o 
					
				
				
			 the 16 line of the if statmentes 
			----------------------------------
			
			this if's are for testing if somone win by comparing the lines if it's all with the same shape (ba the C matirx)
			if one of the line is full with x the k variabe will take the x charachter
			and if it is full with o the k variabe will take the o charachter
			( btw the k variable is already initelized by the d charachter )
			and it will break from the for loop 
			
	
	
	 the 3 if statementes
	----------------------
	
	the if's are  for testing the k  content and printing the score :
	if it's the 'x' charachter it' print that THE X PLAYER WON THE GAME and increment the x player's score
	if it's the 'x' charachter it' print that THE O PLAYER WON THE GAME and increment the o player's score
	if it's the 'd' charachter it' print that THE draw with no incrementations





	restart or exit :
	------------------
	it'll printf restart or exit 
	and the '>>' that you can move up or dows (in the while 1 oop and the switch )
	if you shoose restart e value will be aquale to 1 and the game will restart
	and if you shoose exit e value will be aquale to 0 whitch make the while 1 loop stopo and the game wil exit
	
	
	
	

*/






void gotoxy(int x,int y)
{
	COORD c;
	c.X = x ;
	c.Y = y ;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	
}




int main () {
	
	int i , j , x , y , n , m ;
 	int oscore=0 , xscore=0 ;
 
	char a , k = 'd';
	
	char e=1 ;

	char A[3][3] = {{218,191},
				    {192,217}};	  
				  
	char B[3][3] = {{'\\','/'},
				    {'/','\\'}};
				    	    
	int C[3][3] =	{{9,8,7},
				     {6,5,4},
				     {3,11,12}};		    
	
	
	
	
	
	gotoxy(3,5);
	printf("%d",oscore);
	gotoxy(6,5);
	printf("%d",xscore);
	
	gotoxy(3,2);
	printf("%c%c%c%c%c%c%c%c%c",218,196,196,196,194,196,196,196,191);
	gotoxy(3,3);
	printf("%c O %c X %c",179,179,179);
	gotoxy(3,4);
	printf("%c%c%c%c%c%c%c%c%c",195,196,196,196,197,196,196,196,180);
	gotoxy(3,5);
	printf("%c %d %c %d %c",179,oscore,179,xscore,179);
	gotoxy(3,6);
	printf("%c%c%c%c%c%c%c%c%c",192,196,196,196,193,196,196,196,217);
	
	while(e==1){
	
	
	
	gotoxy(30,5);
	printf("    %c    %c    ",186,186);
	gotoxy(30,6);
	printf("    %c    %c    ",186,186);
	gotoxy(30,7);
	printf("    %c    %c    ",186,186);
	gotoxy(30,8);
	printf("    %c    %c    ",186,186);
	
	gotoxy(30,9);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,206,205,205,205,205,206,205,205,205,205);
	
	gotoxy(30,10);
	printf("    %c    %c    ",186,186);
	gotoxy(30,11);
	printf("    %c    %c    ",186,186);
	gotoxy(30,12);
	printf("    %c    %c    ",186,186);
	gotoxy(30,13);
	printf("    %c    %c    ",186,186);
	
	gotoxy(30,14);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,206,205,205,205,205,206,205,205,205,205);
	
	gotoxy(30,15);
	printf("    %c    %c    ",186,186);
	gotoxy(30,16);
	printf("    %c    %c    ",186,186);
	gotoxy(30,17);
	printf("    %c    %c    ",186,186);
	gotoxy(30,18);
	printf("    %c    %c    ",186,186);
	
	
	

	
	x = 30 ;
	y = 5 ;
	
	gotoxy(x,y);
	printf("%c",218);
	gotoxy(x+3,y);
	printf("%c",191);
	gotoxy(x,y+3);
	printf("%c",192);
	gotoxy(x+3,y+3);
	printf("%c",217);
	
	
	
	for(i=0;i<9;i++)
	{
		while(1)
		{
			a = getch();
			switch(a)
			{
			case 75: 											// LEFT
					if(x == 30) break;
					else
					{
						gotoxy(x,y);
						printf(" ");
						gotoxy(x+3,y);
						printf(" ");
						gotoxy(x,y+3);
						printf(" ");
						gotoxy(x+3,y+3);
						printf(" ");
						
						gotoxy(x-5,y);
						printf("%c",218);
						gotoxy(x-2,y);
						printf("%c",191);
						gotoxy(x-5,y+3);
						printf("%c",192);
						gotoxy(x-2,y+3);
						printf("%c",217);
						
						x=x-5;
						break;
					}
					;
					
			case 72: 											// UP
					if( y == 5) break;
					else
					{
						gotoxy(x,y);
						printf(" ");
						gotoxy(x+3,y);
						printf(" ");
						gotoxy(x,y+3);
						printf(" ");
						gotoxy(x+3,y+3);
						printf(" ");
						
						gotoxy(x,y-5);
						printf("%c",218);
						gotoxy(x+3,y-5);
						printf("%c",191);
						gotoxy(x,y-2);
						printf("%c",192);
						gotoxy(x+3,y-2);
						printf("%c",217);
						
						y=y-5;
						break;
					}
					
					;
			case 77:										    // RIGHT
					if( x == 40) break;
					else
					{
						gotoxy(x,y);
						printf(" ");
						gotoxy(x+3,y);
						printf(" ");
						gotoxy(x,y+3);
						printf(" ");
						gotoxy(x+3,y+3);
						printf(" ");
						
						gotoxy(x+5,y);
						printf("%c",218);
						gotoxy(x+8,y);
						printf("%c",191);
						gotoxy(x+5,y+3);
						printf("%c",192);
						gotoxy(x+8,y+3);
						printf("%c",217);
						
						x=x+5;
						break;
					}
					
					;
			case 80: 											// DOWN
					if( y == 15) break;
					else
					{
						gotoxy(x,y);
						printf(" ");
						gotoxy(x+3,y);
						printf(" ");
						gotoxy(x,y+3);
						printf(" ");
						gotoxy(x+3,y+3);
						printf(" ");
						
						gotoxy(x,y+5);
						printf("%c",218);
						gotoxy(x+3,y+5);
						printf("%c",191);
						gotoxy(x,y+8);
						printf("%c",192);
						gotoxy(x+3,y+8);
						printf("%c",217);
						
						y=y+5;
						break;
					}
					
					;
				
			
			};
			
			
			
			if(a ==  13 && C[(x-30)/4][(y-5)/4] != 0 && C[(x-30)/4][(y-5)/4] != 1)
			{
				if(i%2==0)
				{
				gotoxy(x+1,y+1);
				printf("%c%c",A[0][0],A[0][1]);
				gotoxy(x+1,y+2);
				printf("%c%c",A[1][0],A [1][1]);	
				C[(x-30)/4][(y-5)/4] = 0 ; 
				}
				else
				{
				gotoxy(x+1,y+1);
				printf("%c%c",B[0][0],B[0][1]);
				gotoxy(x+1,y+2);
				printf("%c%c",B[1][0],B[1][1]);
				C[(x-30)/4][(y-5)/4] = 1 ; 
				}
				break;
			}
			
			
				
		}
		
		if(C[0][0] == 0 && C[0][1] == 0 && C[0][2]  == 0 ) {k = 'o'; break ;}
		if(C[0][0] == 0 && C[1][0] == 0 && C[2][0]  == 0 ) {k = 'o'; break ;}
		if(C[0][2] == 0 && C[1][2] == 0 && C[2][2]  == 0 ) {k = 'o'; break ;}
		if(C[2][0] == 0 && C[2][1] == 0 && C[2][2]  == 0 ) {k = 'o'; break ;}
		if(C[0][0] == 0 && C[1][1] == 0 && C[2][2]  == 0 ) {k = 'o'; break ;}
		if(C[0][2] == 0 && C[1][1] == 0 && C[2][0]  == 0 ) {k = 'o'; break ;}
		if(C[1][0] == 0 && C[1][1] == 0 && C[1][2]  == 0 ) {k = 'o'; break ;}
		if(C[0][1] == 0 && C[1][1] == 0 && C[2][1]  == 0 ) {k = 'o'; break ;}
		
		if(C[0][0] == 1 && C[0][1] == 1 && C[0][2]  == 1 ) {k = 'x'; break ;}
		if(C[0][0] == 1 && C[1][0] == 1 && C[2][0]  == 1 ) {k = 'x'; break ;}
		if(C[0][2] == 1 && C[1][2] == 1 && C[2][2]  == 1 ) {k = 'x'; break ;}
		if(C[2][0] == 1 && C[2][1] == 1 && C[2][2]  == 1 ) {k = 'x'; break ;}
		if(C[0][0] == 1 && C[1][1] == 1 && C[2][2]  == 1 ) {k = 'x'; break ;}
		if(C[0][2] == 1 && C[1][1] == 1 && C[2][0]  == 1 ) {k = 'x'; break ;}
		if(C[1][0] == 1 && C[1][1] == 1 && C[1][2]  == 1 ) {k = 'x'; break ;}
		if(C[0][1] == 1 && C[1][1] == 1 && C[2][1]  == 1 ) {k = 'x'; break ;}
		
		
	}
		
	
	
	if(k == 'o') {
		gotoxy(22,20);
		printf("congratulation  O  won the game ");
		gotoxy(5,5);
		printf("%d",++oscore);
	
	}
	
	
   	if(k == 'x') {
		gotoxy(22,20);
		printf("congratulation  X  won the game ");
		gotoxy(9,5);
		printf("%d",++xscore);
	}
	
	if(k == 'd') {
		gotoxy(30,20);
		printf("no one won  DRAW");
	}
	
	
	n = 30;
	m = 22; 
	
	gotoxy(34,22);
	printf("restart");
	gotoxy(34,23);
	printf("exit");
	
	gotoxy(n,m);
	printf(">>");
	
	while(1)
	{
	
	a = getch();
	switch(a)
	{
		case  72: if(m == 23)
					{
						gotoxy(n,m);
						printf("  ");
						gotoxy(n,--m);
						printf(">>");
						
					}
					break;
					
		case  80: if(m == 22)
					{
						gotoxy(n,m);
						printf("  ");
						gotoxy(n,++m);
						printf(">>");
						
					}
					break;
									
					
	}
	
	if (a== 13)
	{
		if(m == 22)
		{
			e=1;
			
			C[0][0] = 9 ;
			C[0][1] = 8;
			C[0][2] = 7;
			C[1][0] = 6;
			C[1][1] = 5;
			C[1][2] = 4;
			C[2][0] = 3;
			C[2][1] = 11;
			C[2][2] = 12;
			k = 'd';
			gotoxy(20,20);
			printf("                                         ");
			gotoxy(20,22);
			printf("                                         ");
			gotoxy(20,23);
			printf("                                         ");
		}
		if(m == 23)
		e=0;
		break;
	}
	
	
	}
	
	
	}
	
	
	return 0;
}
