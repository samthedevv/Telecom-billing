// Function to add a new customer record 
void addRecord() 
{ 
	if (customerCount < 100) { 
		printf("\nEnter name: "); 
		scanf(" %[^\n]s", customers[customerCount].name); 
		printf("Enter phone number: "); 
		scanf("%s", customers[customerCount].phoneNumber); 
		printf("Enter usage (in minutes): "); 
		scanf("%f", &customers[customerCount].usage); 
		customers[customerCount].totalBill 
			= customers[customerCount].usage * 0.1; 
		customerCount++; 
		printf("\nRecord added successfully!\n"); 
	} 
	else { 
		printf("\nMaximum number of records reached!\n"); 
	} 
}
