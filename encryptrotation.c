#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void encryption(char arr[]);                           //Function prototype for encrypting
void decryption(char arr[]);                           //Function prototype for decrypting


int main() {
    
    FILE *input;
    FILE *output;
    
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
    
    while(feof(input) == 0){
        char c;
        
        fscanf(input, "%c", &c);
        
        encryption(&c);
        
        fprintf(output, "%c", c);
    }
}





//Function for decryption
void decryption(char arr[]){
      int i;
      for(i = 0; i < strlen(arr); i++){
            arr[i] = arr[i] - 1;                    //shifts letters back 1 for decryption
      }
}

//Function for encryption
void encryption(char arr[]){
      int i;
      for(i = 0; i < strlen(arr); i++){
            arr[i] = arr[i] + 1;                    //shifts letters across 1 for encryption
      }
}