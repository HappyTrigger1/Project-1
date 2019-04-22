#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void encryption(char arr[]);                           //Function prototype for encrypting
void decryption(char arr[]);                           //Function prototype for decrypting


int main() {

    FILE *input;                                       //Establishes a file input.txt 
    char c[200];
    int i = 0;
    
    input = fopen("input.txt", "r");                   //Sets up file input.txt for reading
    
    while(feof(input) == 0){
        fscanf(input, "%c", &c[i]);                    //Scans words from input.txt file
        i++;
    }

    encryption(c);                                     //Encrypts the words from input.txt
           
}



//Function for encryption/decryption
void encryption(char arr[]){
    FILE *output;                                    //Establishes a file output.txt
    output = fopen("output.txt", "w");               //Sets up file output.txt for writing
    int i;
    fprintf(output,"Encrypted Message: ");
    
    for(i = 0; i < strlen(arr); i++){
        arr[i] = arr[i] + 1;                         //Shifts letters across 1 for encryption
        fprintf(output, "%c", arr[i]);               //Writes the encrypted word to output.txt
        }
      
    fprintf(output, "\nDecrypted Message: ");
    int k;
    
    for(k = 0; k < strlen(arr); k++){
        arr[k] = arr[k] - 1;                        //shifts letters across 1 for encryption
        fprintf(output, "%c", arr[k]);              //Writes the decrypted word to output.txt
        }
}



