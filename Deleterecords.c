void deleteRecord(const char *phoneNumber) { 
	for (int i = 0; i < customerCount; i++) { 
		if (strcmp(customers[i].phoneNumber, phoneNumber) == 0) { 
			for (int j = i; j < customerCount - 1; j++) { 
				customers[j] = customers[j + 1]; 
			} 
			customerCount--; 
			printf("\nRecord deleted successfully!\n"); 
			return; 
		} 
	} 
	printf("\nRecord not found!\n"); 
}
