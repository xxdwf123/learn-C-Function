#define _CRT_SECURE_NO_WARNINGS 1
//-----ѧϰ�⺯����www.cplusplus.com/reference
#include<stdio.h>
#include<string.h>
//int main()
//{
//	size_t
//	char c[]="hello bit";
//	int i = strlen(c);
//	printf("%d",i);
//	return 0;
//}
//------���ÿ⺯���Ķ���ѧϰ�⺯��
//------����memset����������void*memset(void *ptr, int value, size_t num)(עsize_t ���޷�������)
//------��˼���ǰ�ptrָ��Ŀռ��ǰnum���ֽڵ��������Ϊvalue��
int main()
{
	char a[]="hello world";
	memset(a,'x',5);//������a��ǰ5���ֽ��滻Ϊx
	printf("%s\n",a);
	return 0;
}
