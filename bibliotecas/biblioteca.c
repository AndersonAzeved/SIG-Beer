#include <stdio.h>
#include <stdlib.h>

int valida_email(char *email){
    for(int i = 0; i < 50; i++){
        if(email[i] == '@'){
            return 1;
        }
    }
    return 0;
}   