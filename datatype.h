#include <stdbool.h>

struct Date{
	int month,day,year ;
};
struct Transaction{
	char transferId[10];
	char receivingId[10];
	double amount;
	char type[10];
	char message[50];
	struct Date transactionDate; 
};

struct AccountInfo{
	char userId[20];
	float balance;
	bool status;
	struct Transaction TransactionHistory[]; 
};

struct user{
	char userId[10];
	char name[20];
	struct  Date dateofBirth;
	bool gender;
	char phone[10];
	char email[20]; 
}; 
