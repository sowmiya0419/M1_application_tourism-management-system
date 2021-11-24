void changing_pass(userprofile *hello)
{
userprofile *trans=hello;
char passcurr[100];
fflush(stdin);
printf("Enter your current password to continue:\n");
scanf(" %[^\n]s",passcurr);
while(hello!=NULL)
{
if(!strcmp(hello-&gt;user_fname,current_client))
break;
hello=hello-&gt;next;
}
if(hello==NULL)
return;
if(!strcmp(passcurr,hello-&gt;user_password))
{
printf("Enter new password:\n");
scanf(" %[^\n]s",hello-&gt;user_password);
}
WriteToFile(trans);
}