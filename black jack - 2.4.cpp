#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<unistd.h>
#include<windows.h>
#include <conio.h>
	int s2;
	int naipe;
	int posi;
	struct cartas{
		int player;
		int casa;

	}ca[11];
	
	int i=0, j=0;
	
	
void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}


boneco(){
	

	
	while(!kbhit()){
	system("cls");
	printf("\n");
	printf("   ____________________________\n");
	printf("  /                            \\ \n");
	printf(" /                              \\ \n");
	printf("/________________________________\\ \n");
	printf("|  __   __   __  __  o       __  | \n" );
	printf("| |    |__| |__ |__  | |\\ | |  | | \n");
	printf("| |__  |  |  __| __| | | \\| |__| | \n");
	printf("|      _______                   | \n");
	printf("|     |   |   |                  | \n");
	printf("|     |   |   |                  | \n");
	printf("|     |  o|o  |                  | \n");
	printf("|     |   |   |                  | \n");
	printf("|_____|___|___|__________________| \n");
	
	

		
	gotoxy(38-s2,12); printf("o");
	gotoxy(37-s2,13); printf("/|\\");
	gotoxy(37-s2,14); printf("/ \\");
	++s2;
	Sleep(500);
	if(s2>21){
		break;
	}
}
	system("cls");
	printf("\n");
	printf("   ____________________________\n");
	printf("  /                            \\ \n");
	printf(" /                              \\ \n");
	printf("/________________________________\\ \n");
	printf("|  __   __   __  __  o       __  | \n" );
	printf("| |    |__| |__ |__  | |\\ | |  | | \n");
	printf("| |__  |  |  __| __| | | \\| |__| | \n");
	printf("|      _______                   | \n");
	printf("|     |   |   |                  | \n");
	printf("|     |   |   |                  | \n");
	printf("|     |  o|o  |                  | \n");
	printf("|     |   |   |                  | \n");
	printf("|_____|___|___|__________________| \n");
	sleep(1);

}


saindo(){
	system("cls");
	printf("\n");
	printf("   ____________________________\n");
	printf("  /                            \\ \n");
	printf(" /                              \\ \n");
	printf("/________________________________\\ \n");
	printf("|  __   __   __  __  o       __  | \n" );
	printf("| |    |__| |__ |__  | |\\ | |  | | \n");
	printf("| |__  |  |  __| __| | | \\| |__| | \n");
	printf("|      _______                   | \n");
	printf("|     |   |   |                  | \n");
	printf("|     |   |   |                  | \n");
	printf("|     |  o|o  |                  | \n");
	printf("|     |   |   |                  | \n");
	printf("|_____|___|___|__________________| \n");
	sleep(1);
	
	for(s2=0;s2<21;++s2){
	system("cls");
	printf("\n");
	printf("   ____________________________\n");
	printf("  /                            \\ \n");
	printf(" /                              \\ \n");
	printf("/________________________________\\ \n");
	printf("|  __   __   __  __  o       __  | \n" );
	printf("| |    |__| |__ |__  | |\\ | |  | | \n");
	printf("| |__  |  |  __| __| | | \\| |__| | \n");
	printf("|      _______                   | \n");
	printf("|     |   |   |                  | \n");
	printf("|     |   |   |                  | \n");
	printf("|     |  o|o  |                  | \n");
	printf("|     |   |   |                  | \n");
	printf("|_____|___|___|__________________| \n");
	
	

		
	gotoxy(11+s2+2,12); printf("o");
	gotoxy(10+s2+2,13); printf("/|\\");
	gotoxy(10+s2+2,14); printf("/ \\");
	
	gotoxy(45,2); printf("          __  _ ___  _  _ \n");
	gotoxy(45,3); printf("\\  /\\  / |__||_  |  |_ | \\ \n");
	gotoxy(45,4); printf(" \\/  \\/  |  | _| |  |_ |_/ \n");
	gotoxy(47,6); printf("OBRIGADO PELO DINHEIRO!");
	gotoxy(52,7); printf("VOLTE SEMPRE!");
	sleep(1);
}
}
	
