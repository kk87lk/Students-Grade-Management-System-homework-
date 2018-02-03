#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#include"malloc.h"
#include"string.h"
#define len sizeof(struct student)
int check(int q,int w,int e,int r);
struct student{
	int Math;
	int Computer;
	int English;
	int Chinese;
	int Sum;
	int Average;
	char No[10];
	char Name[6];
	struct student *next;
};
int n;
struct student *head_main;
void displaylist(struct student *head);
struct student *creat(void);
void meun_1();
void fun_meun_1();
void meun_2();
void meun_3();
void fun_1();
void fun_2();
void fun_3();
void fun_4(); 
void fun_5(); 
void fun_6();
void fun_7();
void fun_8();
int main(){
	fun_meun_1();
} 
int check(int q,int w,int e,int r){
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
struct student *creat(void){
	struct student *head,*p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(len);
	printf("依次输入学生的学号，姓名，语数外计成绩\n");
	scanf("%s%s%d%d%d%d",p1->No , p1->Name , &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
	while(check(p1->Chinese , p1->Math , p1->English , p1->Computer)==0) {
	printf("输入了错误的成绩，请重新输入语数外计成绩\n");
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
void meun_1(){
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
void fun_meun_1(){
	int a;
	int run1=1;	
	while(run1){
	system("cls");
	meun_1();
	scanf("%d", &a);
		switch(a){
		case 1:
		case 2:
		case 3:{
			system("cls");
			fun_3();
			break;
		}
		case 4:{
			int run2=1;
			while(run2){
				system("cls");
				meun_2();
				int b;
				scanf("%d",&b);
				switch(b){
					case 1:	
					case 2:
					case 3:
					case 0:{
						run2=0;
						break;
						}
					default:{
						printf("错误选项，请重新选择");
						sleep(1);
						break;
					}
				}
			}
			break;
		}
		case 5:{
			int run3=1;
			while(run3){
				system("cls");
				meun_3();
				int c;
				scanf("%d",&c);
				switch(c){
					case 1:	
					case 2:
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
		case 7:
		case 8:{
			fun_8();
			printf("\n单击回车返回主菜单\n");
			getchar(); 
			break;
		}
		case 0:{
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
		default:{
			printf("错误选项，请重新选择");
			sleep(1);
			break;
		}
	}
}
}
void meun_2(){
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
void meun_3(){
	printf("**************** 学生成绩管理系统 ****************\n");
	printf("**************************************************\n");
	printf("                 二级系统菜单-查询                \n");
	printf("**************************************************\n");
	printf("*            1-- 学号查询                        *\n");
	printf("*            2-- 姓名查询                        *\n");
	printf("*            0-- 返回主菜单                      *\n");
	printf("**************************************************\n");
	printf("选择所需功能(0-2):"); } 	
void fun_1(){} 
void fun_2(){
	 
} 
void fun_3(){	
	struct student *p;
	head_main=creat();
} 
void fun_4(){} 
void fun_5(){} 
void fun_6(){} 
void fun_7(){} 
void fun_8(){
	displaylist(head_main);
} 
void displaylist(struct student *head){
	struct student *p;
	p=head;
	system("cls");
	printf("学号       姓名   语文 数学 外语 计算机 总分 均分\n");
	do{
		printf("%-10s %-6s %-4d %-4d %-4d %-6d %-4d %-4d\n",p->No,p->Name,p->Chinese,p->Math,p->English,p->Computer,p->Sum,p->Average);
		p=p->next;
	}while(p!=NULL);
	getchar();
}