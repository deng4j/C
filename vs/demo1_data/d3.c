#include<stdio.h>

int g_val = 101;

/*
C�����е����㷽ʽ�������ж���䡢ѭ����javaһ��
C�����б����������Ǿͽ�ԭ�򣬱���ֲ�������ȫ�ֱ���������һ������ô�ú�������þֲ�����
C���������javaһ��
*/

/*
ö�٣���C �����У�ö�������Ǳ����� int ���� unsigned int �����������
*/

//һ.����Booleanֵ
/* ����1 */
#define TRUE 1
#define FALSE 0

/* ����2 */
enum bool{ false, true };


/*�����ȶ���ö�����Ͳ�����ö�ٱ���*/
enum Day
{
	MON, TUE, WED, THU, FRI, SAT, SUN
} day;



int main1() {

	for (day = MON; day <= SUN; day++)
	{
		printf("%d \n", day);
	}

	printf("MON: %d", THU);
	return 0;
}