cartaas(){
	switch(ca[i].player){
		sleep(2);
		case 1:
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1: 
					gotoxy(13, 3);printf(" _________\n"); 
					gotoxy(13, 4);printf("|A        |\n");
					gotoxy(13, 5);printf("|?        |\n");
					gotoxy(13, 6);printf("|         |\n");
					gotoxy(13, 7);printf("|         |\n");
					gotoxy(13, 8);printf("|    ?    |\n");
					gotoxy(13, 9);printf("|         |\n");
					gotoxy(13, 10);printf("|         |\n");
					gotoxy(13, 11);printf("|_________|\n"); break;
				
				case 2: 
					gotoxy(13, 3);printf(" _________\n"); 
					gotoxy(13, 4);printf("|A        |\n");
					gotoxy(13, 5);printf("|!        |\n");
					gotoxy(13, 6);printf("|         |\n");
					gotoxy(13, 7);printf("|         |\n");
					gotoxy(13, 8);printf("|    !    |\n");
					gotoxy(13, 9);printf("|         |\n");
					gotoxy(13, 10);printf("|         |\n");
					gotoxy(13, 11);printf("|_________|\n"); break;
				
				case 3: 
					gotoxy(13, 3);printf(" _________\n"); 
					gotoxy(13, 4);printf("|A        |\n");
					gotoxy(13, 5);printf("|&        |\n");
					gotoxy(13, 6);printf("|         |\n");
					gotoxy(13, 7);printf("|         |\n");
					gotoxy(13, 8);printf("|    &    |\n");
					gotoxy(13, 9);printf("|         |\n");
					gotoxy(13, 10);printf("|         |\n");
					gotoxy(13, 11);printf("|_________|\n"); break;
				
				case 4: 
					gotoxy(13, 3); printf(" _________\n"); 
					gotoxy(13, 4); printf("|A        |\n");
					gotoxy(13, 5); printf("|$        |\n");
					gotoxy(13, 6); printf("|         |\n");
					gotoxy(13, 7); printf("|         |\n");
					gotoxy(13, 8); printf("|    $    |\n");
					gotoxy(13, 9); printf("|         |\n");
					gotoxy(13, 10);printf("|         |\n");
					gotoxy(13, 11);printf("|_________|\n"); break;				
				
			} break;
							
		case 2:
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1:
					gotoxy(13, 3);  printf(" _________\n");
					gotoxy(13, 4);	printf("|2        |\n");
					gotoxy(13, 5);	printf("|?        |\n");
					gotoxy(13, 6);	printf("|    ?    |\n");
					gotoxy(13, 7);	printf("|         |\n");
					gotoxy(13, 8);	printf("|         |\n");
					gotoxy(13, 9);	printf("|         |\n ");
					gotoxy(13, 10);	printf("|    ?    |\n ");
					gotoxy(13, 11);	printf("|_________|\n");break;
					
			case 2:
					gotoxy(13, 3);  printf(" _________\n");
					gotoxy(13, 4);	printf("|2        |\n");
					gotoxy(13, 5);	printf("|!        |\n");
					gotoxy(13, 6);	printf("|    !    |\n");
					gotoxy(13, 7);	printf("|         |\n");
					gotoxy(13, 8);	printf("|         |\n");
					gotoxy(13, 9);	printf("|         |\n ");
					gotoxy(13, 10);	printf("|    !    |\n ");
					gotoxy(13, 11);	printf("|_________|\n");break;
			case 3:
					gotoxy(13, 3); printf(" _________\n");
					gotoxy(13, 4);	printf("|2        |\n");
					gotoxy(13, 5);	printf("|&        |\n");
					gotoxy(13, 6);	printf("|    &    |\n");
					gotoxy(13, 7);	printf("|         |\n");
					gotoxy(13, 8);	printf("|         |\n");
					gotoxy(13, 9);	printf("|         |\n ");
					gotoxy(13, 10);	printf("|    &    |\n ");
					gotoxy(13, 11);	printf("|_________|\n");break;
			
			case 4:
					gotoxy(13, 3); printf(" _________\n");
					gotoxy(13, 4);	printf("|2        |\n");
					gotoxy(13, 5);	printf("|$        |\n");
					gotoxy(13, 6);	printf("|    $    |\n");
					gotoxy(13, 7);	printf("|         |\n");
					gotoxy(13, 8);	printf("|         |\n");
					gotoxy(13, 9);	printf("|         |\n ");
					gotoxy(13, 10);	printf("|    $    |\n ");
					gotoxy(13, 11);	printf("|_________|\n");break;				
					
					
				
			}break;
				
		case 3: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 : 
					gotoxy(13, 3);	printf(" _________\n"); 
					gotoxy(13, 4);	printf("|3        |\n");
					gotoxy(13, 5);	printf("|         |\n");
					gotoxy(13, 6);	printf("|  ?      |\n");
					gotoxy(13, 7);	printf("|         |\n");
					gotoxy(13, 8);	printf("|    ?    |\n");
					gotoxy(13, 9);	printf("|         |\n");
					gotoxy(13, 10);	printf("|      ?  |\n");
					gotoxy(13, 11);	printf("|_________|\n");break;
				
				case 2 : 
					gotoxy(13, 3);	printf(" _________\n"); 
					gotoxy(13, 4);	printf("|3        |\n");
					gotoxy(13, 5);	printf("|         |\n");
					gotoxy(13, 6);	printf("|  !      |\n");
					gotoxy(13, 7);	printf("|         |\n");
					gotoxy(13, 8);	printf("|    !    |\n");
					gotoxy(13, 9);	printf("|         |\n");
					gotoxy(13, 10);	printf("|      !  |\n");
					gotoxy(13, 11);	printf("|_________|\n");break;
				
				case 3 : 
					gotoxy(13, 3);	printf(" _________\n"); 
					gotoxy(13, 4);	printf("|3        |\n");
					gotoxy(13, 5);	printf("|         |\n");
					gotoxy(13, 7);  printf("|  &      |\n");
					gotoxy(13, 8);	printf("|         |\n");
					gotoxy(13, 9);	printf("|    &    |\n");
					gotoxy(13, 10);	printf("|         |\n");
					gotoxy(13, 11);	printf("|      &  |\n");
					gotoxy(13, 11);	printf("|_________|\n");break;
				
				case 4 : 
					gotoxy(13, 3);	printf(" _________\n"); 
					gotoxy(13, 4);	printf("|3        |\n");
					gotoxy(13, 5);	printf("|         |\n");
					gotoxy(13, 6);	printf("|  $      |\n");
					gotoxy(13, 7);	printf("|         |\n");
					gotoxy(13, 8);	printf("|    $    |\n");
					gotoxy(13, 9);	printf("|         |\n");
					gotoxy(13, 10);	printf("|      $  |\n");
					gotoxy(13, 11);	printf("|_________|\n");break;			
				
			} break;
		
		case 4: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 : 
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|4        |\n");
				gotoxy(13, 5);	printf("|?        |\n"); 
				gotoxy(13, 6);	printf("|  ?   ?  |\n"); 
				gotoxy(13, 7);	printf("|         |\n"); 
				gotoxy(13, 8);	printf("|         |\n"); 
				gotoxy(13, 9);	printf("|         |\n"); 
				gotoxy(13, 10);	printf("|  ?   ?  |\n");  
				gotoxy(13, 11);	printf("|_________|"); break;
				
				case 2 : 
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|4        |\n");
				gotoxy(13, 5);	printf("|!        |\n"); 
				gotoxy(13, 6);	printf("|  !   !  |\n"); 
				gotoxy(13, 7);	printf("|         |\n"); 
				gotoxy(13, 8);	printf("|         |\n"); 
				gotoxy(13, 9);	printf("|         |\n"); 
				gotoxy(13, 10);	printf("|  !   !  |\n");  
				gotoxy(13, 11);	printf("|_________|"); break;
				
				case 3 : 
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|4        |\n");
				gotoxy(13, 5);	printf("|&        |\n"); 
				gotoxy(13, 6);	printf("|  &   &  |\n"); 
				gotoxy(13, 7);	printf("|         |\n"); 
				gotoxy(13, 8);	printf("|         |\n"); 
				gotoxy(13, 9);	printf("|         |\n"); 
				gotoxy(13, 10);	printf("|  &   &  |\n");  
				gotoxy(13, 11);	printf("|_________|"); break;
				
				case 4 : 
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|4        |\n");
				gotoxy(13, 5);	printf("|$        |\n"); 
				gotoxy(13, 6);	printf("|  $   $  |\n"); 
				gotoxy(13, 7);  printf("|         |\n"); 
				gotoxy(13, 8);	printf("|         |\n"); 
				gotoxy(13, 9);	printf("|         |\n"); 
				gotoxy(13, 10);	printf("|  $   $  |\n");  
				gotoxy(13, 11);	printf("|_________|"); break;												
				
			} break;
				
				
		case 5: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|5        |\n");
				gotoxy(13, 5);	printf("|?        |\n");
				gotoxy(13, 6);	printf("|  ?   ?  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|    ?    |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  ?   ?  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 2 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|5        |\n");
				gotoxy(13, 5);	printf("|!        |\n");
				gotoxy(13, 6);	printf("|  !   !  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|    !    |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  !   !  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 3 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|5        |\n");
				gotoxy(13, 5);	printf("|&        |\n");
				gotoxy(13, 6);	printf("|  &   &  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|    &    |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  &   &  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 4 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|5        |\n");
				gotoxy(13, 5);	printf("|$        |\n");
				gotoxy(13, 6);	printf("|  $   $  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|    $    |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  $   $  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				
		} break;
		
		
		case 6: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|6        |\n");
				gotoxy(13, 5);	printf("|?        |\n");
				gotoxy(13, 6);	printf("|  ?   ?  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|  ?   ?  |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  ?   ?  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 2 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|6        |\n");
				gotoxy(13, 5);	printf("|!        |\n");
				gotoxy(13, 6);	printf("|  !   !  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|  !   !  |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  !   !  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 3 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|6        |\n");
				gotoxy(13, 5);	printf("|$        |\n");
				gotoxy(13, 6);	printf("|  &   &  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|  &   &  |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  &   &  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 4 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|6        |\n");
				gotoxy(13, 5);	printf("|$        |\n");
				gotoxy(13, 6);	printf("|  $   $  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|  $   $    |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  $   $  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				
		} break;
		
		case 7: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|7        |\n");
				gotoxy(13, 5);	printf("|?        |\n");
				gotoxy(13, 6);	printf("|  ?   ?  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|  ? ? ?  |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  ?   ?  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 2 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|7        |\n");
				gotoxy(13, 5);	printf("|!        |\n");
				gotoxy(13, 6);	printf("|  !   !  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|  ! ! !  |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  !   !  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 3 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|7        |\n");
				gotoxy(13, 5);	printf("|$        |\n");
				gotoxy(13, 6);	printf("|  &   &  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|  & & &  |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  &   &  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 4 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|7        |\n");
				gotoxy(13, 5);	printf("|$        |\n");
				gotoxy(13, 6);	printf("|  $   $  |\n");
				gotoxy(13, 7);	printf("|         |\n");
				gotoxy(13, 8);	printf("|  $ $ $  |\n");
				gotoxy(13, 9);	printf("|         |\n");
				gotoxy(13, 10);	printf("|  $   $  |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				
		} break;
		
		
		
