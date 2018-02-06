#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#include"malloc.h"
#include"string.h"
#define len sizeof(struct student)
int n;
struct student *head_main;
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
int statistics();
int outfile ();
void meun_1();
void fun_meun_1();
void meun_2();
void meun_3();
void fun_1();
void fun_2();
int fun_3();
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
struct student *creat(void)
{
	struct student *head,*p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(len);
	printf("��������ѧ����ѧ�ţ�������������Ƴɼ�\n");
	scanf("%s%s%d%d%d%d",p1->No , p1->Name , &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
	while(check(p1->Chinese , p1->Math , p1->English , p1->Computer)==0) {
	printf("�����˴���ĳɼ�������������������Ƴɼ�\n");
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
	printf("��Ϣ�����ɹ�\n");
	sleep(1); 
	return (head);
}
void meun_1()
{
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
			system("cls");
			fun_1();
			printf("��ʼ���ɹ�\n�����س��������˵�");
			fflush ( stdin );
			getchar ();
			fflush ( stdin );
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
						printf("����ѡ�������ѡ��");
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
						printf("����ѡ�������ѡ��");
						sleep(1);
						break;
					}
				}
			}
			break;
		}
		case 6:
		{
			statistics();
			break;
		}
		case 7:
		{
			fun_7();
			break;
		}
		case 8:
		{
			fun_8();
			printf("\n�����س��������˵�\n");
			fflush(stdin);
			getchar(); 
			break;
		}
		case 0:
		{
			run1=0;
			system("cls");
			printf("�����˳�ϵͳ.");
			sleep(1);
			printf(".");
			sleep(1);
			system("cls");
			printf("ϵͳ�ѹر�");
			break;
		}
		default:
		{
			printf("����ѡ�������ѡ��");
			sleep(1);
			break;
		}
	}
}
}
void meun_2()
{
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
void meun_3()
{
	printf("**************** ѧ���ɼ�����ϵͳ ****************\n");
	printf("**************************************************\n");
	printf("                 ����ϵͳ�˵�-��ѯ                \n");
	printf("**************************************************\n");
	printf("*            1-- ѧ�Ų�ѯ                        *\n");
	printf("*            2-- ������ѯ                        *\n");
	printf("*            0-- �������˵�                      *\n");
	printf("**************************************************\n");
	printf("ѡ�����蹦��(0-2):"); } 	
void fun_1()
{
	head_main=NULL;
} 
void fun_2()
{
	 
} 
int fun_3()
{	
	struct student *p;
	p=head_main;
	if(p!=NULL)
	{
		printf("�Ѵ���ѧ����Ϣ���Ƿ��������������Ϣ��\n����1�����»س���ȷ�ϼ��������򰴻س�������һ��\n");
		getchar() ;
		if(getchar()=='1') ;
		else return 0;
	}
	head_main=creat();
} 
void fun_4_1()
{} 
void fun_5()
{} 
void fun_6()
{} 
void fun_7()
{
	outfile ();
} 
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
		printf("δ���������ͷ"); 
		return 0;
	}
	system("cls");
	printf("ѧ��       ����   ���� ��ѧ ���� ����� �ܷ� ����\n");
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
		printf("δ���������ͷ");
		printf("\n�����س������ϼ��˵�");
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
	printf("�������������ѧ����ѧ�ţ�������������Ƴɼ�\n");
	scanf("%s %s %d %d %d %d",p1->No , p1->Name , &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
	while(check(p1->Chinese , p1->Math , p1->English , p1->Computer)==0) {
	printf("�����˴���ĳɼ�������������������Ƴɼ�\n");
	scanf("%d %d %d %d", &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
	} 
	p1->Sum=p1->Chinese + p1->Computer + p1->English + p1->Math;
	p1->Average=p1->Sum/4;
	while(1)
	{
		p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(len);
		printf("�������������ѧ����ѧ�ţ�������������Ƴɼ�\n");
		scanf("%s",p1->No); 
		if(p1->No[0]=='@') break;
		scanf("%s %d %d %d %d", p1->Name , &p1->Chinese , &p1->Math , &p1->English , &p1->Computer);
		while(check(p1->Chinese , p1->Math , p1->English , p1->Computer)==0) {
		printf("�����˴���ĳɼ�������������������Ƴɼ�\n");
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
		printf("δ���������ͷ");
		printf("\n�����س������ϼ��˵�");
		fflush(stdin);
		getchar();
		fflush(stdin);
		return 0;
	}
	char s1[10];
	system("cls");
	printf("�������޸�ѧ����ѧ��\n");
	scanf("%s",s1);
	while(strcmp(s1,p->No)!=0)
	{
		p=p->next;
		if(p->next==NULL)
		{
			printf("δ���ҵ���ѧ��");
			sleep(1);
			return 0;
		}		
	}
	printf("���������ѧ����������Ƴɼ�\n");
	scanf("%d %d %d %d",&p->Chinese , &p->Math , &p->English , &p->Computer);
	while(check(p->Chinese , p->Math , p->English , p->Computer)==0) {
	printf("�����˴���ĳɼ�������������������Ƴɼ�\n");
	fflush(stdin);
	scanf("%d %d %d %d", &p->Chinese , &p->Math , &p->English , &p->Computer);
	} 
	p->Sum=p->Chinese + p->Computer + p->English + p->Math;
	p->Average=p->Sum/4;
	printf("�޸ĳɹ�");
	sleep(1); 
}
int query_no()
{
		char s1[10];
	printf("�������ѯѧ����ѧ��");
	scanf("%s",s1);
	struct student *p;
	p=head_main;
	if(p==NULL) 
	{
		system("cls");
		printf("δ���������ͷ");
		printf("\n�����س������ϼ��˵�");
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
			printf("δ���ҵ���ѧ��");
			sleep(1);
			return 0;
		}
	}
	system("cls");
	printf("��ѧ��(����%s)��������Ƴɼ�����Ϊ%d %d %d %d\n�ܷ�Ϊ%d\n����Ϊ%.2f", p->Name, p->Chinese , p->Math , p->English , p->Computer, p->Sum,p->Average);
	fflush(stdin);
	getchar();
}
int query_name()
{
		char s1[10];
	printf("�������ѯѧ����ѧ��");
	scanf("%s",s1);
	struct student *p;
	p=head_main;
	if(p==NULL) 
	{
		system("cls");
		printf("δ���������ͷ");
		printf("\n�����س������ϼ��˵�");
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
			printf("δ���ҵ���ѧ��");
			sleep(1);
			return 0;
		}
	}
	system("cls");
	printf("��ѧ��(ѧ��%s)��������Ƴɼ�����Ϊ%d %d %d %d\n�ܷ�Ϊ%d\n����Ϊ%.2f", p->No, p->Chinese , p->Math , p->English , p->Computer, p->Sum,p->Average);
	fflush(stdin);
	getchar();
}
int del()
{
	char s1[10];
	system("cls");
	printf("������ɾ��ѧ����ѧ��\n");
	scanf("%s",s1);
	struct student *p3,*p1,*p2;
	p3=head_main;
	if(p3==NULL) 
	{
		system("cls");
		printf("δ���������ͷ");
		printf("\n�����س������ϼ��˵�");
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
			printf("δ���ҵ���ѧ��");
			sleep(1);
			return 0;
		}
	}
	p2->next=p3->next;
	printf("ɾ���ɹ�"); 
	sleep(1);
}
int statistics() 
{
	struct student *p4;
	p4=head_main;
	if(p4==NULL) 
	{
		system("cls");
		printf("δ���������ͷ");
		printf("\n�����س������ϼ��˵�");
		fflush(stdin);
		getchar();
		fflush(stdin);
		return 0;
	}
	int num=0,sum_all_ch=0,sum_all_co=0,sum_all_ma=0,sum_all_en=0;
	float ave_all_ch=0,ave_all_co=0,ave_all_ma=0,ave_all_en=0;
	do
	{
		num++;
		sum_all_ch+=p4->Chinese;
		sum_all_co+=p4->Computer;
		sum_all_en+=p4->English;
		sum_all_ma+=p4->Math;
		p4=p4->next;
	}while(p4!=NULL);
	ave_all_ch=((float)sum_all_ch/num);
	ave_all_co=((float)sum_all_co/num);
	ave_all_en=((float)sum_all_en/num);
	ave_all_ma=((float)sum_all_ma/num);
	system("cls");
	printf("�˰༶������Ϊ %d ,ƽ���ֱַ�Ϊ\n",num);
	printf("����               %.2f\n",ave_all_ch);
	printf("��ѧ               %.2f\n",ave_all_ma);
	printf("Ӣ��               %.2f\n",ave_all_en);
	printf("�����             %.2f\n",ave_all_co);
	printf("\n�����س������ϼ��˵�");
	fflush(stdin);
	getchar();
	fflush(stdin);
	return 0;
}
int outfile ()
{
	FILE *f;
	f=fopen("d:\\stuinfo.txt","w");
	if(f==NULL)
	{
	    printf("\n�����ļ�����");
	    fflush(stdin);
	    getchar();
	    fflush(stdin);
	    return 0;
	}
	struct student *p;
	p=head_main;
	if(p==NULL) 
	{
		system("cls");
		printf("δ���������ͷ");
		printf("\n�����س������ϼ��˵�");
		fflush(stdin);
		getchar();
		fflush(stdin);
		return 0;
	}
	fprintf(f,"ѧ��       ����   ���� ��ѧ ���� ����� �ܷ� ����\n");
	while(p!=NULL)
	{
		fprintf(f,"%-10s %-6s %-4d %-4d %-4d %-6d %-4d %-4.2f\n",p->No,p->Name,p->Chinese,p->Math,p->English,p->Computer,p->Sum,p->Average);
		p=p->next;
	}
	fclose(f);
	system("cls");
	printf("d:\\stuinfo.txt�����ɹ�\n\n");
	printf("�����س��������˵�");
	fflush (stdin);
	getchar();
	fflush (stdin);
	}






