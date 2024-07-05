#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef long long ll;
ll var = 20;

typedef struct students 
{
    char name[50];
    char branch[50];
    int ID_no;
} stu;

void operators();

struct Person
{
    char name[50];
    int age;
    float height;
};

union NumericValue
{
    int intValue;
    float floatValue;
    char stringValue[20];
};

enum DaysOfWeek
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{

    return 0;
}

int main1()
{
    int number;
    int a = 20, b = 30; // declaring 2 variable of integer type
    double average_score;
    float f = 20.9;
    char c = 'A';
    bool x = false; // #include<stdbool.h>

    ll var = 20;

    stu st;
    strcpy(st.name, "Kamlesh Joshi");
    strcpy(st.branch, "Computer Science And Engineering");
    st.ID_no = 108;
    // printf("Name: %s\n", st.name);

    /*
    Integer constant	10, 11, 34, etc.
    Floating-point constant	45.6, 67.8, 11.2, etc.
    Octal constant	011, 088, 022, etc.
    Hexadecimal constant	0x1a, 0x4b, 0x6b, etc.
    Character constant	'a', 'b', 'c', etc.
    tring constant	"java", "c++", ".net", etc.
    */

    int numbers[5];
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    struct Person person1;

    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.height = 1.8;
    printf("Name: %s\n", person1.name); // Name: John Doe

    union NumericValue value;
    value.intValue = 42;
    printf("Integer Value: %d\n", value.intValue); // Integer Value: 42

    enum DaysOfWeek today;
    today = Wednesday;
    printf("Today is %d\n", today); // Today is 2

    printf("Hello C Programming\n");
    scanf("%d", &number);
    printf("cube of number is:%d ", number * number * number);

    return 0;
}

void operators()
{
    // Precedence and associative
    // Unary	+ - ! ~ ++ - - (type)* & sizeof	Right to left
    // Conditional	?:	Right to left
    // Assignment	= += -= *= /= %=>>= <<= &= ^= |=	Right to left

    // Arithmatic >  //+ - * / %

    // Relational > // == != > < >= <= // true or false

    // Shift
    {

        unsigned int a = 5;   // 0000 0101 in binary
        int result = a << 2;  // result = 20  // 0001 0100 in binary
        unsigned int b = 20;  // 0001 0100 in binary
        int result1 = b >> 2; // result1 = 5  // 0000 0101 in binary
    }

    // Logical
    {
        int a = 5;
        int b = 3;
        // true && true = true
        // false || false = false
        int result = (a > 3) && (b < 5);  // result = 1 (true)
        int result1 = (a > 3) || (b > 5); // result = 1 (true)
        int result2 = !(a > 3);           // result2 = 0 (false)

        unsigned int a1 = 5;   // 0000 0101 in binary
        unsigned int b1 = 3;   // 0000 0011 in binary
        int result3 = a1 & b1; // result3 = 1  // 0000 0001 in binary
        int result4 = a | b;   // result4 = 7  // 0000 0111 in binary
        int result5 = ~a;      // result5 = -6  // 1111 1001 in binary (assuming 8-bit representation)

        int result6 = (a > b) ? a : b; // result6 = 5

        // sizeof Operator: The sizeof operator returns the size, in bytes, of a variable or a data type.
        int size = sizeof(a); // size = 4  // Assuming int occupies 4 bytes

        // Comma Operator (,): The comma operator evaluates multiple expressions and returns the value of the last expression.
        int result7 = (a += 2, b *= 2, a + b); // result7 = 15  // a = 7, b = 6, a + b = 13
    }
}

void c_format_Specifier()
{
    /*
        %d or %i	It is used to print the signed integer value where signed integer means that the variable can hold both positive and negative values.
        %u	It is used to print the unsigned integer value where the unsigned integer means that the variable can hold only positive value.
        %o	It is used to print the octal unsigned integer where octal integer value always starts with a 0 value.
        %x	It is used to print the hexadecimal unsigned integer where the hexadecimal integer value always starts with a 0x value. In this, alphabetical characters are printed in small letters such as a, b, c, etc.
        %X	It is used to print the hexadecimal unsigned integer, but %X prints the alphabetical characters in uppercase such as A, B, C, etc.
        %f	It is used for printing the decimal floating-point values. By default, it prints the 6 values after '.'.
        %e/%E	It is used for scientific notation. It is also known as Mantissa or Exponent.
        %g	It is used to print the decimal floating-point values, and it uses the fixed precision, i.e., the value after the decimal in input would be exactly the same as the value in the output.
        %p	It is used to print the address in a hexadecimal form.
        %c	It is used to print the unsigned character.
        %s	It is used to print the strings.
        %ld	It is used to print the long-signed integer value.

    */
}

void regular_escape_sequences()
{
    /*
        \a	Alarm or Beep
        \b	Backspace
        \f	Form Feed
        \n	New Line
        \r	Carriage Return
        \t	Tab (Horizontal)
        \v	Vertical Tab
        \\	Backslash
        \'	Single Quote
        \"	Double Quote
        \?	Question Mark
        \nnn	octal number
        \xhh	hexadecimal number
        \0	Null
    */
}

void asci_value()
{

    int k;                         // variable declaration
    for (int k = 0; k <= 255; k++) // for loop from 0-255
    {
        printf("\nThe ascii value of %c is %d", k, k);
    }
}

// Array

void array_1D()
{
    int marks1[5] = {20, 30, 40, 50, 60};
    int marks[5];  // declaration of array
    marks[0] = 80; // initialization of array
    marks[1] = 60;
    printf("%d \n", marks[2]);
}

void array_2D()
{
    int arr[4][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}, {4, 5, 6}};
    
}
