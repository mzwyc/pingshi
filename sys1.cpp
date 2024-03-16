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
char ddmz[] = "弟弟";
char ggmz[] = "哥哥";
string ltjl[3][10000] = {};//聊天记录 
int xxs = 0;//消息数 

/*1.user name
**2.user id
**3.user password
**4.user xxs
**5.user qs(权限)
**6.chat save
*/

bool getProcess(const char *procressName)                //此函数进程名不区分大小写
{
    char pName[MAX_PATH];                                //和PROCESSENTRY32结构体中的szExeFile字符数组保持一致，便于比较
    strcpy(pName,procressName);                            //拷贝数组
    CharLowerBuff(pName,MAX_PATH);                        //将名称转换为小写
    PROCESSENTRY32 currentProcess;                        //存放快照进程信息的一个结构体
    currentProcess.dwSize = sizeof(currentProcess);        //在使用这个结构之前，先设置它的大小
    HANDLE hProcess = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);//给系统内的所有进程拍一个快照
 
    if (hProcess == INVALID_HANDLE_VALUE)
    {
        printf("CreateToolhelp32Snapshot()调用失败!\n");
        return false;
    }
 
    bool bMore=Process32First(hProcess,&currentProcess);        //获取第一个进程信息
    while(bMore)
    {
        CharLowerBuff(currentProcess.szExeFile,MAX_PATH);        //将进程名转换为小写
        if (strcmp(currentProcess.szExeFile,pName)==0)            //比较是否存在此进程
        {
            CloseHandle(hProcess);                                //清除hProcess句柄
            return true;
        }
        bMore=Process32Next(hProcess,&currentProcess);            //遍历下一个
    }
 
    CloseHandle(hProcess);    //清除hProcess句柄
    return false;
}

int donloadapp(){
	
}

void clrsx(){//初始化消息记录 
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
	//进度18   21:30
	//int input = 0;
	int input1 = 0;
	int mb = 0;
	int sj = 0;
	int cc = 1;
	int c = 0;
	srand((unsigned int)NULL);
	//printf("请输入一共的大小\n");
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
			printf("正在加载...\n已加载%dmb\n", cc);
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
			printf("正在加载...\n已加载%dmb(10%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 2)
		{
			printf("%dmb/s\n", sj);
			printf("--\n");
			printf("正在加载...\n已加载%dmb(20%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 3)
		{
			printf("%dmb/s\n", sj);
			printf("---\n");
			printf("正在加载...\n已加载%dmb(30%%)\n", cc);
			Sleep(10);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 4)
		{
			printf("%dmb/s\n", sj);
			printf("----\n");
			printf("正在加载...\n已加载%dmb(40%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 5)
		{
			printf("%dmb/s\n", sj);
			printf("-----\n");
			printf("正在加载...\n已加载%dmb(50%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 6)
		{
			printf("%dmb/s\n", sj);
			printf("------\n");
			printf("正在加载...\n已加载%dmb(60%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 7)
		{
			printf("%dmb/s\n", sj);
			printf("-------\n");
			printf("正在加载...\n已加载%dmb(70%%)", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 8)
		{
			printf("%dmb/s\n", sj);
			printf("--------\n");
			printf("正在加载...\n已加载%dmb(80%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 9)
		{
			printf("%dmb/s\n", sj);
			printf("---------\n");
			printf("正在加载...\n已加载%dmb(90%%)\n", cc);
			Sleep(100);
			system("cls");
			goto hhh;
		}
		else if (cc < (input / 10) * 10)
		{
			printf("%dmb/s\n", sj);
			printf("-----------\n");
			printf("正在加载...\n已加载%dmb(99%%)\n", cc);
			Sleep(100);
			system("cls");
			printf("完成!\n");
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
	cout << "1.发消息\n";
    cout << "2.发布公告";
    cin >> mode;
bq1:
    system("cls");
    if(mode == 1){
		cout << "你要给谁发?(输入序号)\n";
		cout << "1." << ddmz << endl;
		int ip;
		cin >> ip;
		if(ip == 1){
			system("cls");
			cout << "确定吗?(暂无退出功能!)";
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

int dl()//登录 
{
	int lsz = 0;
	int lsm = 0;
	system("cls");
	cout << "请输入账号" << endl;
	cin >> lsz;
	system("cls");
	cout << "请输入密码" << endl;
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
		cout << "管理员or用户or“1/2”";
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
		cout << "账号或密码错误!";
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