case 8: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|8        |\n");
				gotoxy(13, 5);	printf("|?        |\n");
				gotoxy(13, 6);	printf("|  ?   ?  |\n");
				gotoxy(13, 7);	printf("|  ?   ?  |\n");
				gotoxy(13, 8);	printf("|  ?   ?  |\n");
				gotoxy(13, 9);	printf("|  ?   ?  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 2 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|8        |\n");
				gotoxy(13, 5);	printf("|!        |\n");
				gotoxy(13, 6);	printf("|  !   !  |\n");
				gotoxy(13, 7);	printf("|  !   !  |\n");
				gotoxy(13, 8);	printf("|  !   !  |\n");
				gotoxy(13, 9);	printf("|  !   !  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 3 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|8        |\n");
				gotoxy(13, 5);	printf("|&        |\n");
				gotoxy(13, 6);	printf("|  &   &  |\n");
				gotoxy(13, 7);	printf("|  &   &  |\n");
				gotoxy(13, 8);	printf("|  &   &  |\n");
				gotoxy(13, 9);	printf("|  &   &  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 4 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|8        |\n");
				gotoxy(13, 5);	printf("|$        |\n");
				gotoxy(13, 6);	printf("|  $   $  |\n");
				gotoxy(13, 7);	printf("|  $   $   |\n");
				gotoxy(13, 8);	printf("|  $   $  |\n");
				gotoxy(13, 9);	printf("|  $   $  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				
		} break;
		
		case 9: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|9        |\n");
				gotoxy(13, 5);	printf("|?        |\n");
				gotoxy(13, 6);	printf("|  ?   ?  |\n");
				gotoxy(13, 7);	printf("|  ? ? ?  |\n");
				gotoxy(13, 8);	printf("|  ?   ?  |\n");
				gotoxy(13, 9);	printf("|  ?   ?  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 2 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|9        |\n");
				gotoxy(13, 5);	printf("|!        |\n");
				gotoxy(13, 6);	printf("|  !   !  |\n");
				gotoxy(13, 7);	printf("|  ! ! !  |\n");
				gotoxy(13, 8);	printf("|  !   !  |\n");
				gotoxy(13, 9);	printf("|  !   !  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 3 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|9        |\n");
				gotoxy(13, 5);	printf("|&        |\n");
				gotoxy(13, 6);	printf("|  &   &  |\n");
				gotoxy(13, 7);	printf("|  & & &  |\n");
				gotoxy(13, 8);	printf("|  &   &  |\n");
				gotoxy(13, 9);	printf("|  &   &  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 4 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|9        |\n");
				gotoxy(13, 5);	printf("|$        |\n");
				gotoxy(13, 6);	printf("|  $   $  |\n");
				gotoxy(13, 7);	printf("|  $ $ $   |\n");
				gotoxy(13, 8);	printf("|  $   $  |\n");
				gotoxy(13, 9);	printf("|  $   $  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				
		} break;
		
		
