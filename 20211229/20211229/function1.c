#define _CRT_SECURE_NO_WARNINGS 1
//-----学习库函数：www.cplusplus.com/reference
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
//------利用库函数的定义学习库函数
//------例如memset函数，定义void*memset(void *ptr, int value, size_t num)(注size_t 是无符号整型)
//------意思就是把ptr指向的空间的前num个字节的内容填充为value。
int main()
{
	char a[]="hello world";
	memset(a,'x',5);//把数组a的前5个字节替换为x
	printf("%s\n",a);
	return 0;
}
