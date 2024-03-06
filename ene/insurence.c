//===============-------- QUESTION ------------=================

//A company insures its drivers in the following cases

//-If driver is married
//-If the driver is unmarried, male & above 30 years of age
//-If the driver is unmarried, female & above 25 years of age

//In all other cases the driver is not insured.
// If the marital status, gender and age of the driver are entered through the
//keyboard,
// write a program to determine whether the driver is to be insured or not.

//=======------------=================== SOURCE CODE ===========----------=====

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <locale.h>
#include <float.h>
//int main()
//{
//	system("color 0c");
//    int age;
//    char mstate[20];
//    char gdr;
//    
//    printf("\n\n ==============Welcome to insure yourself==========");
//    printf("\n\n               What is your gender  :  ");
//    scanf(" %c", &gdr);  // Note the space before %c to skip whitespace characters
//    
//    printf("\n\n               Your age :  ");
//    scanf("%d", &age);
//    
//    printf("\n\n               What is your martial status : ");
//    scanf("%s", mstate);
//    
//    if ((gdr == 'm' || gdr == 'f') && age == 30 || age == 25)
//    {
//        if (strcmp(mstate, "unmarried") == 0 || strcmp(mstate, "married")==0)
//        {
//            printf("you can be insured!!");
//        }
//        else
//        {
//            printf("Sorry, only unmarried individuals can be insured at age 30.");
//        }
//    }
//    else
//    {
//        printf("Sorry, you are not eligible for insurance.");
//    }
//	
//    return 0;
//	char ch;
//	ch = getchar();
//	printf(" %c",ch);
//}

















//
//int main(){
//	int a;
//	a=-1;
//	for(a=-1;a<=11;a++)
//	{
//		printf("\n%d\n",a);
//	}
//	printf("%d",a);
//}


//Write a program that prints squares of the integer taken as input,
// until the square is less than 1000.
//void square(int a,int b)
//{
//	int c;
//	c = a*b;
//	return c;
//}
//int main()
//{
//	int a,n;
//	printf("Enter any number");
//	scanf("%d",&n);
//	square();
//	for(a=2;a<1000;a*n)
//	{
//		printf("\n%d\n",n);
//	}
//	return 0;
//}







// ye lafz teer toh kaman tum ho
//meri awaaz ye zaban tom ho
// na hi pereh na hi saya tum ne ajnabi






//long int multiplyNumbers(int n);
//int main() {
//    int n;
//    printf("Enter a positive integer: ");
//    scanf("%d",&n);
//    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
//    return 0;
//}
//
//long int multiplyNumbers(int n) {
//    if (n>=1)
//        return n*multiplyNumbers(n-1);
//    else
//        return 1;
//}










#include <stdio.h>

int main() {
    // Declare an array of size 10
    int arr[10];

    // Insert elements into the array
    printf("Enter 10 integer elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the elements on new lines
    printf("\nElements in the array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

