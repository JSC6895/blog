//#include <stdio.h>
//
////����һ���ṹ������
////struct Teacher 
////{
////	char name[64];
////	int age;
////	int id;
////};
//
////���͵��ض���
////����ʡ��struct
//typedef struct Teacher 
//{
//	char name[64];
//	int age;
//	int id;
//}Teacher;
//
////�����Ͷ�����������ַ���
//
//struct Student
//{
//	char name[64];
//	int age;
//}s1,s2;//�������͵�ͬʱ �������
//
//struct
//{
//	char name[64];
//	int age;
//}s3,s4; //�������� �������
//
//
////��ʼ�����������ַ���
////���������Ȼ���ʼ��
//struct Student2 
//{
//	char name[64];
//	int age;
//}s5 = {"name",23};
//
//struct
//{
//	char name[64];
//	int age;
//}s6 = {"name",23};
//
//
//void main04()
//{
//	Teacher t1; //����c���������ҷ����ڴ�
//	t1.age = 23; //"."�������ĺ�����Ѱַ������age�����t1��ƫ���� =�� ���� ����ŷ�����ڴ�
//	Teacher t2 = {"aa",24,02};
//
//
//	//ͨ��ָ��ķ�ʽ���� �ڴ�ռ�
//	{
//		Teacher *p =NULL;
//		p = &t2;
//		printf("p->age:%d\n",p->age);
//		printf("p->name:%s\n",p->name);
//	}
//
//	printf("hello.....\n");
//	system( "pause");
//	return;
//}