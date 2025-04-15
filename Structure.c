#include <stdio.h>
#include <string.h>

//struct holding customer information

struct customer {
    char name;
    char phoneNumber;
    float usage;
    float totalBill;
};
//array to store customer data.
struct customer 
customers[100] ;

//global variable for customers

int customerCount = 0;
 
