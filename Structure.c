#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_CUSTOMERS 100

//struct holding customer information

struct customer {
    char name[50];
    char phoneNumber[15];
    float usage;
    float totalBill;
};
//array to store customer data.
struct customer customers[MAX_CUSTOMERS];
//global variable for customers
int customerCount = 0;
//clear  input buffer 
void clearInputBuffer () {
    int c;
    while ((c = getchar ()) != '\n' && c != EOF);
}
//validate phonenumber (digits only)
int isValidPhoneNumber(const char *phone){
    for(int i = 0; phone[i]; i++){
        if(!isdigit(phone[i])) return 0;
    }
    return 1;
}

 
