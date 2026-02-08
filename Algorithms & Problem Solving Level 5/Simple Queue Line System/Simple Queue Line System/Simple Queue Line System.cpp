// Simple Queue Line System.

#include <iostream>
#include "clsQueueLine.h"

int main()
{

	clsQueueLine PayLine("A0", 3);
	PayLine.IssueTicket();
	PayLine.IssueTicket();
	PayLine.IssueTicket();
	PayLine.IssueTicket();

	PayLine.PrintInfo();
	//PayLine.PrintAllTickets();
	cout << "\n\nQueue Line Right To Left  : ";
	PayLine.PrintTicketsLineRTL();

	cout << "\n\nQueue Line Left To Right  : ";
	PayLine.PrintTicketsLineLTR();
	cout << "\n\n\nBefor Serv \n\n\n";
	PayLine.PrintAllTickets();
	cout << "\n\nQueue Info After Served Is : \n";
	PayLine.ServeNextClient();
	PayLine.PrintInfo();

	cout << "\n\n\n After Serv \n\n\n";
	PayLine.PrintAllTickets();
}
