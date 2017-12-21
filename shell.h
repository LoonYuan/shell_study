#ifndef __SHELL_H__
#define __SHELL_H__

//相关硬件函数声明
void puts(const char *p);
char *gets(char *p);
void uart_init(void);

//解析执行命令相关函数
void init_cmd_set(void);
void cmd_parser(char *str);
void cmd_exec(void);

//字符串相关函数
void memset(char *p,int val,int length);
void strcpy(char *dst,const char *src);
void strcmp(const char *cs,const char *ct);



//宏定义
#define MAX_LINE_LENGTH			256			//命令行长度，命令不能超过这个长度
#define	CMD_NUM					3			//定于当前系统的命令数

//宏定义一些标准命令
#define	led						"led"
#define	lcd						"lcd"
#define	pwm						"pwm"



//全局变量声明
extern char g_cmd_set[CMD_NUM][MAX_LINE_LENGTH];





#endif







