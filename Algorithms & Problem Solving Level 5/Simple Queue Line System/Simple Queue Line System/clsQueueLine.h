#pragma once
#include <iostream>
#include <string>
#include <queue>
#include<iomanip>
#include <stack>
#include "clsDate.h"
using namespace std;
class clsQueueLine
{

private:

	struct stTicketInfo {
		string TicketNumber;
		string DateAndTime;
		int WaitingClients;
		int TimeToServe;
	};

	string _Prefix  = "";
	int _AverageTime = 0;
	int _TotalTickets = 0;
	int _ServedClients = 0;
	
	queue <stTicketInfo> _QueueLine;

	void _PrintClientTicket(stTicketInfo ClientTicket) {
		cout << "\n\t\t\t______________________________\n";
		cout << "\t\t\t" << setw(15) << left << "" << "TICKET" << endl;
		cout << "\t\t\t______________________________\n";

		cout << "\t\t\t " << setw(15) << left << "Number" << ": " << ClientTicket.TicketNumber << endl;
		cout << "\t\t\t " << setw(15) << left << "Date" << ": " << ClientTicket.DateAndTime << endl;
		cout << "\t\t\t " << setw(15) << left << "Waiting" << ": " << ClientTicket.WaitingClients << " Clients" << endl;
		cout << "\t\t\t " << setw(15) << left << "Serve Time" << ": " << ClientTicket.TimeToServe << " min" << endl;

		cout << "\t\t\t______________________________\n";
	}

	stTicketInfo CreateTicket() {
		stTicketInfo ClientInfo;

		ClientInfo.TicketNumber = _Prefix + to_string(_TotalTickets + 1);
		ClientInfo.DateAndTime = clsDate::GetSystemDateTimeString();
		ClientInfo.WaitingClients = _QueueLine.size();
		ClientInfo.TimeToServe = _QueueLine.size() * _AverageTime;
           
		return ClientInfo;
	}

	queue <stTicketInfo> _ReverseQueue(queue <stTicketInfo> OriginalQueue) {
	
		stack<stTicketInfo> _TempTicketStack;
		queue <stTicketInfo>  _TempQueue = OriginalQueue;
		while (!_TempQueue.empty()) {

			_TempTicketStack.push(_TempQueue.front());
			_TempQueue.pop();
		}
	     
		while (!_TempTicketStack.empty()) {
		
			_TempQueue.push(_TempTicketStack.top());
			_TempTicketStack.pop();
		}
		return _TempQueue;

	}
	
public:
	
	clsQueueLine(string Prefix,int AverageTime) {
	
		_Prefix = Prefix;
		_AverageTime = AverageTime;
	
	}

	void IssueTicket() {
		
		_QueueLine.push(CreateTicket());
		_TotalTickets++;
	}

	void PrintInfo() {
		cout << "\t\t\t" << setw(12) << left << "------------------------------- " << endl;;
		cout << "\t\t\t" << setw(15) << left << "        Queue Info" << endl;
		cout << "\t\t\t" << setw(12) << left << "-------------------------------" << endl;
		cout << "\t\t\t" << setw(15) << left << "      Prefix            :  " << _Prefix << endl;
		cout << "\t\t\t" << setw(15) << left << "      Total Tickets      :  " << _TotalTickets << endl;
		cout << "\t\t\t" << setw(15) << left << "      Served Tickets     :  " << _ServedClients << endl;
		cout << "\t\t\t" << setw(15) << left << "      Waiting Tickets    :  " << _QueueLine.size() << endl;
		cout << "\t\t\t" << setw(12) << left << "-------------------------------" << endl;;

	}

	void PrintTicketsLineRTL() {
		stTicketInfo ClientTicket;
		queue <stTicketInfo>  _TempQueue = _QueueLine;
		while (!_TempQueue.empty()) {
			ClientTicket = _TempQueue.front();
			cout  << ClientTicket.TicketNumber << "<---";
			_TempQueue.pop();
		}
	
	}

	void PrintTicketsLineLTR() {
		//Note : to reverse the queue I should use the stack then the queue O(n) for it.
		//also I can use the Recursion but it will take more time so don't user its bad for time complexity.
	
		stTicketInfo ClientTicket;
		queue <stTicketInfo>  _TempQueue  = _ReverseQueue(_QueueLine);
		while (!_TempQueue.empty()) {
			ClientTicket = _TempQueue.front();
			cout<< ClientTicket.TicketNumber << "<---";
			_TempQueue.pop();
		}

	}

	void PrintAllTickets() {
		if (_QueueLine.empty()) {
			cout << "\n\t\t\tThere Is No Tickets On The System \t\t\t";
		}
		else {
			cout << "\t\t\t\t" << setw(15) << left << "---Tickets---\n";
			queue<stTicketInfo> TempQueue = _QueueLine;
			while (!TempQueue.empty()) {

				_PrintClientTicket(TempQueue.front());
				TempQueue.pop();

			}
		}
	}

	bool ServeNextClient() {
		if (_QueueLine.empty()) {
			return false;
		}
		_QueueLine.pop();
		_ServedClients++;
		return true;
	}


};

