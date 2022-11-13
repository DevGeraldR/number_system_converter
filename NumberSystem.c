#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

void decimalToBinary() 
{
    system("clear");

    long decimal,counter = 0;
    int binary[100];
    
    printf("\n\n\nEnter the decimal number ('0' to go to menu): ");
    scanf("%li", &decimal);

    if (decimal != 0) 
    {
        while(decimal != 0) 
        {  
        binary[counter++] = decimal % 2; 
        decimal /= 2; 
        }
        printf("Binary: ");
        for(int x = counter-1; x >= 0; x--) printf("%d", binary[x]);

        decimalToBinary();
    } else system("clear");
}

void binaryToDecimal() 
{
    system("clear");

    long lastNumber,binary;
    int decimal = 0,power = 0;
    
    printf("\n\n\nEnter the binary number('0 to go to menu): ");
    scanf("%li", &binary);

    if(binary != 0) 
    {
        while(binary != 0)  
        {
            lastNumber = binary % 10;
            decimal += lastNumber*(pow(2,power++));
            binary /= 10; 
        }
        printf("Decimal: %d", decimal);

        binaryToDecimal();
    } else system("clear");  
}

void binaryToOctal() 
{
    system("clear");

    long lastNumber, binary;
    int counter = 0;
    int result[20];  
    
    printf("\n\n\nEnter the binary number('0' to go to menu): ");
    scanf("%li", &binary);

    if(binary != 0)
    {
        while(binary != 0) 
        {
            int sum = 0, power = 0, digits = 3;
            
            while (digits != 0)
            {
                lastNumber = binary % 10; 
                sum += lastNumber*(pow(2,power++)); 
                binary /= 10; 
                digits--;
            }
            result[counter++] = sum;
        }

        printf("Octal: ");
        for(int i = counter-1; i>=0; i--) printf("%d", result[i]);

        binaryToOctal();
    } else system("clear") ;
}

void octalToBinary() 
{
    system("clear");

    int counter = 0;
    char binary[100];
 
    printf("\n\n\nEnter the octal number('0' to go to menu): ");
    scanf("%s", binary);

    if(binary[counter] != '0')
    {
        printf("Binary: ");
        while (binary[counter])
        {
            switch (binary[counter])
            {
            case '0':
                printf("000"); 
                break;
            case '1':
                printf("001"); 
                break;
            case '2':
                printf("010"); 
                break;
            case '3':
                printf("011"); 
                break;
            case '4':
                printf("100"); 
                break;
            case '5':
                printf("101"); 
                break;
            case '6':
                printf("110"); 
                break;
            case '7':
                printf("111"); 
                break;
        } 
        counter++;
    } 
    octalToBinary();
    } else system("clear");
}

void binaryToHex() 
{
    system("clear");

    long lastNumber, binary;
    int counter = 0;
    int result[20];  
    
    printf("\n\n\nEnter the binary number('0' to go to menu): ");
    scanf("%li", &binary);

    if(binary != 0)
    {
        while(binary != 0) 
        {
            int sum = 0, power = 0, digits = 4;
            
            while (digits != 0) 
            {
                lastNumber = binary % 10;
                sum += lastNumber*(pow(2,power++)); 
                binary /= 10;
                digits--;
            }
            result[counter++] = sum;
        }

        printf("Hexadecimal: ");
        for(int i = counter-1; i>=0; i--) 
        {
            switch (result[i])
            {
                case 10:
                    printf("A");
                    break;
                case 11:
                    printf("B");
                    break;
                case 12:
                    printf("C");
                    break;
                case 13:
                    printf("D");
                    break;
                case 14:
                    printf("E");
                    break;
                case 15:
                    printf("F");
                    break;
                default:
                    printf("%d", result[i]);
            }
        }

        binaryToHex();
    } else system("clear") ;
}

void hexToBinary() 
{
    system("clear");

    int counter = 0;
    char binary[100];
 
    printf("\n\n\nEnter the hexadecimal number('0' to go to menu): ");
    scanf("%s", binary);

    if(binary[counter] != '0')
    {
        printf("Binary: ");
        while (binary[counter])
        {
            switch (binary[counter])
            {
            case '0':
                printf("0000"); 
                break;
            case '1':
                printf("0001"); 
                break;
            case '2':
                printf("0010"); 
                break;
            case '3':
                printf("0011"); 
                break;
            case '4':
                printf("0100"); 
                break;
            case '5':
                printf("0101"); 
                break;
            case '6':
                printf("0110"); 
                break;
            case '7':
                printf("0111"); 
                break;
            case '8':
                printf("1000"); 
                break;
            case '9':
                printf("1001"); 
                break;
            case 'A':
                printf("1010"); 
                break;
            case 'B':
                printf("1011"); 
                break;
            case 'C':
                printf("1100"); 
                break;
            case 'D':
                printf("1101"); 
                break;
            case 'E':
                printf("1110"); 
                break;
            case 'F':
                printf("1111"); 
                break;
        } 
        counter++;
    } 
    hexToBinary();
    } else system("clear");
}

int main() 
{
    system("clear");

    char menu[] = "\n\n************* Number System Converter *************\n\n\
Enter:\n\
 1. Decimal to Binary\n\
 2. Binary to Decimal\n\
 3. Binary to Octal\n\
 4. Octal to Binary\n\
 5. Binary to Hexadecimal\n\
 6. Hexadecimal to Binary\n\
 7. Help\n\
 8. Quit\n\
Operation number: ";
    char help[] = "\n***************** Instruction   *****************\n\n\
Every each number represent different sort of conversion.\n\
Choose a number that may suits your need.\n\
if you enter an invalid number,\n\
the program will automatically rerun";
    bool running = true;
		
    while(running) {
        printf("%s", menu);
        
        int operation;
        scanf("%d", &operation);

        switch(operation) {
            case 1:
                decimalToBinary();
                break;
            case 2:
                binaryToDecimal();
                break;
            case 3:
                binaryToOctal();
                break;
            case 4:
                octalToBinary();
                break;
            case 5:
                binaryToHex();
                break;
            case 6:
                hexToBinary();
                break;
            case 7:
                system("clear");
                printf("%s", help);
                break;
            case 8:
                system("clear");
                running = false;
                printf("Quited\n\n");
                break;
            default:
                system("clear");
                printf("WARNING! INVALID NUMBER");
        }
    }
    return 0;
}
