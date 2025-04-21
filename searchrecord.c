void searchRecord(char phoneNumber[]) { 
	printf("\nName\tPhone Number\tUsage(min)\tTotal Bill($)\n"); 
	for (int i = 0; i < customerCount; i++) { 
		if (strcmp(customers[i].phoneNumber, phoneNumber) == 0) { 
			printf("%s\t%s\t%.2f\t\t%.2f\n", customers[i].name, customers[i].phoneNumber, customers[i].usage, customers[i].totalBill); 
			return; 
		} 
	} 
	printf("\nRecord not found!\n"); 
}
