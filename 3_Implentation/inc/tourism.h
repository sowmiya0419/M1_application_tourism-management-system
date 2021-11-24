#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct userprofile
{
    char user_fname[100];
    char user_password[100];
    char user_place[100];
    float ticket_price;
    int user_numtick;
    struct userprofile *next;
}userprofile;
void ShowBrochure();
userprofile* InitializeListing(userprofile*);
userprofile* Adding_Client(userprofile*);
void login_client(userprofile*);
void booking_ticket(userprofile*);
void printing_ticket(userprofile*);
void cancelling_ticket(userprofile*);
void changing_pass(userprofile*);
void logout_client();
void checking_ticket(userprofile*);
void displaying_all_bookings(userprofile*);
void WriteToFile(userprofile*);
void exit_system();
userprofile* InitializeListing(userprofile *hello)
{
    userprofile* text,*petrol,temporary;
    FILE *fileopen;
    int counting_cooridantes=0,z;
    float following;
    fileopen=fopen("users.txt","r");
