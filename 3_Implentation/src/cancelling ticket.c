void cancelling_ticket(userprofile *hello)
{
userprofile *trans=hello;
while(hello!=NULL)
{
if(!strcmp(hello-&gt;user_fname,current_client))
break;
hello=hello-&gt;next;
}
int flag=-1; if(hello==NULL) printf("No such user\n"); if(strcmp(hello-&gt;user_place,"AA")==0) flag++; else if(strcmp(hello-&gt;user_place,"BB")==0) flag++; else if(strcmp(hello-&gt;user_place,"CC")==0) flag++; else if(strcmp(hello-&gt;user_place,"DD")==0) flag++; else if(strcmp(hello-&gt;user_place,"EE")==0) flag++; else if(strcmp(hello-&gt;user_place,"FF")==0) flag++; else if(strcmp(hello-&gt;user_place,"GG")==0) flag++; else if(strcmp(hello-&gt;user_place,"HH")==0) flag++; else if(strcmp(hello-&gt;user_place,"II")==0) flag++; else if(strcmp(hello-&gt;user_place,"JJ")==0) flag++; else { printf("You haven't booked a tour yet\n"); return; } if(flag==0) { printf("Your ticket has been successfully cancelled\nA refund of P %f for Tour Code %s for %d tickets will soon be made to your original source of purchase\n",hello-&gt;ticket_price,hello-&gt;user_place,hello-&gt;user_numtick); strcpy(hello-&gt;user_place,"N/A"); hello-&gt;ticket_price=0.0; hello-&gt;user_numtick=0; WriteToFile(trans); }
}