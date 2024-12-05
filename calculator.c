#include <stdio.h>

#define MAX_IN 100 

int main()
{
	printf("Welcome to fabrizio's calculator!\n");
	printf("Aviable features: +, -, / and *\n");
	char buffer[MAX_IN] = {};
	int numero1 = 0;
	while(1)
	{
		printf("Please enter your calculus: ");
		if (fgets(buffer, sizeof(buffer),stdin) != NULL)
		{
			if (buffer[MAX_IN - 1] != '\n')
				printf("Too many characters!! \n");
			else
			{
				bool primero = false;
				bool salgo = false;
				int i = 0;
				while ((i < MAX_IN) && (buffer[i] != '\n') && !salgo)
				{
					if ((buffer[i] < 48) && (buffer[i] > 57) & (buffer[i] != '*') & (buffer[i] != '+') & (buffer[i] != '-') & (buffer[i] != '/'))
					{
						printf("Invalid character\n");
						salgo = true;
					}
					else
					{
						if (primero && (buffer[i] < 48) && (buffer[i] > 57))
						{
							printf("Ivalid opration\n");
							salgo = true; 
						}
						else if primero
						{
							numero1 = atoi(buffer[i]);
							primero = false;
						}
						else if (!primero && (buffer[i] > 48) && (buffer[i] < 57))
							numero1 = numero1*10 + atoi(buffer[i]);
						else if (!primero && (buffer[i] < 48) && (buffer[i] > 57))

					}
				}				
			}
		}
		else
			printf("An error has ocurred\n");
	}
}