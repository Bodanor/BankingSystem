//
//  bank.c
//  BankingSystem
//
//  Created by Christos Papadopoulos on 25/02/2021.
//

#include "bank.h"

struct ACCOUNT_t
{
    char *firstName;
    char *lastName;
    int age;
    long long int money;
    
};


int loadDatabase(void)
{
    const int BUFFSIZE = 100;
    
    FILE *database = fopen("database.bs", "r");
    if (database == NULL)
    {
        printf("Could not open the database");
        return -2;
    }
    
    ACCOUNT *Accounts = NULL;
    char buf[1000];
    int count = 0;
    int arrLen = 0;
    while (fgets(buf, sizeof(buf), database))
    {
        
        if (count == arrLen)
        {
            arrLen += BUFFSIZE;
            
            ACCOUNT *account = realloc(Accounts, arrLen * sizeof(*account));
            if (account == NULL)
            {

                printf("Could not allocate more !\n");
                return -1;
            }
            
            
            Accounts = account;
            Accounts[34500].money = 19;
        }
        
        count++;
        
        
    }
    return 0;
    
}
