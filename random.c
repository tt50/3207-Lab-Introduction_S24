#include <stdlib.h>
#include "random.h"

char randchar(){
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    char randomchar = letters[rand() % 26];
    return randomchar;
}