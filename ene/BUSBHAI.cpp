//#include <stdio.h>
//
//// Function to calculate factorial
//long long factorial(int n) {
//    if (n == 0 || n == 1)
//        return 1;
//    else
//        return n * factorial(n - 1);
//}
//
//int main() {
//    int num;
//    printf("Enter an integer: ");
//    scanf("%d", &num);
//
//    if (num < 0)
//        printf("Factorial is not defined for negative numbers.\n");
//    else
//        printf("Factorial of %d = %lld\n", num, factorial(num));
//
//    return 0;
//}



//#include <stdio.h>
//
//// Function to calculate power
//double power(double a, int b) {
//    double result = 1.0;
//    for (int i = 0; i < b; i++)
//        result *= a;
//    return result;
//}
//
//int main() {
//    double base;
//    int exponent;
//    printf("Enter base: ");
//    scanf("%lf", &base);
//    printf("Enter exponent: ");
//    scanf("%d", &exponent);
//
//    printf("%.2lf raised to the power of %d = %.2lf\n", base, exponent, power(base, exponent));
//
//    return 0;
//}









//#include <stdio.h>
//
//// Function to convert year to Roman numerals
//void yearToRoman(int year) {
//    char* roman[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
//    int value[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
//
//    printf("Roman equivalent of %d is ", year);
//    for (int i = 12; i >= 0; i--) {
//        while (year >= value[i]) {
//            printf("%s", roman[i]);
//            year -= value[i];
//        }
//    }
//    printf("\n");
//}
//
//int main() {
//    int year;
//    printf("Enter a year: ");
//    scanf("%d", &year);
//    yearToRoman(year);
//
//    return 0;
//}








//#include <stdio.h>
//
//// Function to multiply float and integer
//float multiply(float f, int n) {
//    return f * n;
//}
//
//int main() {
//    float floatValue;
//    int intValue;
//    printf("Enter a float value: ");
//    scanf("%f", &floatValue);
//    printf("Enter an integer value: ");
//    scanf("%d", &intValue);
//
//    printf("Product: %.2f\n", multiply(floatValue, intValue));
//
//    return 0;
//}











//#include <stdio.h>
//
//// Function to calculate sum and average
//void sumAndAverage(int a, int b, int c, int d, int e) {
//    int sum = a + b + c + d + e;
//    float average = (float)sum / 5;
//
//    printf("Sum: %d\n", sum);
//    printf("Average: %.2f\n", average);
//}
//
//int main() {
//    int num1, num2, num3, num4, num5;
//    printf("Enter five integers: ");
//    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
//
//    sumAndAverage(num1, num2, num3, num4, num5);
//
//    return 0;
//}










//#include <stdio.h>
//#include <string.h>
//#include <time.h>
//
//// Define the employee structure
//struct Employee {
//    int empCode;
//    char empName[50];
//    char joinDate[20]; // Assuming date format: "YYYY-MM-DD"
//};
//
//// Custom function to convert date string to struct tm
//int parseDate(const char* dateStr, struct tm* result) {
//    if (strptime(dateStr, "%Y-%m-%d", result) == NULL) {
//        printf("Error parsing date.\n");
//        return 0;
//    }
//    return 1;
//}
//
//int main() {
//    int numEmployees;
//    printf("Enter the number of employees: ");
//    scanf("%d", &numEmployees);
//
//    // Create an array of employees
//    struct Employee employees[numEmployees];
//
//    // Input employee data
//    for (int i = 0; i < numEmployees; i++) {
//        printf("Enter details for Employee %d:\n", i + 1);
//        printf("Employee Code: ");
//        scanf("%d", &employees[i].empCode);
//        printf("Employee Name: ");
//        scanf("%s", employees[i].empName);
//        printf("Joining Date (YYYY-MM-DD): ");
//        scanf("%s", employees[i].joinDate);
//    }
//
//    // Get current date
//    time_t currentTime;
//    struct tm* currentDate;
//    time(&currentTime);
//    currentDate = localtime(&currentTime);
//
//    // Calculate tenure and display names
//    printf("\nEmployees with tenure of 3 or more years:\n");
//    for (int i = 0; i < numEmployees; i++) {
//        struct tm joinDate;
//        if (parseDate(employees[i].joinDate, &joinDate)) {
//            double tenure = difftime(currentTime, mktime(&joinDate)) / (365 * 24 * 3600);
//            if (tenure >= 3) {
//                printf("%s\n", employees[i].empName);
//            }
//        }
//    }
//
//    return 0;
//}










//#include <stdio.h>
//
//int main() {
//    FILE* file;
//    char HUZAIFA[100];
//    char line[100];
//    int lineNumber = 1;
//
//    printf("Enter the filename: ");
//    scanf("%s", HUZAIFA);
//
//    file = fopen(HUZAIFA, "r");
//    if (file == NULL) {
//        printf("Error opening file.\n");
//        return 1;
//    }
//
//    printf("Contents of %s:\n", HUZAIFA);
//    while (fgets(line, sizeof(line), file) != NULL) {
//        printf("%d: %s", lineNumber, line);
//        lineNumber++;
//    }
//
//    fclose(file);
//    return 0;
//}










//#include <stdio.h>
//
//int main() {
//    FILE* file;
//    char filename[100];
//    char data[100];
//
//    printf("Enter the filename: ");
//    scanf("%s", filename);
//
//    file = fopen(filename, "w");
//    if (file == NULL) {
//        printf("Error opening file.\n");
//        return 1;
//    }
//
//    printf("Enter data to write (max 100 characters): ");
//    scanf(" %[^\n]", data);
//
//    fprintf(file, "%s\n", data);
//    printf("Data written to %s.\n", filename);
//
//    fclose(file);
//    return 0;
//}










#include <stdio.h>

int main() {
    FILE* sourceFile;
    FILE* targetFile;
    char sourceFilename[100];
    char targetFilename[100];
    char line[100];

    printf("Enter source filename: ");
    scanf("%s", sourceFilename);
    printf("Enter target filename: ");
    scanf("%s", targetFilename);

    sourceFile = fopen(sourceFilename, "r");
    targetFile = fopen(targetFilename, "a");

    if (sourceFile == NULL || targetFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), sourceFile) != NULL) {
        fputs(line, targetFile);
    }

    printf("Contents of %s appended to %s.\n", sourceFilename, targetFilename);

    fclose(sourceFile);
    fclose(targetFile);
    return 0;
}

