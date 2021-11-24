void printing_ticket(userprofile <em>hello) { while(hello!=NULL) { if(!strcmp(hello-&gt;user_fname,current_client)) break; hello=hello-&gt;next; } if(!strcmp(hello-&gt;user_place,"\0") || hello-&gt;ticket_price==0.0 || hello-&gt;user_numtick==0) { printf("You do not have a ticket booked yet\n"); return; } float tot=0.0; tot=(hello-&gt;ticket_price)</em>(hello-&gt;user_numtick);
FILE *fileopen;
char filename[50];
strcpy(filename,hello-&gt;user_fname);
strcat(filename,"_ticket.txt");
fileopen=fopen(filename,"w");
if(fileopen==NULL)
{
printf("Problem opening the file\n");
return;
}
if(fgetc(fileopen)==EOF)
{
fprintf(fileopen,"TOURISM TICKET\n===============\n\n");
}
fprintf(fileopen,"Email ID: %s\nTour Code: %s\nTicket Cost: P %f\nNumber of tickets: %d\nTotal Cost: P %f\n",hello-&gt;user_fname,hello-&gt;user_place,hello-&gt;ticket_price,hello-&gt;user_numtick,tot);
fclose(fileopen);
}