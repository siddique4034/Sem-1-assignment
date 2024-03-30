#include <stdio.h>
#include <math.h>


/*
////////WAP in C ro swap two numbers without using third variable///////////

int main() {
    int a = 10, b = 20;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
*/



/*
////////WAP in C to add two numbers and display them//////////

int main () {
    int a = 12, b = 8, sum;
    sum = a + b;
    printf("Sum of %d and %d is %d", a, b, sum);

    return 0;
}

*/



/*
////////WAP in C to find the size of int, float, double, char/////////////

int main() {
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of float: %ld bytes\n", sizeof(float));
    printf("Size of double: %ld bytes\n", sizeof(double));
    printf("Size of char: %ld bytes\n", sizeof(char));

    return 0;
}

*/



/*
/////////WAP in C to check whether the nujber is odd or even////////////

int main() {
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is odd or even
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}

*/



/*
///////WAP in C to find the ASCII value of character entered by the user///////////

int main() {
    char c;
    printf("Entr te character ");
    scanf("%c", &c);

    printf("ASCII vale of %c is %d", c, c);

    return 0;
}

*/



/*
////////////WAP to check whether the character is vowels or constant///////////

int main () {
    char c;
    printf("Enter the character ");
    scanf("%c", &c);

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        printf("It is a vowel");
    } else {
        printf("It is a constant");
    }

    return 0;
}

*/



/*
////////WAP in C to perform a simple calculator operation/////////////

int add(num1, num2) {
    int val = num1 + num2;

    return val;
}
int subtract(num1, num2) {
    int val = num1 - num2;

    return val;
}
int multiply(num1, num2) {
    int val = num1 * num2;

    return val;
}
float divide(num1, num2) {
    float val = num1 / num2;

    return val;
}

int main() {
    int n1, n2, opr;
    float result;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("What operation do you want? (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division) ");
    scanf("%d", &opr);

    if (opr==1) {
        result = add(n1, n2);
        printf("The result is %f", result);
    } else if (opr==2) {
        result = subtract(n1, n2);
        printf("The result is %f", result);
    } else if (opr==3) {
        result = multiply(n1, n2);
        printf("The result is %f", result);
    } else if (opr==4) {
        result = divide(n1, n2);
        printf("The result is %f", result);
    }

    return 0;
}

*/



/*
////////WAP in C to calculate the sum of n natural number////////// 

int main() {
    int n, sum;
    printf("Enter the nth number: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) {
        sum += i;
    }

    printf("Sum of %d natural number is %d", n, sum);

    return 0;
}

*/



/*
//////////WAP in C to calculate the number of digits of integer enter by the user////////////

int main() {
    int num, count = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while(num != 0) {
        num /= 10;
        count++;
    }
    
    printf("Number of digits: %d", count);
    
    return 0;
}

*/



/*
/////////WAP in C to checkwhether a number is palindrome or not//////////

int checkPalindrome(int num) {
    int reverse = 0, originalNum = num;

    while (num > 0) {
        int remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reverse) {
        return 1; // Palindrome
    } else {
        return 0; // Not a Palindrome
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkPalindrome(num) == 1) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}

*/



/*
/////////WAP in C to check whether a three digits number is Armstrong or not//////////////

int checkArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    // store the number of digits in n
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // check if it is an Armstrong number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        return 1; // Armstrong number
    else
        return 0; // Not an Armstrong number
}

int main() {
    int num;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
    } else {
        if (checkArmstrong(num) == 1) {
            printf("%d is an Armstrong number.\n", num);
        } else {
            printf("%d is not an Armstrong number.\n", num);
        }
    }

    return 0;
}

*/



/*
//////////WAP in C to print right half pyramid pattern of star/////////////

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) {
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

*/



/*
//////////WAP in C to print inverted left half pyramid pattern of star///////////

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=rows; i>=1; i--) {
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

*/



/*
//////////WAP in C to print full pyramid pattern of star/////////////

int main() {
    int rows, spaces;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (spaces = 0; spaces < rows - i; spaces++) {
            printf(" ");
        }
        
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

*/



/*
////////////WAP in C to print full inverted pyramid pattern of star///////////

int main() {
    int rows, spaces;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        // Print spaces
        for (spaces = 0; spaces < rows - i; spaces++) {
            printf(" ");
        }
        
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

*/



/*
//////////WAP in C to take five numbers in an array as user input and display it///////////

int main() {
    int numbers[5];

    printf("Enter five numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("The numbers you entered are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
*/



