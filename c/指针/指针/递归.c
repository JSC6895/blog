#include <stdio.h>


//����2:����һ��ȫ�ֱ�����ÿ�εݹ�ʱ��ָ���ַ����ȫ�ֱ�����
/*
g_buf �Ǹ�ȫ�ֱ���
strncpy(g_buf,p,1); �Ḳ���ϸ�ָ��
strncat(g_buf,p,1); ���׷�ӵ�����
ʹ��ȫ�ֱ����и����⣬���Ƕ��߳�ʱ�������Դ�������� 
*/
void inverse01(char *p)
{
	if(p == NULL)
	{
		return ;
	}
	if(*p == '\0') //�����˫���ŵĻ������Ҳ������������ʶ��
	{
		return ;
	}

	inverse01(p + 1);
	printf("%c",*p);
}

void inverse02(char *p,char *buf)
{
	if(p == NULL || buf == NULL)
	{
		return ;
	}
	if(*p == '\0') //�����˫���ŵĻ������Ҳ������������ʶ��
	{
		return ;
	}

	inverse02(p + 1,buf);
	strncat(buf,p,1);
}
/*
	
void main()
{
	char buf[] = "ABCDEFG";
	inverse01(buf);
	
	system("pause");
}
*/
void main03()
{
	char buf[] = "abcd";
	
	{
		char mybuf[1024] = {0};
		inverse02(buf,mybuf);
		printf("%s \n",mybuf);
	}
	system("pause");
}