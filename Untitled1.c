#include <stdio.h>
int main()
{

    return 0;
}
//int main()
//{
//    int i =0;//��1/1-1/2+1/3-....-1/100�ĺ�
//    double sum=0.0;
//    int flag=1;
//    for(i=1; i<=100; i++)
//    {
//        sum = sum + flag*1.0/i;
//        flag = -flag;
//    }
//    printf("%lf",sum);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int count =0;
//    for(i=1; i<=100; i++)//���1��100�г���9�Ĵ�����
//    {
//        if(i%10 ==9)
//        {
//            count++;
//            printf("%d ",i);
//        }
//        else if(i/10 ==9)
//        {
//            printf("%d ",i);
//            count++;
//        }
//
//    } printf("\n%d",count);
//    return 0;
//}
//#include<math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for(i=100; i<=200; i+=2)
//    {//�ж�i�Ƿ�Ϊ���� �㷨�Ż���
//        int j=0;
//        for(j=2; j<=sqrt(i); j++)
//        {
//            if(i%j ==0)
//                break;
//        }
//        if(j >sqrt(i))
//        {
//            count++;
//            printf("%d ",i);
//
//        }
//    }
//    printf("\n%d",count);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for(i=100; i<=200; i++)
//    {//�ж�i�Ƿ�Ϊ���� �жϹ����Գ�����2��i-1������û��������Ϊ����
//        int j=0;
//        for(j=2; j<=i; j++)
//        {
//            if(i%j ==0)
//                break;
//        }
//        if(j ==i)
//        {
//            count++;
//            printf("%d ",i);
//
//        }
//    }
//    printf("\n%d",count);
//    return 0;
//}
//int main()
//{
//    int year = 0;
//    for(year=1000; year<=2000; year++)//��ӡ1000��2000�е�����
//    {
//        if(year%4==0 &&year%100 !=0)
//            printf("�����ǣ�%d\n",year);//Ҳ����ʹ��if(((year%4==0) &&(year%100 !=0))||(year%400 =0))
//          else if(year%400 == 0)
        //printf("�����ǣ�%d\n",year);
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c= 0;
//    scanf("%d%d",&a,&b);
//    while(a%b)
//    {
//        c = a%b;//շת��������Լ��
//        a=b;
//        b=c;
//    }
//    printf("%d\n",b);
//    return 0;
//}
//int main()
//{
//    int i = 0;//��1��100��3�ı���
//    for(i=1; i<=100; i++)
//    {
//        if(i%3 ==0)
//            printf("%d\n",i);
//    }
//    return 0;
//}
//int main()//�Ƚ���������С�����ҴӴ�С�������������
//{
//    int i = 0;
//    int m = 0;
//    int n = 0;
//    scanf("%d%d%d",&i,&m,&n);
//    if(i<m)
//    {
//        int tem = 0;
//        tem = i;
//        i = m;
//        m = tem;
//    }
//    if(i<n)
//    {
//        int tem = 0;
//        tem = i;
//        i = n;
//        n = tem;
//    }
//    if(m<n)
//    {
//        int tem = 0;
//        tem = m;
//        m = n;
//        n = tem;
//    }
//    printf("%d %d %d\n",i,m,n);
//}

//int main()
//{
//    int i = 0;
//    char password[20]={0};//ģ���û���¼��ֻ�������������룬������ȷ���룬���ξ������˳�����
//    for(i=0; i<3; i++)
//    {
//        printf("�������������\n");
//        scanf("%s",password);
//        if(strcmp(password, "123456")==0)//����ֱ��ʹ��==�Ƚ��ַ�����С��Ӧ��ʹ��strcmp����
//        {
//            printf("��¼�ɹ�\n");
//            break;
//        }
//        else
//        {
//            printf("�������\n");
//        }
//    }
//    if(i==3)
//    {
//        printf("�����������������\n");
//    }
//    return 0;
//}
//#include<string.h>
//#include<windows.h>//sleep��ͷ�ļ�
//int main()
//{
//     char arr1[] = "welcome to bit !!!!!!";
//     char arr2[] = "#####################";
//     int left = 0;
//     int right = strlen(arr1)-1;
//     while (left <= right)
//     {
//       arr2[left]= arr1[left];
//       arr2[right]= arr1[right];
//       printf("%s\n",arr2);
//       Sleep(1000);//��Ϣһǧ����Ҳ����һ��
//       left++;
//       right--;
//
//     }
//return 0;
//}
