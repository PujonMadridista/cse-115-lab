#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
int key=0;
int trackTicket=0;
struct invoice{
char start[20];
char dest[20];
char time[20];

};
struct login
{
    char fname[100];
    char lname[100];
    char username[100];
    char password[100];
};

void registe();
void login();
int WelcomeMessage();
int Bus();




int main()
{
verification_line:
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############             Please Verify Yourself               ############");
    printf("\n\t\t\t############       Please Register If You're a New User       ############");
    printf("\n\t\t\t############                    Or Login                      ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    int cho;
    printf("\n\n\t\t\tEnter 1 For Register Or Enter 2 For Login: ");
    scanf("%d",&cho);
    if(cho==1)
    {
        system("CLS");
        registe();
        system("cls");
        login();
    }
    else if(cho==2)
    {
        system("CLS");
        login();
    }
    else
    {
        system("cls");
        goto verification_line;
    }


    system("cls");


Welcome_Line:
    system("cls");
    key=WelcomeMessage();
    if(key==1||key==2)
    {
        Bus();
    }

    else
    {
        goto Welcome_Line;
    }





    return 0;

}
void registe()
{
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                  ############");
    printf("\n\t\t\t############             Please Register Yourself             ############");
    printf("\n\t\t\t############                                                  ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    FILE *log;
    log=fopen("login12.txt","w");
    struct login l;

    printf("\n\t\t\tEnter First Name: ");
    scanf("%s",l.fname);
    printf("\n\t\t\tEnter Last Name: ");
    scanf("%s",l.lname);

    printf("\n\t\t\tEnter Username: ");
    scanf("%s",l.username);

    printf("\n\t\t\tEnter Password: ");
    scanf("%s",l.password);

    fwrite(&l,sizeof(l),1,log);

    fclose(log);

    printf("\n\n\t\t\tRegistration Successful...\n");
    printf("\n\n\t\t\tNow login with userid and password.\n");
    printf("\n\t\t\tPress Any Key To Continue.........");
    getch();
    system("CLS");

}

void login()
{
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                  Please Enter                    ############");
    printf("\n\t\t\t############            Your UserName And Password            ############");
    printf("\n\t\t\t############                    TO Login                      ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    char username[200],password[20];
    FILE *log;
    log=fopen("login12.txt","r");
    struct login l;
    printf("\n\n\t\t\tUserName: ");
    scanf("%s",&username);
    printf("\n\n\t\t\tPassword: ");
    scanf("%s",&password);

    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {

            key = WelcomeMessage;

        }
        else
        {
            system("cls");
            printf("Incorrect Username or password. Please Try again..\n\n");
            login();
        }
    }
    fclose(log);

}

int WelcomeMessage()
{

    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t        =                     TO                    =");
    printf("\n\t\t\t        =                 Car Booking               =");
    printf("\n\t\t\t        =                   System                  =");
    printf("\n\t\t\t        =                                           =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    int TransportTYpe;
    printf("\n\n\n\t\t\t Available Transport Options:\n");
    printf("\n\t\t\t 1. Inter-city\n");
    printf("\n\t\t\t 2. Intra-city\n");
    printf("\n\n\n\t\t\t Enter Your fare type:");
    scanf("%d", &TransportTYpe);

    system("cls");

    return TransportTYpe;
    }
    int Bus()
{
DestinationB_Line:
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                   WELCOME                 =");
    printf("\n\t\t\t        =                     To                    =");
    printf("\n\t\t\t        =                    Car                    =");
    printf("\n\t\t\t        =                   Booking                 =");
    printf("\n\t\t\t        =                                           =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    struct invoice a;
    fflush(stdin);
    printf("\n\n\n\t\t\tEnter Pick Up Point: ");
    scanf("%s", a.start);
    printf("\n\t\t\tEnter Your Destination: ");
    scanf("%s", a.dest);
    printf("\n\t\t\tEnter Pick Up Time: ");
    scanf("%s", a.time);
    printf("\n\n\nEnter any key to confirm.......");
    getch();
    system("cls");
    printf("\n\n\n\t\t\tYour fare details:\n");
      printf("\n\n\n\t\t\tPick Up Point: %s", a.start);
        printf("\n\n\n\t\t\tDestination: %s", a.dest);
            printf("\n\n\n\t\t\tTime: %s", a.time);
            printf("\n\n\n\t\t\tTotal Cost: 2000");
            int k;
            printf("\n\n\n\t\t\tEnter 1 to confirm Your purchase or 0 to edit fare details: ");
            scanf("%d", &k);
            if(k==1){
               printf("\n\n\n\t\t\tThanks For Your Purchase.....\n\n Enter any key to exit.....");
               getch();
               return 0;
            }
            else{
                goto DestinationB_Line;
            }
}
