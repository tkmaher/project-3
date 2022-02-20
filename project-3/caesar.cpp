/*
 * caesar.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * <#Names#>
 * <#Uniqnames#>
 *
 * EECS 183: Project 3
 * Winter 2022
 *
 * <#description#>
 */

#include "caesar.h"
#include <iostream>

char shiftAlphaCharacter(char c, int n){
    char newLetter;
    int cVal = int(c);
    int letterVal;
    if (cVal > 64 && cVal < 91){
        if (cVal + n > 91 || cVal + n < 64){
            letterVal = ((cVal + (n % 24)) - 24);
            newLetter = char(letterVal);
        } else {
            newLetter = char(cVal + n);
        }
    } else {
        if (cVal + n > 91 || cVal + n < 64){
            letterVal = ((cVal + (n % 24)) - 24);
            newLetter = char(letterVal);
        } else {
            newLetter = char(cVal + n);
        }
    }
    return newLetter;
}

string caesarCipher(string original, int key, bool encrypt){
    string newStr = "";
    return newStr;
}
