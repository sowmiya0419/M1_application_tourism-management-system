void booking_ticket(userprofile *hello)
{
userprofile *trans=hello;
char place[100];
while(hello!=NULL)
{
if(!strcmp(hello-&gt;user_fname,current_client))
break;
hello=hello-&gt;next;
}
if(hello==NULL)
return;
if(hello-&gt;ticket_price!=0.0)
{
printf("You must cancel your previous ticket before buying a new one\n");
return;
}
ShowBrochure();
float pricelist[]={3000.0,5000.0,2000.0,10000.0,12000.0,5000.0,7000.0,8000.0,12000.0,14000.0};
fflush(stdin);
printf("\nEnter place code (eg: AA, BB)\n");
scanf(" %[^\n]s",place);
char choice;
fflush(stdin);
printf("\nWould You Like to Confirm Booking?\n[1] - Yes\n[2] - No\n");
scanf("%c",&amp;choice);
float price;
if(choice!='1')
return;
if(strcmp(place,"LL")==0)
price=pricelist[0];
else if(strcmp(place,"AA")==0)
price=pricelist[1];
else if(strcmp(place,"BB")==0)
price=pricelist[2];
else if(strcmp(place,"CC")==0)
price=pricelist[3];
else if(strcmp(place,"DD")==0)
price=pricelist[4];
else if(strcmp(place,"EE")==0)
price=pricelist[5];
else if(strcmp(place,"FF")==0)
price=pricelist[6];
else if(strcmp(place,"GG")==0)
price=pricelist[7];
else if(strcmp(place,"HH")==0)
price=pricelist[8];
else if(strcmp(place,"II")==0)
price=pricelist[9];
else
{
printf("That tour code doesn't exist\n");
return;
}
printf("Enter the number of tickets you want to book?\n");
scanf("%d",&amp;hello-&gt;user_numtick);
if(hello-&gt;user_numtick==0)
return;
strcpy(hello-&gt;user_place,place);
hello-&gt;ticket_price=price;
WriteToFile(trans);
printf("Bookings Done!!\n");
system("PAUSE");
}