case 10: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|10       |\n");
				gotoxy(13, 5);	printf("|?        |\n");
				gotoxy(13, 6);	printf("|  ? ? ?  |\n");
				gotoxy(13, 7);	printf("|  ? ? ?  |\n");
				gotoxy(13, 8);	printf("|  ?   ?  |\n");
				gotoxy(13, 9);	printf("|  ?   ?  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 2 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|10       |\n");
				gotoxy(13, 5);	printf("|!        |\n");
				gotoxy(13, 6);	printf("|  ! ! !  |\n");
				gotoxy(13, 7);	printf("|  ! ! !  |\n");
				gotoxy(13, 8);	printf("|  !   !  |\n");
				gotoxy(13, 9);	printf("|  !   !  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 3 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|10       |\n");
				gotoxy(13, 5);	printf("|&        |\n");
				gotoxy(13, 6);	printf("|  & & &  |\n");
				gotoxy(13, 7);	printf("|  & & &  |\n");
				gotoxy(13, 8);	printf("|  &   &  |\n");
				gotoxy(13, 9);	printf("|  &   &  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				case 4 :
				gotoxy(13, 3);	printf(" _________\n");
				gotoxy(13, 4);	printf("|10       |\n");
				gotoxy(13, 5);	printf("|$        |\n");
				gotoxy(13, 6);	printf("|  $ $ $  |\n");
				gotoxy(13, 7);	printf("|  $ $ $  |\n");
				gotoxy(13, 8);	printf("|  $   $  |\n");
				gotoxy(13, 9);	printf("|  $   $  |\n");
				gotoxy(13, 10);	printf("|         |\n");
				gotoxy(13, 11);	printf("|_________|\n");
				break;
				
				
		} break;												
		
	}
}	

