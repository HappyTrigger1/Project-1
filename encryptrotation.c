#include <stdio.h>

//e(x) = (m + k)(%26)    function required for encryption of message. 
//d(c) = (c − k)(%26)    function required for decryption of message. 

void simplecalculator();                    //function prototype

int main(){

    simplecalculator();                     //function in code

return 0;
}


void simplecalculator(){                    //function definition
    int x;
    int y = 2;
    x = y * 4;                              //calculation saying 
    printf("%d", x);
}
    