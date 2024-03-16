#include<iostream>
#include<cstdlib>
#include<ctime>
int sj(){
	return rand()%2;
}
using namespace std;
int main(){
	srand(time(NULL));
	while(1){
		while(1){
			cout << sj();
		}
		cout << endl;
	}
	return 0;
}
