/*
 * 文件名：	main
 * 作者：	LoonYuan
 * 描述：	基于九鼎s5pv210开发板，制作一个简易shell，主要用来学习
 * 时间：	2017/12/22
 */






#include "shell.h"



static void shell_init(void)
{
	init_cmd_set();
	uart_init();
	puts("X210 simple shell:\n");
} 




int main(void)
{
	
	char buf[MAX_LINE_LENGTH] = {0};	//用来存放用户输入命令内容

	shell_init();
	
	while(1)
	{
		//第一步：获取命令
		puts("astion:");
		memset(buf,0,sizeof(buf));
		gets(buf);
		
		//第二步：解析命令
		cmd_parser(buf);
		
		//第三步：执行命令
		cmd_exec();
	}
	
	return 0;
}