void login_client(userprofile* hello)
{
char client_username[100];
char client_password[100];
fflush(stdin);
printf("\n\n");
printf("\t\tEnter Email/Username:\n\t\t");
scanf("%s",client_username);
fflush(stdin);
printf("\n\t\tEnter Password:\n\t\t");
scanf(" %[^\n]s",client_password);
while(hello!=NULL)
{
if((!strcmp(hello-&gt;user_fname,client_username)) &amp;&amp; (!strcmp(hello-&gt;user_password,client_password)))
{
currentwindow=login_system;
strcpy(current_client,client_username);
printf("\n\t\tLogin successful!\n"); system("PAUSE"); return; } else if((!strcmp(hello-&gt;user_fname,client_username)) &amp;&amp; (strcmp(hello-&gt;user_password,client_password))) { printf("Password mismatch\n"); return; } hello=hello-&gt;next; } printf("Sorry, no such user record was found\n");
}