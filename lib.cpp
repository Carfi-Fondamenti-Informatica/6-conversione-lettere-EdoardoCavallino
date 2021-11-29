
#include "lib.h"

int carattere(char a, char &ris){
    bool car;

    if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')){
        car = true;

        if(a >= 'A' && a <= 'Z'){
            ris = a +32;
        }
        if(a >= 'a' && a <= 'z'){
            ris = a -32;
        }

    }else{
        car = false;
    }
    return car;
}
