//自己写字符处理函数

void memset(char *p,int val,int length)
{
	int i;
	
	for(i=0; i<length; i++)
	{
		p[i] = val;
	}
}



int strcmp(const char *cs,const char *ct)
{
	unsigned char c1,c2;
	while(1)
	{
		c1 = *cs++;
		c2 = *ct++;
		if(c1 != c2)
		{
			return c1<c2 ? -1:1;
		}
		if(!c1)
		{
			break;
		}
	}
	return 0;
}



void strcpy(char *dst,const char *src)
{
	while(*src != '\0')
	{
		*dst++ = *src++;
	}
}







