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
	printf("��������ѧ����ѧ�ţ�������������Ƴɼ�\n");
	scanf("%s%s%d%d%d%d",p1->No , p1->Name , &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
	while(check(p1->Chinese , p1->Math , p1->English , p1->Computer)==0) {
	printf("�����˴���ĳɼ�������������������Ƴɼ�\n");
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
		printf("��������ѧ����ѧ�ţ�������������Ƴɼ�\n");
		scanf("%s",p1->No); 
		if(p1->No[0]=='@') break;
		scanf("%s %d %d %d %d", p1->Name , &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
		while(check(p1->Chinese , p1->Math , p1->English , p1->Computer)==0) {
		printf("�����˴���ĳɼ�������������������Ƴɼ�\n");
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
	printf("**************** ѧ���ɼ�����ϵͳ ****************\n");
	printf("**************************************************\n");
	printf("                     ϵͳ�˵�                     \n");
	printf("**************************************************\n");
	printf("*            1-- ϵͳ��ʼ��                      *\n");
	printf("*            2-- ���ݵ���                        *\n");
	printf("*            3-- ¼��ѧ������                    *\n");
	printf("*            4-- �༭ѧ������                    *\n");
	printf("*            5-- ��ѯѧ����Ϣ                    *\n");
	printf("*            6-- ͳ��ѧ����Ϣ                    *\n");
	printf("*            7-- ������Ϣ�ļ�                    *\n");
	printf("*            8-- ��ʾѧ����Ϣ                    *\n");
	printf("*            0-- �˳�ϵͳ                        *\n");
	printf("**************************************************\n");
	printf("ѡ�����蹦��(0-8):"); } 
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
						printf("����ѡ�������ѡ��");
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
						printf("����ѡ�������ѡ��");
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
			printf("\n�����س��������˵�\n");
			getchar(); 
			break;
		}
		case 0:{
			run1=0;
			system("cls");
			printf("�����˳�ϵͳ.");
			sleep(1);
			printf(".");
			sleep(1);
			printf(".");
			sleep(1);
			system("cls");
			printf("ϵͳ�ѹر�");
			break;
		}
		default:{
			printf("����ѡ�������ѡ��");
			sleep(1);
			break;
		}
	}
}
}
void meun_2(){
	printf("**************** ѧ���ɼ�����ϵͳ ****************\n");
	printf("**************************************************\n");
	printf("                 ����ϵͳ�˵�-�༭                \n");
	printf("**************************************************\n");
	printf("*            1-- ׷�Ӽ�¼                        *\n");
	printf("*            2-- ɾ����¼                        *\n");
	printf("*            3-- �޸ļ�¼                        *\n");
	printf("*            0-- �������˵�                      *\n");
	printf("**************************************************\n");
	printf("ѡ�����蹦��(0-3):"); } 	
void meun_3(){
	printf("**************** ѧ���ɼ�����ϵͳ ****************\n");
	printf("**************************************************\n");
	printf("                 ����ϵͳ�˵�-��ѯ                \n");
	printf("**************************************************\n");
	printf("*            1-- ѧ�Ų�ѯ                        *\n");
	printf("*            2-- ������ѯ                        *\n");
	printf("*            0-- �������˵�                      *\n");
	printf("**************************************************\n");
	printf("ѡ�����蹦��(0-2):"); } 	
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
	printf("ѧ��       ����   ���� ��ѧ ���� ����� �ܷ� ����\n");
	do{
		printf("%-10s %-6s %-4d %-4d %-4d %-6d %-4d %-4d\n",p->No,p->Name,p->Chinese,p->Math,p->English,p->Computer,p->Sum,p->Average);
		p=p->next;
	}while(p!=NULL);
	getchar();
}