desenho(){
	sleep(2);
	switch(ca[i].player){
		case 1:
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1: printf(" _________\n|A        |\n|?        |\n|         |\n|         |\n|    ?    |\n|         |\n|         |\n|_________|"); break;
				case 2: printf(" _________\n|A        |\n|!        |\n|         |\n|         |\n|    !    |\n|         |\n|         |\n|_________|"); break;
				case 3: printf(" _________\n|A        |\n|&        |\n|         |\n|         |\n|    &    |\n|         |\n|         |\n|_________|"); break;
				case 4: printf(" _________\n|A        |\n|$        |\n|         |\n|         |\n|    $    |\n|         |\n|         |\n|_________|"); break;
			} break;
							
		case 2:
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1:printf(" _________\n|2        |\n|?        |\n|    ?    |\n|         |\n|         |\n|         |\n|    ?    |\n|_________|"); break;
				case 2:printf(" _________\n|2        |\n|!        |\n|    !    |\n|         |\n|         |\n|         |\n|    !    |\n|_________|"); break;
				case 3:printf(" _________\n|2        |\n|&        |\n|    &    |\n|         |\n|         |\n|         |\n|    &    |\n|_________|"); break;
				case 4:printf(" _________\n|2        |\n|$        |\n|    $    |\n|         |\n|         |\n|         |\n|    $    |\n|_________|"); break;
			}break;
				
		case 3: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 : printf(" _________\n|3        |\n|         |\n|  ?      |\n|         |\n|    ?    |\n|         |\n|      ?  |\n|_________|"); break;
				case 2 : printf(" _________\n|3        |\n|         |\n|  !      |\n|         |\n|    !    |\n|         |\n|      !  |\n|_________|"); break;
				case 3 : printf(" _________\n|3        |\n|         |\n|  &      |\n|         |\n|    &    |\n|         |\n|      &  |\n|_________|"); break;
				case 4 : printf(" _________\n|3        |\n|         |\n|  $      |\n|         |\n|    $    |\n|         |\n|      $  |\n|_________|"); break;
			} break;
		
		case 4: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 : printf(" _________\n|4        |\n|?        |\n|  ?   ?  |\n|         |\n|         |\n|         |\n|  ?   ?  |\n|_________|"); break;
				case 2 : printf(" _________\n|4        |\n|!        |\n|  !   !  |\n|         |\n|         |\n|         |\n|  !   !  |\n|_________|"); break;
				case 3 : printf(" _________\n|4        |\n|&        |\n|  &   &  |\n|         |\n|         |\n|         |\n|  &   &  |\n|_________|"); break;
				case 4 : printf(" _________\n|4        |\n|$        |\n|  $   $  |\n|         |\n|         |\n|         |\n|  $   $  |\n|_________|"); break;
			} break;
				
				
		case 5: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|5        |\n|?        |\n|  ?   ?  |\n|         |\n|    ?    |\n|         |\n|  ?   ?  |\n|_________|"); break;
				case 2 :printf(" _________\n|5        |\n|!        |\n|  !   !  |\n|         |\n|    !    |\n|         |\n|  !   !  |\n|_________|"); break;
				case 3 :printf(" _________\n|5        |\n|&        |\n|  &   &  |\n|         |\n|    &    |\n|         |\n|  &   &  |\n|_________|"); break;
				case 4 :printf(" _________\n|5        |\n|$        |\n|  $   $  |\n|         |\n|    $    |\n|         |\n|  $   $  |\n|_________|"); break;
		} break;
		
		case 6: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|6        |\n|?        |\n|  ?   ?  |\n|         |\n|  ?   ?  |\n|         |\n|  ?   ?  |\n|_________|"); break;
				case 2 :printf(" _________\n|6        |\n|!        |\n|  !   !  |\n|         |\n|  !   !  |\n|         |\n|  !   !  |\n|_________|"); break;
				case 3 :printf(" _________\n|6        |\n|&        |\n|  &   &  |\n|         |\n|  &   &  |\n|         |\n|  &   &  |\n|_________|"); break;
				case 4 :printf(" _________\n|6        |\n|$        |\n|  $   $  |\n|         |\n|  $   $  |\n|         |\n|  $   $  |\n|_________|"); break;
		} break;
		
		case 7: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|7        |\n|?        |\n|  ?   ?  |\n|         |\n|  ? ? ?  |\n|         |\n|  ?   ?  |\n|_________|"); break;
				case 2 :printf(" _________\n|7        |\n|!        |\n|  !   !  |\n|         |\n|  ! ! !  |\n|         |\n|  !   !  |\n|_________|"); break;
				case 3 :printf(" _________\n|7        |\n|&        |\n|  &   &  |\n|         |\n|  & & &  |\n|         |\n|  &   &  |\n|_________|"); break;
				case 4 :printf(" _________\n|7        |\n|$        |\n|  $   $  |\n|         |\n|  $ $ $  |\n|         |\n|  $   $  |\n|_________|"); break;
		} break;
		
		
		
		
		case 8: 
		srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|8        |\n|?        |\n|  ?   ?  |\n|  ?   ?  |\n|  ?   ?  |\n|  ?   ?  |\n|         |\n|_________|"); break;
				case 2 :printf(" _________\n|8        |\n|!        |\n|  !   !  |\n|  !   !  |\n|  !   !  |\n|  !   !  |\n|         |\n|_________|"); break;
				case 3 :printf(" _________\n|8        |\n|&        |\n|  &   &  |\n|  &   &  |\n|  &   &  |\n|  &   &  |\n|         |\n|_________|"); break;
				case 4 :printf(" _________\n|8        |\n|$        |\n|  $   $  |\n|  $   $  |\n|  $   $  |\n|  $   $  |\n|         |\n|_________|"); break;
		}break;
		
		case 9: 
		srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|9        |\n|?        |\n|  ?   ?  |\n|  ? ? ?  |\n|  ?   ?  |\n|  ?   ?  |\n|         |\n|_________|"); break;
				case 2 :printf(" _________\n|9        |\n|!        |\n|  !   !  |\n|  ! ! !  |\n|  !   !  |\n|  !   !  |\n|         |\n|_________|"); break;
				case 3 :printf(" _________\n|9        |\n|&        |\n|  &   &  |\n|  & & &  |\n|  &   &  |\n|  &   &  |\n|         |\n|_________|"); break;
				case 4 :printf(" _________\n|9        |\n|$        |\n|  $   $  |\n|  $ $ $  |\n|  $   $  |\n|  $   $  |\n|         |\n|_________|"); break;
		}break;
		
		case 10: 
		srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|10       |\n|?        |\n|  ?   ?  |\n|  ? ? ?  |\n|  ? ? ?  |\n|  ?   ?  |\n|         |\n|_________|"); break;
				case 2 :printf(" _________\n|10       |\n|!        |\n|  !   !  |\n|  ! ! !  |\n|  ! ! !  |\n|  !   !  |\n|         |\n|_________|"); break;
				case 3 :printf(" _________\n|10       |\n|&        |\n|  &   &  |\n|  & & &  |\n|  & & &  |\n|  &   &  |\n|         |\n|_________|"); break;
				case 4 :printf(" _________\n|10       |\n|$        |\n|  $   $  |\n|  $ $ $  |\n|  $ $ $  |\n|  $   $  |\n|         |\n|_________|"); break;
		}break;
		
	
	}

}


