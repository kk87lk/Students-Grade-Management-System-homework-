#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#include"malloc.h"
#include"string.h"
meun_1(){
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
fun_meun_1(){
	int a;
	int run1=1;	
	while(run1){
	system("cls");
	meun_1();
	scanf("%d", &a);
		switch(a){
		case 1:
		case 2:
		case 3:
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
		case 8:
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
meun_2(){
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
meun_3(){
	printf("**************** ѧ���ɼ�����ϵͳ ****************\n");
	printf("**************************************************\n");
	printf("                 ����ϵͳ�˵�-��ѯ                \n");
	printf("**************************************************\n");
	printf("*            1-- ѧ�Ų�ѯ                        *\n");
	printf("*            2-- ������ѯ                        *\n");
	printf("*            0-- �������˵�                      *\n");
	printf("**************************************************\n");
	printf("ѡ�����蹦��(0-2):"); } 	
fun_1(){} 
fun_2(){
	
} 
fun_3(){} 
fun_4(){} 
fun_5(){} 
fun_6(){} 
fun_7(){} 
fun_8(){} 
struct student{
	int Math;
	int Computer;
	int English;
	long int No;
	char Name[6];
	struct student *next;
};
int main(){
	fun_meun_1();
} 
