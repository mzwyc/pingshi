#include<cmath>
#include<windows.h>
#include<string>
#include <tlhelp32.h>
#include<iostream>
#include <stdio.h>
#include<new>

using namespace std;
int ddgly = 1;
int ggz = 20131016;
int ggm = 20131016;
int ddz = 00000000;
int ddm = 00000000;
int mmm = 00000000;
int mmz = 00000000;
char ddmz[] = "�ܵ�";
char ggmz[] = "���";
string ltjl[3][10000] = {};//�����¼ 
int xxs = 0;//��Ϣ�� 

/*1.user name
**2.user id
**3.user password
**4.user xxs
**5.user qs(Ȩ��)
**6.chat save
*/

bool getProcess(const char *procressName)                //�˺��������������ִ�Сд
{
    char pName[MAX_PATH];                                //��PROCESSENTRY32�ṹ���е�szExeFile�ַ����鱣��һ�£����ڱȽ�
    strcpy(pName,procressName);                            //��������
    CharLowerBuff(pName,MAX_PATH);                        //������ת��ΪСд
    PROCESSENTRY32 currentProcess;                        //��ſ��ս�����Ϣ��һ���ṹ��
    currentProcess.dwSize = sizeof(currentProcess);        //��ʹ������ṹ֮ǰ�����������Ĵ�С
    HANDLE hProcess = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);//��ϵͳ�ڵ����н�����һ������
 
    if (hProcess == INVALID_HANDLE_VALUE)
    {
        printf("CreateToolhelp32Snapshot()����ʧ��!\n");
        return false;
    }
 
    bool bMore=Process32First(hProcess,&currentProcess);        //��ȡ��һ��������Ϣ
    while(bMore)
    {
        CharLowerBuff(currentProcess.szExeFile,MAX_PATH);        //��������ת��ΪСд
        if (strcmp(currentProcess.szExeFile,pName)==0)            //�Ƚ��Ƿ���ڴ˽���
        {
            CloseHandle(hProcess);                                //���hProcess���
            return true;
        }
        bMore=Process32Next(hProcess,&currentProcess);            //������һ��
    }
 
    CloseHandle(hProcess);    //���hProcess���
    return false;
}

int donloadapp(){
	
}

void clrsx(){//��ʼ����Ϣ��¼ 
	delete &ltjl;
	string ltjl[3][10000] = {};
	xxs = 0;
}

void cmd(char ml[100])
{	
	if(ml == "cls"){
		system("cls");
	}
	
}

int sj(int zd){
	srand(GetTickCount());
	return rand() % zd;
}

int shouye()
{
	 
	return 0;
}

void jdt(int input)
{
	//����18   21:30
	//int input = 0;
	int input1 = 0;
	int mb = 0;
	int sj = 0;
	int cc = 1;
	int c = 0;
	srand((unsigned int)NULL);
	//printf("������һ���Ĵ�С\n");
	//scanf("%d", &input);
	//input  = input * 10;
	input1 = input;
	while (mb < input)
	{
	hhh:
		sj = rand() % 5;
		sj = sj + 2;
		input1 -= sj;
		cc += sj;
		if (cc == 1 && cc == 2 && cc == 3 && cc == 4 && cc == 5 && cc == 6 && cc == 7 && cc == 8 && cc == 9)
		{
			printf("%dmb/s\n", sj);
			printf("���ڼ���...\n�Ѽ���%dmb\n", cc);
			Sleep(1);
			system("cls");
			goto hhh;
		}
		else if (cc == 10)
		{
			cc = 1;

		}
		else if (cc < input / 10)
		{
			printf("%dmb/s\n", sj);
			printf("-\n");
			printf("���ڼ���...\n�Ѽ���%dmb(10%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 2)
		{
			printf("%dmb/s\n", sj);
			printf("--\n");
			printf("���ڼ���...\n�Ѽ���%dmb(20%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 3)
		{
			printf("%dmb/s\n", sj);
			printf("---\n");
			printf("���ڼ���...\n�Ѽ���%dmb(30%%)\n", cc);
			Sleep(10);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 4)
		{
			printf("%dmb/s\n", sj);
			printf("----\n");
			printf("���ڼ���...\n�Ѽ���%dmb(40%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 5)
		{
			printf("%dmb/s\n", sj);
			printf("-----\n");
			printf("���ڼ���...\n�Ѽ���%dmb(50%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 6)
		{
			printf("%dmb/s\n", sj);
			printf("------\n");
			printf("���ڼ���...\n�Ѽ���%dmb(60%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 7)
		{
			printf("%dmb/s\n", sj);
			printf("-------\n");
			printf("���ڼ���...\n�Ѽ���%dmb(70%%)", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 8)
		{
			printf("%dmb/s\n", sj);
			printf("--------\n");
			printf("���ڼ���...\n�Ѽ���%dmb(80%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 9)
		{
			printf("%dmb/s\n", sj);
			printf("---------\n");
			printf("���ڼ���...\n�Ѽ���%dmb(90%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 10)
		{
			printf("%dmb/s\n", sj);
			printf("-----------\n");
			printf("���ڼ���...\n�Ѽ���%dmb(99%%)\n", cc);
			Sleep(100);
			system("cls");
			printf("���!\n");
			Sleep(1000);
			system("cls");
			break;
		}
	}
	//return 0;
}


int we()
{
	return 0;
}

void Gi()//ge ge pu tong
{
	int mode;
	cout << "1.����Ϣ\n";
    cout << "2.��������";
    cin >> mode;
bq1:
    system("cls");
    if(mode == 1){
		cout << "��Ҫ��˭��?(�������)\n";
		cout << "1." << ddmz << endl;
		int ip;
		cin >> ip;
		if(ip == 1){
			system("cls");
			cout << "ȷ����?(�����˳�����!)";
			cin >> ip;
			if(ip == 0){
				goto bq1;
			} else {
				
			}
		}
	}
	else if(mode == 2){
		//TODO
	}
}

void op()//other people pu tong
{
	
}

int dl()//��¼ 
{
	int lsz = 0;
	int lsm = 0;
	system("cls");
	cout << "�������˺�" << endl;
	cin >> lsz;
	system("cls");
	cout << "����������" << endl;
	cin >> lsm;
	system("cls");
	if((lsz == ggz) && (lsm == ggm)){
		return 1;
	}
	else if((lsz == ddz) && (lsm == ddm)){
		return 2;
	}
	return 0;
}

int wyc(int r)
{
	if(r == 1){//wyc
		
	}
	else if(r == 2){//other people
		
	}
	return 0;
}

void dl2(int a)
{
	if(a == 1){
		int input;
		cout << "����Աor�û�or��1/2��";
		cin >> input;
		if(input == 1){
			wyc(1);
		}
		else{
			Gi();
		}
	}else if(a == 2 && ddgly == 1){
		wyc(2);
	}else if(a == 2 && ddgly == 0){
		Id();
	}else{
		cout << "�˺Ż��������!";
		Sleep(1000);
		system("cls");
	}
}

int main()
{
	if(!getProcess("sys1servr.exe")) system("start sys1servr.exe");
	jdt(30);
	while(1){
		dl2(dl());
	}
	return 0;
}
