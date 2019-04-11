//Rotation Cipher (Caesar Cipher)
//Rotates letters ONE shift cross. i.e. a = b, b = c.....


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Function for decryption
void decrypt(char arr[]){
      int i;
      for(i = 0; i < strlen(arr); i++){
            arr[i] = arr[i] - 1;                    //shifts letters back 1 for decryption
      }
}

//Function for encryption
void encrypt(char arr[]){
      int i;
      for(i = 0; i < strlen(arr); i++){
            arr[i] = arr[i] + 1;                    //shifts letters across 1 for encryption
      }
}

int main(){
      char word[40];	                            //char data type
      int ch;
      printf("Enter a word:\t");
      scanf("%s", word);                            //scan for a string, store in "word"
      printf("\nword:\t%s\n",word);
      encrypt(word);                                //perform encryption function on "word"
      printf("\nEncrypted word:\t%s\n", word);
      decrypt(word);                                //perform decryption function on ""
      printf("\nDecrypted word:\t%s\n", word);
      return 0;
}