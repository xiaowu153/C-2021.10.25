#include <stdio.h>
int main()
{

    return 0;
}
//int main()
//{
//    int i =0;//求1/1-1/2+1/3-....-1/100的和
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
//    for(i=1; i<=100; i++)//输出1到100中出现9的次数。
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
//    {//判断i是否为素数 算法优化。
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
//    {//判断i是否为素数 判断规则：试除法对2到i-1除法，没有余数则为素数
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
//    for(year=1000; year<=2000; year++)//打印1000到2000中的闰年
//    {
//        if(year%4==0 &&year%100 !=0)
//            printf("闰年是：%d\n",year);//也可以使用if(((year%4==0) &&(year%100 !=0))||(year%400 =0))
//          else if(year%400 == 0)
        //printf("闰年是：%d\n",year);
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
//        c = a%b;//辗转相除求最大公约数
//        a=b;
//        b=c;
//    }
//    printf("%d\n",b);
//    return 0;
//}
//int main()
//{
//    int i = 0;//求1到100中3的倍速
//    for(i=1; i<=100; i++)
//    {
//        if(i%3 ==0)
//            printf("%d\n",i);
//    }
//    return 0;
//}
//int main()//比较三个数大小，并且从大到小输出这三个数。
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
//    char password[20]={0};//模拟用户登录，只能输入三次密码，密码正确进入，三次均错误退出程序
//    for(i=0; i<3; i++)
//    {
//        printf("请输入你的密码\n");
//        scanf("%s",password);
//        if(strcmp(password, "123456")==0)//不能直接使用==比较字符串大小，应该使用strcmp函数
//        {
//            printf("登录成功\n");
//            break;
//        }
//        else
//        {
//            printf("密码错误\n");
//        }
//    }
//    if(i==3)
//    {
//        printf("三次密码输出均错误\n");
//    }
//    return 0;
//}
//#include<string.h>
//#include<windows.h>//sleep的头文件
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
//       Sleep(1000);//休息一千毫秒也就是一秒
//       left++;
//       right--;
//
//     }
//return 0;
//}
