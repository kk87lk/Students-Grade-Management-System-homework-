#include"stdio.h"
#include"stdlib.h"
#include"time.h"
#include"malloc.h"
#include"string.h"
meun_1(){
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
		case 8:
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
meun_2(){
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
meun_3(){
	printf("**************** 学生成绩管理系统 ****************\n");
	printf("**************************************************\n");
	printf("                 二级系统菜单-查询                \n");
	printf("**************************************************\n");
	printf("*            1-- 学号查询                        *\n");
	printf("*            2-- 姓名查询                        *\n");
	printf("*            0-- 返回主菜单                      *\n");
	printf("**************************************************\n");
	printf("选择所需功能(0-2):"); } 	
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
