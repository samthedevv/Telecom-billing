int main (){
    int choice;
    char phoneNumber[15];

    while(1){
        displayMenu();
        printf("Enter your choice: ");
        if(scanf("%d",&choice) != 1){
            printf("Invalid input . Please enter a number .\n);
            clearInputBuffer();
            continue;
        }
        clearInputBuffer();
        

        switch(choice){
        case 1:
               addRecord();
               break;
        case 2:
                viewRecords();
                break;       
        case 3:
                printf("\nEnter phone number to modify record: ");
                scanf(" %14s", phoneNumber);
                clearInputBuffer();
                modifyRecord(phoneNumber);
                break;
        case 4:
                printf("\nEnter phone number to view payment: ");
                scanf("14%s", phoneNumber);
                clearInputBuffer();
                viewpayent(phoneNumber);
                break;
        case 5:
                printf("\nEnter phone number to delete record:  ");
                scanf("%14s", phoneNumber);
                clearInputBuffer();
                deleteRecord(phoneNumber); 
                break;
        case 6:
                printf("exiting the program . bye!");
        default:
            printf("\n Invalid choice! PLease try again.\n");

        }
    }
    return 0;
}
