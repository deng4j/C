
#include<stdio.h>


/*
getchar()ÿ�λ�ȥ������ȥȡһ���ַ�
scanf�Ὣ�ռ��л��з�'\n'ǰ���ַ���ȫ��ȡ�������뵽��ַ��
*/

int main() {

	int ch = 0;
	int temp = 0;
	while ((ch=getchar()) !=EOF)
	{
		if (ch>=97 && ch<=122)
		{
			temp = ch - 32;
		}
		else if (ch >= 65 && ch <= 90)
		{
			temp = ch + 32;
		}
		else
		{
			printf("��������ĸ\n");
			continue;
		}

		printf("%c\n", temp);
		getchar(); //������������Ļ��з�'\n'
	}

	return 0;
}