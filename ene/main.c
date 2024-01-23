#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void addition()
{
	int a,b;
	printf("Enter two numbers to add:");
	scanf("%d %d",&a,&b);
	printf("Difference: %d\n",a + b);
}
void subtraction()
{
	int a,b;
	printf("Enter two numbers to subtract (a - b):");
	scanf("%d %d",&a,&b);
	printf("Difference: %d\n",a - b);
}
void division()
{
	int a,b;
	printf("Enter two numbers to divide:");
	scanf("%d %d",&a,&b);
	printf("Difference: %d\n",a / b);
}
void multiplication()
{
	int a,b;
	printf("Enter two numbers to multiply:");
	scanf("%d %d",&a,&b);
	printf("Difference: %d\n",a * b);
}
void program()
{
	printf("Khatam");
}
int main(int argc, char *argv[]) 
{
	int choice;
	printf("ASALAM O ALIKUM\n");
	printf("Welcome!\n");
	printf("Menu\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Division\n");
	printf("4. Multiplication\n");
	printf("5. program pe ao ab tum\n");
		printf("\nEnter your type by number:\n");
		scanf("%d",&choice);
	while(1)
	{
	switch(choice)
	{
	case 1:
		{
			addition();
		}
		break;
		case 2:
			{
				subtraction();	
			}
			break;
			case 3:
				{
					division();	
				}
				break;
				case 4:
					{
						multiplication();	
					}
					break;
					case 5:
						{
							program();
						}
						break;
						default:
						{
							printf("Abe chahiye kya tujhe \n Menu dekh na saale\n Mujhe kyu confuse kr rha ha.");
						}
	}
	}
	
	return 0;
}