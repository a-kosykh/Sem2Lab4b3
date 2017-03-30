#include <Windows.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
	HANDLE hEvent; 
	hEvent = OpenEvent(  
						
		EVENT_ALL_ACCESS, 
		TRUE, 
		L"MyEvent1" 
	);
	if (hEvent == 0)
	{
		cout << "ERROR";
		_getch();
		return 0;
	}
	cout << "To start threads press any button" << endl;
	_getch();
	SetEvent(hEvent);
	
	cout << "To end threads press any button" << endl;
	_getch();
	ResetEvent(hEvent); 
	
	cout << "To exit the app enter any button" << endl;
	_getch();
	return 0;
}