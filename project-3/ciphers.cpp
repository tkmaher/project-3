/*
 * ciphers.cpp
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

#include "utility.h"
#include "caesar.h"
#include "vigenere.h"
#include "polybius.h"
#include <iostream>
#include <string>

using namespace std;

int ciphers(){
    string cypherChoice;
    cout << "Choose a cipher (Caesar, Vigenere, or Polybius): ";
    cin >> cypherChoice;
    if (toUpperCase(cypherChoice) == "VIGENERE" || toUpperCase(cypherChoice) == "V"){
        
    } else if (toUpperCase(cypherChoice) == "POLYBIUS" || toUpperCase(cypherChoice) == "P"){
        
    } else if (toUpperCase(cypherChoice) == "CAESAR" || toUpperCase(cypherChoice) == "C"){
        
    } else {
        cout << "Invalid cypher!";
    }
    return 0;
}
