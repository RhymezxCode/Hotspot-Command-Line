#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Hotspot{
int selected;
int clicked;
char username[100];
char password[100];
};

struct Hotspot H;
char command[100] = "netsh wlan set hostednetwork mode=allow ssid= ";
char linkTogether[10] = " key= ";

void Clear()
{
	system("cls");
	printf("\t\t\t\t\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ", 175);
		sleep(1);	
		printf("%c ", 175);
		sleep(1);
	    printf("%c ", 175);
	    sleep(1);
	    printf("%c\n\n\n", 175);
	InterfaceNetwork();
}
void IFELSE(){
		printf(" \n\n\n 1. If you want to exit -----\n 2. If you still want to go back to the mainmenu.-----\n");
		printf("    Input Here: ");
        scanf("%d", &H.selected);
		if(H.selected == 1)
	    exit(0);
	    else{	
	    Clear();
	}
}
void StartHostedNetwork()
{
    system("netsh wlan start hostednetwork");
    printf("\a");
    IFELSE();
}


void StopHostedNetwork()
{
    system("netsh wlan stop hostednetwork");
    printf("\a\a");
    IFELSE();
}

void ShowHostedNetworkSettings()
{
    system("netsh wlan show hostednetwork setting=security");
    printf("\a\a");
    IFELSE();
}

void ShowHostedNetwork()
{
    system("netsh wlan show hostednetwork");
    printf("\a\a\a");
    IFELSE();
}
void CreateHostedNetwork()
{
	//" netsh wlan start hosted network mode = allow ssid = "+username+" key = "+password
     
	 printf(" \n\n\n Enter your username here: \t");
     scanf("%s", &H.username);
     printf(" Enter your password here: \t");
	 scanf("%s", &H.password);
     strcat(strcat(strcat(command, H.username), linkTogether), H.password);
     system(command);
	 printf("\a");
     IFELSE();

	//Still processing the algorithm
	
	
}

void InterfaceNetwork(){
	system("cls");
	printf("\n\n\n\n\n\t\t\t\t%c HotSpot Command ::::By RhymeZx:::: %c\n\n\n\n", 245 , 245);
	printf(" Enter the number for the section you want to process!!!!!\n\n");
	printf(" Mainmenu\n\n\n");
	printf(" 1. To start the hotspot network, if you've created a hotspot before ------\n 2. To stop hotspot network ------\n 3. To show hotspot network security settings ------\n 4. To show hotspot network details ------\n 5. To create and host a hotspot network at the same time. ------\n 6. To Refresh screen ------\n 7. To exit this program ------\n");
	printf("    Input Here: ");
	scanf("%d", &H.clicked);
	switch(H.clicked)
	{
		case 1:
		printf(" \n Loading ", 175);
		sleep(1);	
		printf("%c ", 175);
		sleep(1);
	    printf("%c ", 175);
	    sleep(1);
	    printf("%c\n\n\n", 175);
	    //system("cls");
		StartHostedNetwork(); //call a method 
		break;
		
		case 2:
		printf(" \n Loading ", 175);
		sleep(1);	
		printf("%c ", 175);
		sleep(1);
	    printf("%c ", 175);
	    sleep(1);
	    printf("%c\n\n\n", 175);
	    //system("cls");
	    StopHostedNetwork(); //call a method 
		break;
		
		case 3:
		printf(" \n Loading ", 175);
		sleep(1);	
		printf("%c ", 175);
		sleep(1);
	    printf("%c ", 175);
	    sleep(1);
	    printf("%c\n\n\n", 175);
	    //system("cls");
	    ShowHostedNetworkSettings(); //call a method 
		break;
		
		case 4:
		printf(" \n Loading ", 175);
		sleep(1);	
		printf("%c ", 175);
		sleep(1);
	    printf("%c ", 175);
	    sleep(1);
	    printf("%c\n\n\n", 175);
	    //system("cls");
	    ShowHostedNetwork(); //call a method 
		break;
		
		case 5:
	    printf(" \n Loading ", 175);
		sleep(1);	
		printf("%c ", 175);
		sleep(1);
	    printf("%c ", 175);
	    sleep(1);
	    printf("%c\n\n\n", 175);
	    //system("cls");
		CreateHostedNetwork(); //call a method 
		break;
		
		case 6:
		Clear(); //call a method 
		break;
			
	    case 7:
		exit(0); //call a method 
		break;
		
		default:
		//system("cls");
		printf(" Please enter the correct input???\n\a");
		break;
}
}



void main()
{

    InterfaceNetwork();
	printf(" ");
	printf(" ");
	printf(" ");
	printf(" \n\n\n\n\n\n\n\n\nAbout to Exit!!!! \a\a\a\a\a\a");
	IFELSE();  
	system("pause");
}

	

