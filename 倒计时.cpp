#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	    int n;
	    cin >> n;
	    double j = n;
	    for (int i = n * 100;i >= 0; i--, j-=0.1) {
	    	system("cls");
	        cout << j;
	        Sleep(1);
	    }
	    return 0;
}
