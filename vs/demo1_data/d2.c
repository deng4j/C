#include<stdio.h>

/*
���峣����
1.ʹ�� #define Ԥ��������
2.const �ؼ���

�洢�ࣺ
1.auto �洢�������оֲ�����Ĭ�ϵĴ洢��,auto ֻ�����ں����ڣ��� auto ֻ�����ξֲ�������
2.register �洢�����ڶ���洢�ڼĴ����ж����� RAM �еľֲ�������
����ζ�ű��������ߴ���ڼĴ����Ĵ�С��ͨ����һ���֣���
�Ҳ��ܶ���Ӧ��һԪ�� '&' ���������Ϊ��û���ڴ�λ�ã���
3.static �洢��ָʾ�������ڳ�������������ڱ��־ֲ������Ĵ��ڣ�
������Ҫ��ÿ����������뿪������ʱ���д���������
4.extern �洢�������ṩһ��ȫ�ֱ��������ã�ȫ�ֱ��������еĳ����ļ�
���ǿɼ��ġ�����ʹ�� extern ʱ�������޷���ʼ���ı�������ѱ�����ָ��
һ��֮ǰ������Ĵ洢λ�á�
extern ����������һ���ļ�������һ��ȫ�ֱ�������,�������Զ�Σ�����ֻ��һ�Ρ�

ע�⣺
1.ȫ�ֱ������ܶ�γ�ʼ��
2.��������Ҫ���ڵ��õ�ǰ��
*/

#define LENGTH 10


int add() {
    const int WITH = 5;
    return LENGTH + WITH;
}

static int year = 10;
int subtract() {
    auto int year1 = 20;
    register int year2 = 100;
    return year2 - year - year1;
}

extern int g_val;

int main0() {

    char a = 'a';

    printf("cahr: %d \n", a);
    printf("add(): %d \n", add());
    printf("subtract(): %d \n", subtract());
    printf("ȫ�ֱ�����%d", g_val);
    getchar();


    return 0;

}


