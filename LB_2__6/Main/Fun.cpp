#include "Fun.h"

char* delete_str(char* str, int where, int what) {

    int i;
    for (i = 0; *(str + i); i++);
    {

        int j = where - 1;   //-1 потому что идет счет от 0
        while (*(str + j)) {


            *(str + j) = *((str + j) + what);   
            j++;

        }

    }
    return str;
}
