//解析命令和执行命令相关函数
#include "shell.h"


char g_cmd_set[CMD_NUM][MAX_LINE_LENGTH];


//初始化命令列表
void init_cmd_set(void)
{
	memset((char *)g_cmd_set,0,sizeof(g_cmd_set));
	strcpy(g_cmd_set[0],led);
	strcpy(g_cmd_set[1],lcd);
	strcpy(g_cmd_set[2],pwm);
}

//命令解析
void cmd_parser(char *str)
{
/*	int i;
	
	for(i=0; i<CMD_NUM;i++)
	{
		if(!strcmp(str,g_cmd_set[i]))
		{
			//相等，找到命令，去执行相应的动作
			puts("您输入的命令是：");
			puts(str);
			puts("\n");
			break;
		}
	}
	if(i >= CMD_NUM)
	{
		//没找到这个命令
		puts(str);
		puts("不是一个内部合法命令，请重新输入。\n");
		puts("\n");
	}
	*/
}

//命令执行
void cmd_exec(void)
{
	
}

