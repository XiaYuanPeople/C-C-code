#include <stdio.h>

int main()
{
    int n; //���ʼ�ķ���
    float sum1,sum2;  //��һ���˺͵ڶ�����ȡ�ĵķ���
    for(n=11;;n++)  //���������ޣ���ѭ�����Լ�����ѭ��
                    //��ʵ�ƺ���������while����Ҳ�ǿ��Եģ����������鷳��
    {
        sum1 = (n+9)/10.0;
        sum2 = (171 +9*n)/100.0;    //�һ����е����̫���ף�ΪʲôҪ�趨��float�أ����Ϊʲôת����int�أ�
                                    //Ҳ��������Ƶ�����֮�����������
        if(!(sum1 ==(int) sum1))  continue;   //��ӦΪ����

        if(!(sum2)==(int)sum2) continue;      //��֤sum2Ϊ����

        if(sum1 == sum2) break;
    }

    printf("����%d��ѧ����\n���ǹ��ֳ���%d��",(int)(n/sum1),n);

    printf("\n");

}