ai(){
	sleep(2);
	switch(ca[j].casa){
		case 1:
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1: printf(" _________\n|A        |\n|?        |\n|         |\n|         |\n|    ?    |\n|         |\n|         |\n|_________|"); break;
				case 2: printf(" _________\n|A        |\n|!        |\n|         |\n|         |\n|    !    |\n|         |\n|         |\n|_________|"); break;
				case 3: printf(" _________\n|A        |\n|&        |\n|         |\n|         |\n|    &    |\n|         |\n|         |\n|_________|"); break;
				case 4: printf(" _________\n|A        |\n|$        |\n|         |\n|         |\n|    $    |\n|         |\n|         |\n|_________|"); break;
			} break;
							
		case 2:
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1:printf(" _________\n|2        |\n|?        |\n|    ?    |\n|         |\n|         |\n|         |\n|    ?    |\n|_________|"); break;
				case 2:printf(" _________\n|2        |\n|!        |\n|    !    |\n|         |\n|         |\n|         |\n|    !    |\n|_________|"); break;
				case 3:printf(" _________\n|2        |\n|&        |\n|    &    |\n|         |\n|         |\n|         |\n|    &    |\n|_________|"); break;
				case 4:printf(" _________\n|2        |\n|$        |\n|    $    |\n|         |\n|         |\n|         |\n|    $    |\n|_________|"); break;
			}break;
				
		case 3: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 : printf(" _________\n|3        |\n|?        |\n|  ?      |\n|         |\n|    ?    |\n|         |\n|      ?  |\n|_________|"); break;
				case 2 : printf(" _________\n|3        |\n|!        |\n|  !      |\n|         |\n|    !    |\n|         |\n|      !  |\n|_________|"); break;
				case 3 : printf(" _________\n|3        |\n|&        |\n|  &      |\n|         |\n|    &    |\n|         |\n|      &  |\n|_________|"); break;
				case 4 : printf(" _________\n|3        |\n|$        |\n|  $      |\n|         |\n|    $    |\n|         |\n|      $  |\n|_________|"); break;
			} break;
		
		case 4: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 : printf(" _________\n|4        |\n|?        |\n|  ?   ?  |\n|         |\n|         |\n|         |\n|  ?   ?  |\n|_________|"); break;
				case 2 : printf(" _________\n|4        |\n|!        |\n|  !   !  |\n|         |\n|         |\n|         |\n|  !   !  |\n|_________|"); break;
				case 3 : printf(" _________\n|4        |\n|&        |\n|  &   &  |\n|         |\n|         |\n|         |\n|  &   &  |\n|_________|"); break;
				case 4 : printf(" _________\n|4        |\n|$        |\n|  $   $  |\n|         |\n|         |\n|         |\n|  $   $  |\n|_________|"); break;
			} break;
				
				
		case 5: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|5        |\n|?        |\n|  ?   ?  |\n|         |\n|    ?    |\n|         |\n|  ?   ?  |\n|_________|"); break;
				case 2 :printf(" _________\n|5        |\n|!        |\n|  !   !  |\n|         |\n|    !    |\n|         |\n|  !   !  |\n|_________|"); break;
				case 3 :printf(" _________\n|5        |\n|&        |\n|  &   &  |\n|         |\n|    &    |\n|         |\n|  &   &  |\n|_________|"); break;
				case 4 :printf(" _________\n|5        |\n|$        |\n|  $   $  |\n|         |\n|    $    |\n|         |\n|  $   $  |\n|_________|"); break;
		} break;
		
		case 6: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|6        |\n|?        |\n|  ?   ?  |\n|         |\n|  ?   ?  |\n|         |\n|  ?   ?  |\n|_________|"); break;
				case 2 :printf(" _________\n|6        |\n|!        |\n|  !   !  |\n|         |\n|  !   !  |\n|         |\n|  !   !  |\n|_________|"); break;
				case 3 :printf(" _________\n|6        |\n|&        |\n|  &   &  |\n|         |\n|  &   &  |\n|         |\n|  &   &  |\n|_________|"); break;
				case 4 :printf(" _________\n|6        |\n|$        |\n|  $   $  |\n|         |\n|  $   $  |\n|         |\n|  $   $  |\n|_________|"); break;
		} break;
		
		case 7: 
			srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|7        |\n|?        |\n|  ?   ?  |\n|         |\n|  ? ? ?  |\n|         |\n|  ?   ?  |\n|_________|"); break;
				case 2 :printf(" _________\n|7        |\n|!        |\n|  !   !  |\n|         |\n|  ! ! !  |\n|         |\n|  !   !  |\n|_________|"); break;
				case 3 :printf(" _________\n|7        |\n|&        |\n|  &   &  |\n|         |\n|  & & &  |\n|         |\n|  &   &  |\n|_________|"); break;
				case 4 :printf(" _________\n|7        |\n|$        |\n|  $   $  |\n|         |\n|  $ $ $  |\n|         |\n|  $   $  |\n|_________|"); break;
		} break;
		
		
		
		
		case 8: 
		srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|8        |\n|?        |\n|  ?   ?  |\n|  ?   ?  |\n|  ?   ?  |\n|  ?   ?  |\n|         |\n|_________|"); break;
				case 2 :printf(" _________\n|8        |\n|!        |\n|  !   !  |\n|  !   !  |\n|  !   !  |\n|  !   !  |\n|         |\n|_________|"); break;
				case 3 :printf(" _________\n|8        |\n|&        |\n|  &   &  |\n|  &   &  |\n|  &   &  |\n|  &   &  |\n|         |\n|_________|"); break;
				case 4 :printf(" _________\n|8        |\n|$        |\n|  $   $  |\n|  $   $  |\n|  $   $  |\n|  $   $  |\n|         |\n|_________|"); break;
		}break;
		
		case 9: 
		srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|9        |\n|?        |\n|  ?   ?  |\n|  ? ? ?  |\n|  ?   ?  |\n|  ?   ?  |\n|         |\n|_________|"); break;
				case 2 :printf(" _________\n|9        |\n|!        |\n|  !   !  |\n|  ! ! !  |\n|  !   !  |\n|  !   !  |\n|         |\n|_________|"); break;
				case 3 :printf(" _________\n|9        |\n|&        |\n|  &   &  |\n|  & & &  |\n|  &   &  |\n|  &   &  |\n|         |\n|_________|"); break;
				case 4 :printf(" _________\n|9        |\n|$        |\n|  $   $  |\n|  $ $ $  |\n|  $   $  |\n|  $   $  |\n|         |\n|_________|"); break;
		}break;
		
		case 10: 
		srand((unsigned)time(NULL));
			naipe = 1 + (rand () % 4);
			switch(naipe){
				case 1 :printf(" _________\n|10       |\n|?        |\n|  ?   ?  |\n|  ? ? ?  |\n|  ? ? ?  |\n|  ?   ?  |\n|         |\n|_________|"); break;
				case 2 :printf(" _________\n|10       |\n|!        |\n|  !   !  |\n|  ! ! !  |\n|  ! ! !  |\n|  !   !  |\n|         |\n|_________|"); break;
				case 3 :printf(" _________\n|10       |\n|&        |\n|  &   &  |\n|  & & &  |\n|  & & &  |\n|  &   &  |\n|         |\n|_________|"); break;
				case 4 :printf(" _________\n|10       |\n|$        |\n|  $   $  |\n|  $ $ $  |\n|  $ $ $  |\n|  $   $  |\n|         |\n|_________|"); break;
		}break;
		
	
	}

}



