//
//  main.c
//  BankingSystem
//
//  Created by Christos Papadopoulos on 25/02/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bank.h"

char *commandText(){
    
    printf("BankSystem >> ");
    char c;
    char *input = NULL;
    input = malloc(sizeof(char));
    
    int count = 0;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        
        input[count] = c;
        
        char *newarr = realloc(input, (strlen(input)+1)*sizeof(char*));
        input = newarr;
        count++;
    }
    
    input[count] = '\0';
    return input;
};

int main(int argc, const char * argv[]) {
    
    loadDatabase();
    printf("Welcome to the bank system !\n\n");
    printf("(1) Connect\n(2) Open Account\n\n");
    char *input = commandText();
    
    if (strcmp(input, "Connect") == 0 || atoi(input) == 1){
        
        printf("Christos\n");
        
    }
    else if (strcmp(input, "Open Account") == 0 || atoi(input) == 2)
    {
        
        printf("Opening...\n");
    }
    
    
}