/*
//////////WAP in C to take 2*2 matrix and display it////////////

int main() {
    int matrix[2][2];
    
    printf("Enter the elements of the 2x2 matrix:\n");

    // Input elements of the matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe 2x2 matrix entered is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

*/



/*
//////////WAP in C to take 3x3 matrix and display diagonal only/////////////

int main() {
    int matrix[3][3];
    
    printf("Enter the elements of the 3x3 matrix:\n");

    // Input elements of the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the diagonal elements
    printf("Diagonal elements of the matrix are: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", matrix[i][i]);
    }
    
    return 0;
}

*/



/*
//////////WAP in C to add two numbers using function and return result//////////

int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int n1, n2, sum;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    sum = add(n1, n2);

    printf("The sum is: %d\n", sum);

    return 0;
}

*/



/*
//////////WAP in C to reverse string using recursion string function/////////

#include <string.h>

void reverseString(char str[], int start, int end) {
    char temp;
    if (start >= end) {
        return;
    }

    // Swap characters at start and end
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call to reverse the substring
    reverseString(str, start+1, end-1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    reverseString(str, 0, len-1);

    printf("Reversed string: %s\n", str);

    return 0;
}

*/



/*
//////////WAP in C to find the frequency of character in string///////////////

#include <string.h>

int charFrequency(char str[], char ch) {
    int frequency = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            frequency++;
        }
    }

    return frequency;
}

int main() {
    char str[] = "Hello, World!";
    char searchChar = 'o';
    int frequency = charFrequency(str, searchChar);

    printf("The frequency of '%c' in the string is: %d\n", searchChar, frequency);

    return 0;
}

*/



/*
/////////WAP in C to insert, update, delete and append telephone name and numbers input by user//////////

#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 50
#define MAX_NAME_LENGTH 50
#define MAX_NUMBER_LENGTH 15

struct Contact {
    char name[MAX_NAME_LENGTH];
    char number[MAX_NUMBER_LENGTH];
};

int numContacts = 0;
struct Contact contacts[MAX_CONTACTS];

void displayContacts() {
    printf("Contacts List:\n");
    for (int i = 0; i < numContacts; i++) {
        printf("%d. Name: %s, Number: %s\n", i + 1, contacts[i].name, contacts[i].number);
    }
}

void insertContact() {
    if (numContacts < MAX_CONTACTS) {
        printf("Enter name: ");
        scanf("%s", contacts[numContacts].name);
        printf("Enter number: ");
        scanf("%s", contacts[numContacts].number);
        numContacts++;
        printf("Contact added successfully!\n");
    } else {
        printf("Cannot add more contacts. Limit reached.\n");
    }
}

void updateContact() {
    int index;
    printf("Enter the index of the contact you want to update: ");
    scanf("%d", &index);

    if (index > 0 && index <= numContacts) {
        printf("Enter updated name: ");
        scanf("%s", contacts[index - 1].name);
        printf("Enter updated number: ");
        scanf("%s", contacts[index - 1].number);
        printf("Contact updated successfully!\n");
    } else {
        printf("Invalid index. Please enter a valid index.\n");
    }
}

void deleteContact() {
    int index;
    printf("Enter the index of the contact you want to delete: ");
    scanf("%d", &index);

    if (index > 0 && index <= numContacts) {
        for (int i = index - 1; i < numContacts - 1; i++) {
            strcpy(contacts[i].name, contacts[i + 1].name);
            strcpy(contacts[i].number, contacts[i + 1].number);
        }
        numContacts--;
        printf("Contact deleted successfully!\n");
    } else {
        printf("Invalid index. Please enter a valid index.\n");
    }
}

int main() {
    int choice;

    do {
        printf("\nTelephone Directory Menu:\n");
        printf("1. Display Contacts\n");
        printf("2. Insert Contact\n");
        printf("3. Update Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayContacts();
                break;
            case 2:
                insertContact();
                break;
            case 3:
                updateContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }

    } while(choice != 5);

    return 0;
}

*/



/*
/////////WAP in C to write the Output into file using file stream//////////

#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "This is the output written to the file.\n");
    
    fclose(file);

    printf("Output successfully written to file.\n");

    return 0;
}

*/



/*
//////////WAP in C to read from file and display as output on console////////////

#include <stdio.h>

int main() {
    FILE *file;
    char content[1000]; // Assuming the content in the file is less than 1000 characters

    file = fopen("file.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read content from the file
    fscanf(file, "%[^\n]", content);

    // Display the content on the console
    printf("Content from the file:\n%s\n", content);
    
    fclose(file);

    return 0;
}

*/

