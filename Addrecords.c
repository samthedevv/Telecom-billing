// Function to add a new customer record 
void addRecord() 
{ 
	if (customerCount >= MAX_CUSTOMERS) {
		printf("\nMaximum number of records reached!\n");
		return;
	}
	printf("\nEnter name: ");
        if (fgets(customers[customerCount].name, sizeof(customers[customerCount].name),stdin == NULL){
			printf("Error reading name.\n");
			return;
		}
	customers[customerCount].name[strcspn(customers[customerCount].name,"\n"]='\0';
	
	printf("Enter phone number: "); 
	scanf("%14s", customers[customerCount].phoneNumber); 
	clearInputBuffer();
	if(!isValidPhoneNumber(customers[customerCount].phoneNumber)) {
		printf("Invalid phone number .Must be numeric.\n");
		return;
	}
	printf("Enter usage (in minutes): "); 
		if(scanf("%f", &customers[customerCount].usage) !=1 || customers[customerCount].usage < 0){
			printf("Invalid usage amount . MUst be a positive number.\n);
			clearInputBuffer();
			return;
		}
	clearInputBuffer();
	customers[customerCount].totalBill = customers[customerCount].usage * 0.1; 
		customerCount++; 
		printf("\nRecord added successfully!\n"); 
	} 
	
