#include<stdio.h>

int g_val=101;

/*
C�����е����㷽ʽ�������ж���䡢ѭ����javaһ��
C�����б����������Ǿͽ�ԭ�򣬱���ֲ�������ȫ�ֱ���������һ������ô�ú�������þֲ�����
C���������javaһ��
*/

/*
��������:

char //�ַ�������

short //������

int //����

long //������

long long //����������

float //�����ȸ�����

double //˫���ȸ�����

*/

/*
ö�٣���C �����У�ö�������Ǳ����� int ���� unsigned int �����������
*/
/*1���ȶ���ö�����Ͳ�����ö�ٱ���*/
enum Day
{
	MON, TUE, WED, THU, FRI, SAT, SUN
} day;


int main2() {

	for (day = MON; day <= SUN; day++)
	{
		printf("%d \n", day);
	}

	printf("MON: %d", THU);
	return 0;
}

