//Substitution Cipher
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//Function prototypes
void encrypt(char *message);
void decrypt(char *message);                                      //Prototype for decryption function




//Main code
int main(){
    FILE *output;
    FILE *input;
    
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
       
    int i = 0;
    char message[10000];

    while(feof(input) == 0){
        fscanf(input, "%c", &message[i]);                    //Scans words from input.txt file
        i++;
    }
   
    int b = i-1;
    for(i = 0; i < b;){
        //printf("%c\n", message[i]);
        i++;
    }
  
    encrypt(message);                           //Encrypts message
    fprintf(output, "Encrypted Text: ");
    for(i = 0; i < b;){
        fprintf(output, "%c", message[i]);
        i++;
    }
    
    decrypt(message);
    fprintf(output, "\nDecrypted Text: ");
    for(i = 0; i < b;){
        fprintf(output, "%c", message[i]);
        i++;
    }
}


//Function for encryption
void encrypt(char *message){
    int length = strlen(message);
    int encryption_index;
    char code[26] = {'g','l','c','d','s','t','b','x','y','j','k','m','a','o','n','p','q','r','e','f','u','v','w','z','i','h'};          //Substitution "alphabet"     
    for(int i = 0; i < length; i++)
    {
        encryption_index = tolower(message[i]) - 'a';
                    
        if(encryption_index >= 0 && encryption_index < 26)
        {
            message[i] = code[encryption_index];
            //printf("%c\n", message[i]);
        }   
    }
}

//Function for decryption
void decrypt(char *message){
    int length = strlen(message);
    char code[26] = {'g','l','c','d','s','t','b','x','y','j','k','m','a','o','n','p','q','r','e','f','u','v','w','z','i','h'};
    int j = 0; 
    
    for(int i = 0; i < length; i++){
        j = 0;
        while(code[j] != message[i] && j < 26){
             j++;
        }
        if(j >= 0 && j < 26){
            message[i] = (j + 'a');
            //printf("%c\n", message[i]);
        }         
    }
}
