#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
	char user[100];
	char password[100];
	
	char log_user[100];
	char log_password[100];
	
	printf("-- register --\n");
	
	printf("User : ");
	scanf("%s",&user);
	printf("Password : ");
	scanf("%s",&password);
	
	printf("\n-- Login --\n");
	
	printf("User : ");
	scanf("%s",&log_user);
	printf("Password : ");
	scanf("%s",&log_password);
	
	if (strcmp(user, log_user) == 0 && strcmp(password, log_password) == 0)
	{
			printf("login succeed");
	}
	else
	{
		printf("login failed");
	}
	
	getch();
	return(0);
}
