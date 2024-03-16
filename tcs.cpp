#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
using namespace std;//¡µ∞Æhg 
#define my 1357246
char dis[100][100];
int ix = 1;
int iy = 1;
int dx = 100;
int dy = 100;

void csdis()
{
	char ls[100];
	int ls1;
	srand(time(NULL));
	for(int i = 1; i <= 100; i++)
	{
		for(int j = 1; j <= 100; j++){
			ls1 = rand() % 3;
			if(ls1){
				ls[j] = '.';
			}
			else{
				ls[j] = ' ';
			}
		}
		for(int j = 1; j <= 100; j++){
			dis[i][j] = ls[j];
		}
	}
}

void yd(char ls){
	
}

void play(){
	for(int i = 1; i <= 100; i++){
		for(int j = 1; j <= 100; j++){
			if(ix == i && iy == j){
				cout << "ƒ„";
			}
			else if(dx == i&&dy == j){
				cout << "∂‘";
			}
			else
				cout << dis[i][j];
		}
		cout << endl;
	}
}

int main()
{
	system("title Ã∞≥‘…ﬂ - »œ÷§œµÕ≥");
	cout << "«Î ‰»Îƒ„µƒ√‹¬Î";
	int mm;
	cin >> mm;
	system("cls");
	system("title Ã∞≥‘…ﬂ - º§ªÓ");
	cout << "«Î ‰»Î√ÿ‘ø“‘º§ªÓ±æ¥Œ”Œœ∑";
	int ip;
	cin >> ip;
	system("cls");
	if(mm == 1357246 && ip == my){
		system("title Ã∞≥‘…ﬂ");
		csdis();
		play();
		system("pause");
	}
	else{
		system("title  ß∞‹");
	}
	return 0;
}
