//PartApple.c -- �ɷ�ƻ��
/*
    ���������ѭ�����н����
    1���趨һ�����飺array[6];
    2��a[i] = a[i-1]/(9-i)
    3��������������ͣ������������֪��
    4����������֪��һ���������������˵�ƻ����һ����ġ�����
*/

#include <stdio.h>

int main()
{
    int apple[6];
    int sum = 2520;

    for(int i=0; i<6; i++)
    {
        a[i] = a[i]*(3+i)/(2+i);
        sum += a[i];    //�ӵ�������Ӧ����2520
    }
}