#include <stdio.h>
#include <stdlib.h>

char randchar(){
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    char randomchar = letters[rand() % 26];
    return randomchar;
}