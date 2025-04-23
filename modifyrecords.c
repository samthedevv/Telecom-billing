// Fucntion to modify a customer record
void modifyRecord(const char *phoneNumber)
{
    for (int i = 0; i < customerCount; i++)
    {
        if (strcmp(customer[i].phoneNumber, phoneNumber) == 0)
    {
        printf("\nEnter new usage (in minutes) for %s:", custemers[i].name);
        if (scanf("%f", &customers[i].usage)!= 1 ||customers[i].usage<0){
            printf("Invalid usage amount.\n");
            clearInputBuffer();
            return;
        }
        clearInputBuffer();
        customers[i].totalBill = customers[i].usage * 0.1;
        printf("\nRecord modified successfully!\n");
        return;
    }
    }
    printf("\nRecord not found!\n");
}
