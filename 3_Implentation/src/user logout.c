void logout_client()
{
if(currentwindow==main_menu || strcmp(current_client,"\0")==0)
{
printf("You must be logged in to logout\n");
return;
}
strcpy(current_client,"\0");
currentwindow=main_menu;
printf("You have been successfully logged out\n");
}