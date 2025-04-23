int main (){
    int choice;
    char phoneNumber;

    while(1){
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
               addRecord();
               break;
        case 2:
                viewRecords();
                break;       
        case 3:
                printf("\nEnter phone number to modify record: ");
                scanf(" %s", phoneNumber);
                modifyRecord(phoneNumber);
                break;
        case 4:
                printf("\nEnter phone number to view payment: ");
                scanf(" %s", phoneNumber);
                viewpayent(phoneNumber);
                break;
        case 5:
                printf("\nEnter phone number to delete record:  ");
                scanf("%s", phoneNumber);
                deleteRecord(phoneNumber); 
                break;
        case 6:
                return 0;
            default:
            printf("\n Invalid choice! PLease try again.\n");

        }
    }
    return 0;
}