int main(){
	//versão 2.0 - Voce pode apostar
	//versâo 2.1 - Bug do lucro corrigido + traduçâo para o portugues
	//versão 2.2 - Vicio das seeds corrigidas
	//versâo 2.3 - Troca da variavel c por db(variavel c se perdeu no meio do caminho pois havia uma pedra), Ranking
	//versão 2.4 - Finalmente fdi colocado as cartas
	
	setlocale(LC_ALL, "Portuguese");
	
	int r=0;
	int vit=0, der=0;
	char nick[40];
	char nem[40];//variavel auxiliar par strcpy
	int aux=0;
	int flag=0;
	int veri=0;
	
	struct ranking{
		char rank[40];
		int vic;
	}rank[40];
	
	
	float fichas=0, apostar, perder;
	int u,o, c=0;

	
	
	FILE *jog;
	FILE *cont;
	

	
	cont = fopen("cont.txt", "r");
	fscanf(cont, "%d", &c);
	fclose(cont);
	
	if(c!=0){
	jog = fopen("jog.txt", "r");
		for(o=0;o<=c;++o){
			fscanf(jog,"%s",&rank[o].rank);
			fscanf(jog,"%d",&rank[o].vic);
		}
		fclose(jog);
			for(o=0;o<c;++o){
			for(u=1;u<=c;++u){
				
				if(rank[o].vic<rank[u].vic){
					aux=rank[o].vic;
					rank[o].vic=rank[u].vic;
					rank[u].vic=aux;
					
					strcpy(nem,rank[o].rank);
					strcpy(rank[o].rank,rank[u].rank);
					strcpy(rank[u].rank,nem);
				}
			}
		}

		r=1;
	}
	

	boneco();
	sleep(1);
	system("cls");
	printf("WELCOME\nDigite seu nome -> ");
	fflush(stdin);
	fgets(nick,40,stdin);
	
	while(flag!=1){
		
	
	
	int d=0, db=0, sc=0;
	int sp=0, dec=0, men=0;
	int ue=0;

	i=0;
	
	system("cls");
	printf("\n\n\n-----------------------------------BLACK JACK-----------------------------------\n");

	
	printf(" 1 - Jogar\n 2 - Creditar Ficha\n 3 - Ver saldo\n 4 - Regras\n 5 - Exibir Ranking\n 6 - Salvar e Sair (OBS: caso você saia sem salvar, toda sua pontuação\nserá perdida\n\n");
	printf("Digite aqui:  ");
	scanf("%d", &men);	
	
	
	if(men==5){
		posi=4;
		system("cls");
		gotoxy(1,3);printf("---------------------------------- RANKING ------------------------------------\n");
		
		if(r==1){
		printf("\n\n");	
		for(o=0;o<=c;++o){	
		posi=posi+1;
		gotoxy(15,posi); printf("%dº - %s", o+1, rank[o].rank);
		gotoxy(53,posi); printf("%d vitorias" , rank[o].vic);
		gotoxy(39,posi); printf("|");
		printf("\n\n");
		}
		system("pause");
	}
	else{printf("\nNinguem jogou D:\n");
	sleep(1);
	}
}

	if(men==6){
		
		saindo();
		system("cls");
		printf("\n\nDesenvolvido por: Felipe D. Takahashi e Gabriel R. Machado\n\n");
		system("pause");
		flag=1;
		
		if(vit!=0){
		jog = fopen("jog.txt", "a");
		fprintf(jog,"%s",nick);
		fprintf(jog,"%d\n",vit);
		++c;
		fclose(jog);
		
		cont = fopen("cont.txt", "w");
		fprintf(cont,"%d",c);
		fclose(cont);} 
	}
	
	if(men==2){
		printf("\nDigite o valor que voce quer creditar: $");
		scanf("%f", &apostar);
		sleep(1);
		if(apostar>0){
		fichas=fichas+apostar;
		printf("Valor creditado com sucesso!\n\n");}
		else{
			printf("Você não pode creditar um valor menor ou igual a zero. \n\n");
		}
		system("pause");
	}
	
	
	if(men==4){
	printf("\n\n\n\n");
	printf("COMO JOGAR:\nVocê receberá 2 cartas, enquanto a CPU 1 e outra ficará escondida.\nVocê decide se quer mais carta, porém a soma delas não podem ultrapassar 21.\nQuando voce parar, a CPU irá revelar a carta escondida e decidir se quer mais.\nGanha quem chegar mais proximo de 21.\nOBS: Caso alguem receber um 11 e um 10, gamha automaticamente\nOBS2: Em caso de empate, a CPU ganha\n\n\n\n ");	
	system("pause");
	}
	
	
	if(men==3){
		printf("Seu saldo atual eh de: $%5.2f\n\n\n\n", fichas);
		system("pause");
	}
	
	
	if(men==1){
		if(fichas>0){
		perder=0;
		sp=0;
		sc=0;
	
	while(ue!=1){
	printf("\n\n\n");
	printf("Digite o valor da aposta: $");
	scanf("%f", &perder);
	if(perder<=fichas){
		ue=1;
	}
	else{
	printf("Você não pode apostar um valor maior que seu saldo atual");}
	}
	
	sleep(1);
	printf("\nAposta confirmada!\n\n\n");
	sleep(1);
	sp=0;
	i=0;
	system("cls");
	printf("Suas duas primeiras cartas são: ");
	sleep(2);
	srand((unsigned)time(NULL));
	ca[i].player= 1 + (rand () % 10);
	printf("\n\n");
	desenho();
	sp=sp+ca[i].player;
	++i;
	
	printf("\n\n");
	sleep(3);
	srand((unsigned)time(NULL));
	ca[i].player= 1 + (rand () % 10);
	cartaas();
	sp=sp+ca[i].player;
	++i;
	printf("\n\n");
	
	if((ca[0].player==1&&ca[1].player==10)||(ca[0].player==10&&ca[1].player==1)){
		sp=21;
		printf("\n\nVoce conquistou um black jack!");
	}
	
	
	sleep(2);
	srand((unsigned)time(NULL));
	ca[j].casa= 1 + (rand () % 10);
	
	printf("\n\n\nA primeira carta da casa eh: \n\n");
	ai();
	printf("\n");	
	sc=ca[j].casa+sc;
	++j;
	
	
	db=0;

	while(db!=1){
		printf("\n\nVoce gostaria de mais alguma carta? Se sim digite 1, se nao digite 2: ");
		scanf("%d", &dec);
		if(dec==2){
			db=1;
		}
		
		
		if(dec==1){
			sleep(2);
			srand((unsigned)time(NULL));
			ca[i].player= 1 + (rand () % 10);
			desenho();
			printf("\n\n");
			
			sp=sp+ca[i].player;
			sleep(1);
			printf("Soma das suas carta: %d\n", sp );
			
			++i;
			if(sp>21){
				
				sleep(1);
				printf("Voce perdeu!!!!\n\n");
				db=1;
				fichas=fichas-perder;
			}
		}
	}
	d=0;
	

	
	sleep(1);
	if(sp>sc&&sp<=21){
		printf("\nAgora eh a vez da casa jogar.\n\n", sc );
		while(sc<sp){
			printf("\nA casa vai pegar mais uma carta\n");
			
			sleep(2);
			srand((unsigned)time(NULL));
			ca[j].casa= 1 + (rand () % 10);
			sc=sc+ca[j].casa;
			printf("\n\n");
			ai();
			printf("\nSoma das cartas da casa: %d", sc);
			++j;
			sleep(1);
		}
	sleep(2);	
	printf("\n\nA casa nao vai pegar mais nenhuma carta. \n\n");
	sleep(1);
	printf("Soma das suas carta: %d                  Soma das cartas da Casa: %d\n\n", sp,sc);
	
	
	if(sc>21||sp>sc&&sp<=21){
		sleep(1);
		printf("%s Ganhou!!!!!\n", nick);
		fichas=fichas+(perder/2);
		printf("\n\nVoce lucrou: $%5.2f\n\n", perder/2);
		++vit;
		
		
	}
	else{
		printf("\n\nA casa ganhou!\n");
		printf("Nós sempre ganhamos!\n\n");
		fichas=fichas-perder;
		
	}
}
	
	
	
	
	
}
	else{printf("\nSem fichas, compre mais para poder perder :D\n\n\n");}
	system("pause");
}
}
}
