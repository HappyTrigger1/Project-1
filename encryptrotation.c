//Rotation Cipher (Caesar Cipher)
//Rotates letters ONE shift cross. i.e. a = b, b = c.....
//Encrypt: HOW ARE YOU
//Decryption: GNW BQD XNT
//e(m) = (m + k)(%26)    function required for encryption of message. 
//d(c) = (c − k)(%26)    function required for decryption of message.
//m is the message, k is the key shift. 
//e(m) is used to encrypt a message.
//d(c) is used to decrypt a message. 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void decrypt(char arr[]){
      int i;
      for(i = 0; i < strlen(arr); i++)
      {
            arr[i] = arr[i] + 10;
      }
}

void encrypt(char arr[]){
      int i;
      for(i = 0; i < strlen(arr); i++)
      {
            arr[i] = arr[i] - 10;
      }
}

int main()
{
      char word[40];	
      int ch;
      printf("Enter a word:\t");
      scanf("%s", word);
      printf("\nword:\t%s\n",word);
      encrypt(word);
      printf("\nEncrypted word:\t%s\n", word);
      decrypt(word);
      printf("\nDecrypted word:\t%s\n", word);
      return 0;
}