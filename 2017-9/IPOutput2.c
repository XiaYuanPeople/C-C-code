//IPOutput2.c -- ������ip��ַת����ʮ����ip��ַ
/*
    ��������Ĺ�ϵ������⣬
    ������������Լ����뷨�������Ҳ���ǲ�����Ŷ�����Ǹо�û�����ַ���
    ������codeblocks�кü������������ò��ˣ�������Ȥ

*/
#include <stdio.h>

//��x^n������������⻹������ô�ã������˷�ʱ�䰡��
int bin_dec(int x, int n)
{
    if(n==0)
        return 1;
    return x*bin_dec(x,n-1);
}

int main()
{
    int ip[4] ={0};
    char a[33];     //Ϊʲô��33���ռ��أ���Ϊ��Ҫ�Ӹ�\0��ʱ������
    printf("������һ��ip��\n");
    scanf("%s",a);  //�����������ַ���ʽ����   �������Ƿ���c�����������ǶԳ���Աû��ʲô���ư���ֻҪ�㵨�Ӵ�
    //д���ˣ�scanf("%c",a);

    for(int i=0; i<8; i++)  //����0��7λ��ת�����
    {
        if(a[i] == '1')
            ip[0] += bin_dec(2,7-i);
    }
    printf("%d\n",ip[0]);
    for(int i=8; i<16; i++)  //����0��7λ��ת�����
    {
        if(a[i] == '1')
            ip[1] += bin_dec(2,15-i);
    }
    printf("%d\n",ip[1]);
    for(int i=16; i<24; i++)  //����0��7λ��ת�����
    {
        if(a[i] == '1')
            ip[2] += bin_dec(2,23-i);
    }
    printf("%d\n",ip[2]);
    for(int i=24; i<32; i++)  //����0��7λ��ת�����
    {
        if(a[i] == '1')
            ip[3] += bin_dec(2,31-i);
        if(a[i] == '\0');
            break;
    }
    printf("%d\n",ip[3]);
    printf("IP:\n%d.%d.%d.%d",ip[0],ip[1],ip[2],ip[3]);

}