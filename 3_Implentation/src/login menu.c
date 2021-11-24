int main()
{
printf("\t\t\t**** || TOURISM MANAGEMENT SYSTEM || ****\n");
userprofile *hello=NULL;
int choice1,choice2;
hello=InitializeListing(hello);
while (1)
{
if(currentwindow==main_menu) 
{ 
printf("\n\t\t\t\tAdd User - 1\n\t\t\t\tLogin User - 2\n\t\t\t\tBrochure - 3\n\t\t\t\tExit - 4\n\n\t\t\t\tEnter:");
scanf("%d",&amp;choice1); 
switch(choice1) 
{ 
case 1: hello=Adding_Client(hello); 
break; case 2: login_client(hello); 
break; case 3: ShowBrochure(); 
break; case 4: exit_system(); 
exit(0); 
break; 
default: printf("Not a valid input at this stage\n"); 
} 
}