#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#include"malloc.h"
#include"string.h"
#define len sizeof(struct student)
int check(int q,int w,int e,int r);
struct student
{
	int Math;
	int Computer;
	int English;
	int Chinese;
	int Sum;
	float Average;
	char No[10];
	char Name[6];
	struct student *next;
};
struct student *head_main=NULL;
int displaylist(struct student *head);
struct student *creat(void);
struct student *add(struct student *head);
int modify();
int query_no();
int query_name();
int del();
void meun_1();
void fun_meun_1();
void meun_2();
void meun_3();
void fun_1();
void fun_2();
void fun_3();
void fun_4_1(); 
void fun_5(); 
void fun_6();
void fun_7();
void fun_8();
int main()
{
	fun_meun_1();
} 
int check(int q,int w,int e,int r)
{
	if (q>=0&&q<=100){
		if(w>=0&&w<=100){
			if(e>=0&&e<=100){
				if(r>=0&&r<=100) return 1;
				else return 0;
			}
			else return 0;
		}
		else return 0;
	} 
	else return 0;
}
int n;
struct student *head_main;
struct student *creat(void)
{
	struct student *head,*p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(len);
	printf("依次输入学生的学号，姓名，语数外计成绩\n");
	scanf("%s%s%d%d%d%d",p1->No , p1->Name , &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
	while(check(p1->Chinese , p1->Math , p1->English , p1->Computer)==0) {
	printf("输入了错误的成绩，请重新输入语数外计成绩\n");
	fflush(stdin);
	scanf("%d %d %d %d", &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
	} 
	p1->Sum=p1->Chinese + p1->Computer + p1->English + p1->Math;
	p1->Average=p1->Sum/4;
	head=NULL;
	while(1){
		n++;
		if(n==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(len);
		printf("依次输入学生的学号，姓名，语数外计成绩\n");
		scanf("%s",p1->No); 
		if(p1->No[0]=='@') break;
		scanf("%s %d %d %d %d", p1->Name , &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
		while(check(p1->Chinese , p1->Math , p1->English , p1->Computer)==0) {
		printf("输入了错误的成绩，请重新输入语数外计成绩\n");
		fflush(stdin);
		scanf("%d %d %d %d", &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
		} 
		p1->Sum=p1->Chinese + p1->Computer + p1->English + p1->Math;
		p1->Average=p1->Sum/4;
	}
	p2->next=NULL;
	return (head);
}
void meun_1()
{
	printf("**************** 学生成绩管理系统 ****************\n");
	printf("**************************************************\n");
	printf("                     系统菜单                     \n");
	printf("**************************************************\n");
	printf("*            1-- 系统初始化                      *\n");
	printf("*            2-- 数据导入                        *\n");
	printf("*            3-- 录入学生数据                    *\n");
	printf("*            4-- 编辑学生数据                    *\n");
	printf("*            5-- 查询学生信息                    *\n");
	printf("*            6-- 统计学生信息                    *\n");
	printf("*            7-- 导出信息文件                    *\n");
	printf("*            8-- 显示学生信息                    *\n");
	printf("*            0-- 退出系统                        *\n");
	printf("**************************************************\n");
	printf("选择所需功能(0-8):"); } 
void fun_meun_1()
{
	int a;
	int run1=1;	
	while(run1)
	{
	system("cls");
	meun_1();
	scanf("%d", &a);
		switch(a){
		case 1:
		{
			break;
		}
		case 2:
		{
			break;
		}
		case 3:
		{
			system("cls");
			fun_3();
			break;
		}
		case 4:
		{
			int run2=1;
			while(run2)
			{
				system("cls");
				meun_2();
				int b;
				scanf("%d",&b);
				switch(b)
				{
					case 1:	
					{
						add(head_main);
						break;
					}
					case 2:
					{
						del(); 
						break;
					}
					case 3:
					{
						modify();
						break;
					}
					case 0:
					{
						run2=0;
						break;
					}
					default:
					{
						printf("错误选项，请重新选择");
						sleep(1);
						break;
					}
				}
			}
			break;
		}
		case 5:
		{
			int run3=1;
			while(run3){
				system("cls");
				meun_3();
				int c;
				scanf("%d",&c);
				switch(c){
					case 1:	
					{
						system("cls");
						query_no();
						break; 
					} 
					case 2:
					{
						system("cls");
						query_name();
						break;
					}
					case 0:run3=0;break;
					default:{
						printf("错误选项，请重新选择");
						sleep(1);
						break;
					}
				}
			}
			break;
		}
		case 6:
		{
			break;
		}
		case 7:
		{
			break;
		}
		case 8:
		{
			fun_8();
			printf("\n单击回车返回主菜单\n");
			fflush(stdin);
			getchar(); 
			break;
		}
		case 0:
		{
			run1=0;
			system("cls");
			printf("正在退出系统.");
			sleep(1);
			printf(".");
			sleep(1);
			printf(".");
			sleep(1);
			system("cls");
			printf("系统已关闭");
			break;
		}
		default:
		{
			printf("错误选项，请重新选择");
			sleep(1);
			break;
		}
	}
}
}
void meun_2()
{
	printf("**************** 学生成绩管理系统 ****************\n");
	printf("**************************************************\n");
	printf("                 二级系统菜单-编辑                \n");
	printf("**************************************************\n");
	printf("*            1-- 追加记录                        *\n");
	printf("*            2-- 删除记录                        *\n");
	printf("*            3-- 修改记录                        *\n");
	printf("*            0-- 返回主菜单                      *\n");
	printf("**************************************************\n");
	printf("选择所需功能(0-3):"); } 	
void meun_3()
{
	printf("**************** 学生成绩管理系统 ****************\n");
	printf("**************************************************\n");
	printf("                 二级系统菜单-查询                \n");
	printf("**************************************************\n");
	printf("*            1-- 学号查询                        *\n");
	printf("*            2-- 姓名查询                        *\n");
	printf("*            0-- 返回主菜单                      *\n");
	printf("**************************************************\n");
	printf("选择所需功能(0-2):"); } 	
void fun_1()
{
	
} 
void fun_2()
{
	 
} 
void fun_3()
{	
	struct student *p;
	head_main=creat();
} 
void fun_4_1()
{} 
void fun_5()
{} 
void fun_6()
{} 
void fun_7()
{} 
void fun_8()
{
	displaylist(head_main);
} 
int displaylist(struct student *head)
{
	struct student *p;
	if(head!=NULL) p=head;
	else 
	{
		system("cls");
		printf("未定义的链表头"); 
		return 0;
	}
	system("cls");
	printf("学号       姓名   语文 数学 外语 计算机 总分 均分\n");
	do
	{
		printf("%-10s %-6s %-4d %-4d %-4d %-6d %-4d %-4.2f\n",p->No,p->Name,p->Chinese,p->Math,p->English,p->Computer,p->Sum,p->Average);
		p=p->next;
	}while(p!=NULL);
	getchar();
}
struct student *add(struct student *head)
{
	if(head==NULL) 
	{
		system("cls");
		printf("未定义的链表头");
		printf("\n单击回车返回上级菜单");
		fflush(stdin);
		getchar();
		fflush(stdin);
		return 0;
	}
	struct student *p1,*p2;
	p1=p2=(struct student*)malloc(len);
	p2=head;
	while(p2->next!=NULL)
	{
		p2=p2->next;
	}
	p2->next=p1;
	printf("依次输入需添加学生的学号，姓名，语数外计成绩\n");
	scanf("%s %s %d %d %d %d",p1->No , p1->Name , &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
	while(check(p1->Chinese , p1->Math , p1->English , p1->Computer)==0) {
	printf("输入了错误的成绩，请重新输入语数外计成绩\n");
	scanf("%d %d %d %d", &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
	} 
	p1->Sum=p1->Chinese + p1->Computer + p1->English + p1->Math;
	p1->Average=p1->Sum/4;
	while(1)
	{
		p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(len);
		printf("依次输入需添加学生的学号，姓名，语数外计成绩\n");
		scanf("%s",p1->No); 
		if(p1->No[0]=='@') break;
		scanf("%s %d %d %d %d", p1->Name , &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
		while(check(p1->Chinese , p1->Math , p1->English , p1->Computer)==0) {
		printf("输入了错误的成绩，请重新输入语数外计成绩\n");
		scanf("%d %d %d %d", &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
		} 
		p1->Sum=p1->Chinese + p1->Computer + p1->English + p1->Math;
		p1->Average=p1->Sum/4;
	}
	p2->next=NULL;
	return (head);
}
int modify()
{
	struct student *p;
	p=head_main;
	if(p==NULL) 
	{
		system("cls");
		printf("未定义的链表头");
		printf("\n单击回车返回上级菜单");
		fflush(stdin);
		getchar();
		fflush(stdin);
		return 0;
	}
	char s1[10];
	system("cls");
	printf("输入需修改学生的学号\n");
	scanf("%s",s1);
	while(strcmp(s1,p->No)!=0)
	{
		p=p->next;
		if(p->next==NULL)
		{
			printf("未查找到此学生");
			sleep(1);
			return 0;
		}		
	}
	printf("依次输入该学生的语数外计成绩\n");
	scanf("%d %d %d %d",&p->Chinese , &p->Math , &p->English , &p->Computer);
	while(check(p->Chinese , p->Math , p->English , p->Computer)==0) {
	printf("输入了错误的成绩，请重新输入语数外计成绩\n");
	fflush(stdin);
	scanf("%d %d %d %d", &p->Chinese , &p->Math , &p->English , &p->Computer);
	} 
	p->Sum=p->Chinese + p->Computer + p->English + p->Math;
	p->Average=p->Sum/4;
	printf("修改成功");
	sleep(1); 
}
int query_no()
{
		char s1[10];
	printf("输入需查询学生的学号");
	scanf("%s",s1);
	struct student *p;
	p=head_main;
	if(p==NULL) 
	{
		system("cls");
		printf("未定义的链表头");
		printf("\n单击回车返回上级菜单");
		fflush(stdin);
		getchar();
		fflush(stdin);
		return 0;
	}
	while(strcmp(s1,p->No)!=0)
	{
		p=p->next;
		if(p->next==NULL)
		{
			printf("未查找到此学生");
			sleep(1);
			return 0;
		}
	}
	system("cls");
	printf("该学生(姓名%s)的语数外计成绩依次为%d %d %d %d\n总分为%d\n均分为%.2f", p->Name, p->Chinese , p->Math , p->English , p->Computer, p->Sum,p->Average);
	fflush(stdin);
	getchar();
}
int query_name()
{
		char s1[10];
	printf("输入需查询学生的学号");
	scanf("%s",s1);
	struct student *p;
	p=head_main;
	if(p==NULL) 
	{
		system("cls");
		printf("未定义的链表头");
		printf("\n单击回车返回上级菜单");
		fflush(stdin);
		getchar();
		fflush(stdin);
		return 0;
	}
	while(strcmp(s1,p->No)!=0)
	{
		p=p->next;
		if(p->next==NULL)
		{
			printf("未查找到此学生");
			sleep(1);
			return 0;
		}
	}
	system("cls");
	printf("该学生(学号%s)的语数外计成绩依次为%d %d %d %d\n总分为%d\n均分为%.2f", p->No, p->Chinese , p->Math , p->English , p->Computer, p->Sum,p->Average);
	fflush(stdin);
	getchar();
}
int del()
{
	char s1[10];
	system("cls");
	printf("输入需删除学生的学号\n");
	scanf("%s",s1);
	struct student *p3,*p1,*p2;
	p3=head_main;
	if(p3==NULL) 
	{
		system("cls");
		printf("未定义的链表头");
		printf("\n单击回车返回上级菜单");
		fflush(stdin);
		getchar();
		fflush(stdin);
		return 0;
	}
	if(strcmp(s1,p3->No)==0)
	head_main=head_main->next;
	while(strcmp(s1,p3->No)!=0)
	{
		p2=p3;
		p3=p3->next;
		if(p3->next==NULL&&strcmp(s1,p3->No)!=0)
		{
			printf("未查找到此学生");
			sleep(1);
			return 0;
		}
	}
	p2->next=p3->next;
	printf("删除成功"); 
	sleep(1);
}








