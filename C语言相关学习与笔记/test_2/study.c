#define _CRT_SECURE_NO_WARNINGS
    //std = ��׼
    //i = input
    //o = ���(output)
#include <math.h>
#include <stdio.h>

    //main = ��������(C���Թ涨)
    //main��������ֻ��һ��

//int main() {
    //printf = �⺯�������ڴ�ӡ���ݣ�
    //scanf = ���뺯��
    //printf("�ҵ������Ǻ�����\n");

//} 
    //char = �ַ����� 1�ֽ�
    //C������û���ַ�������
    //short = ���� 2�ֽ�
    //int = �� 4�ֽ�
    //long = ���� 4�ֽ�
    //long long = ������ 8�ֽ�
    //float = �����ȸ��� 4�ֽ�
    //double = ˫���ȸ��� 8�ֽ�

    /*printf(" %zu\n",sizeof(int));
    printf(" %zu\n",sizeof(char));
    printf(" %zu\n",sizeof(short));
    printf(" %zu\n",sizeof(double));
    printf(" %zu\n",sizeof(float));
    printf(" %zu\n",sizeof(long));
    printf(" %zu\n",sizeof(long long));
    */

    //���� -- �ֲ�������ȫ�ֱ���
    //�ֲ����� - main������ 
    //ȫ�ֱ��� - main������ - ȫ�ֱ����Ǿ����ⲿ�������Ե�
    //�ֲ���ȫ�ֱ�������ʱ���ֲ�>ȫ��
    
    //double price = 2.5;
    //int number = 1;
    //char name = "���ɰ���";
    //printf("hard working\n");
    //printf("number=%d\n",number); 
    //printf("name=%s\n",name);
    //printf("price=%e\n",price,"Ԫ");

    //int num1 = 0;
    //int num2 = 0;
    //printf("����������=");
    //scanf("%d %d", &num1, &num2);
    //int sum = num1 + num2;
    //printf("sum=%d\n", sum);

    //������������ -- {}�ڲ��ľֲ������ɹ��ڲ����� -- ȫ�ֱ�������Ӱ��
    //�������������ڣ�
    //�ֲ��������������� -- �����������������ڿ�ʼ���뿪�������������ڽ���
    //ȫ�ֱ������������� -- �����������������

    //���������ⲿ�ķ��� -- extern -- �� -- extern int number;

    //(1)���泣��
    //10;
    //'w';
    //31.312;
    //"apple";
    //(2)const���εĳ�����
    const int age = 18;//��C�����У�const���εı����������Ǳ��������޷����޸ģ��г���������
    //define(Ԥ����ָ����ǹؼ���)����ı�ʶ������
    //#define EXP 100
    //#define LVUP "��������"
    //printf("��þ���=%d\n",EXP);
    //printf("%s\n", LVUP);
    //ö�ٳ���
    //int main(){
    //enum subject {
    //    MATH,
    //    CHINESE,
    //    BIOLOGY,
    //    ENGLISH,
    //    PE,
    //    WRITE,
    //    WAR,
    //    PHYSICS,
    //    CHEMISTRY,
    //};
    //enum subject S = 1;
    //printf("����������ѧϰ�Ŀγ�");
    //scanf("%d", &S);
    //printf("����ѡ��%d", S);
    //return 0;
    //}
    //�ַ���������洢���� -- ��ɱ����ķ���
    //�ַ����Ľ�����־��һ��\0��ת���ַ�
    //int main(){
    //char name[] = "wjstmx";
    //printf("%c", name[2]);
    //}
    //���ַ������ȵ�һ������ string length   ͷ�ļ� -- string.h
    //strlen();
    //��strlen������һ��δ�������ȵ�����ʱ��������ĳ���Ϊ���ֵ

    //C����ת��˵����
    /* %d - ��ӡ����(���ַ�ʹ�ô������ʱ���Դ�ӡ��Ӧ��ASCII��--�����·�����) ����ʱ%xd����ֻ������x������ ���ʱ%0xd����������x
    �����֣�������������ǰ�油0 */
    //     int main() {
    //char word;
    //scanf("%c", word);
    //printf("%d", word);
    //return 0;
    //}
    //%c - ��ӡ�ַ�
    //%s - ��ӡ�ַ���
    //%f - ��ӡfloat���͵����� -- 3.1415926
    //��.3f���Ǳ�����λС�������������λС�����ǡ�.2f��
    //%lf - ��ӡdouble���͵�����
    //%zu - ��ӡsizeof�ķ���ֵ
    //%u - ��ӡ�޷�������
    //%p - ָ��
    //%% - "%"
    //%m
    
    //ת���ַ� ��
    /* \n -- ����
       \' -- ��ӡ��
       \" -- ��ӡ"
       \\ -- ��ӡ\
       \a -- �����ַ����õ��Է�������������
       \b -- �˸�
       \f -- ��ҳ
       \r -- �س�
       \t -- ��ӡһ��table����Ч�� -- ˮƽ�Ʊ�
       \v -- ��ֱ�Ʊ�
       \ddd -- ddd��ʾ1~3���˽��Ƶ����� -- ��ϸ��ASCII��
       \xdd -- dd��ʾ2��ʮ�����Ƶ�����
       \0 -- ���ַ�
    */
  /*int main() {
        int price[] = { 0,10,20,30,40,50 };
        int yesorno = 0;
        printf("��ӭ����������������̵꣬�������ǹ˿���\n��yes=1/no=2��");
        scanf("%d", &yesorno);
        if (yesorno == 1)
        {
            int code = 0;
            int number = 0;            
            int sum = 0;
            int buy = 1;
            int sumnumber = 0;
            while (buy == 1) {
                printf("1.ƻ��(10$) 2.�㽶(20$) 3.����(30$) 4.����(40$) 5.��Ȫˮ(50$)\n");
                printf("��ѡ������Ҫ�������Ʒ��ţ�1/2/3/4/5��\n");
                scanf("%d", &code);
                printf("��ѡ����Ҫ���������\n");
                scanf("%d", &number);
                printf("����������Ҫ��������Ʒ��(1/2)");
                scanf("%d", &buy);
                sumnumber += number;
                sum = sum + price[code] * number;
            }
            if (sum >= 200 && sum < 1000) {
                printf("������������200Ԫ�������ܱ���8���Żݣ�\n");
                sum = sum * 0.8;
            }
            if (sum >= 1000 || sumnumber >= 50) {
                printf("���ڱ������ѽ���ѳ���1000�����������Ʒ�����ѳ���50!\n�����ܱ���7���Ż�!\n");
                sum = sum * 0.7;
            }
            printf("�����������Ʒ�ܼ�Ϊ=%d", sum);

        }
        else if(yesorno == 2){
            printf("���̵�ֻ�Թ˿Ϳ���");
        }
        else {
            printf("�������");
        }
    }*/

        //ѭ����� -- while,for,do...while
        //int day = 0;
        //int daycode = 1;
        //printf("��ʼ�������˰ɣ�\n");
        //while (day < 5)
        //{
        //    printf("��ʼ��%d\n", daycode);
        //    day++;
        //    daycode++;
        //}
        //if (day >= 5) {
        //    printf("������������Ϣһ�°�!\n");
        //}
        //else {
        //}

    //C�����к�����д�� -- ����Ҳ�Ǿ����ⲿ�������Ե�
        int Add(int x, int y){
        int z = 0;
        z = x + y;
        return z;
    }
    //��д��:
    /*
    int Add(int x, int y)
    {
    return (x + y);
    }    
    */
    //int main() {
    //    int n1 = 0;
    //    int n2 = 0;
    //    printf("������������͵�����\n");
    //    scanf("%d %d", &n1, &n2);
    //    int sum = Add(n1, n2);
    //    printf("%d\n", sum);
    //    return 0;
    //}
        //����
        // ������������ȵ�δ�����Ӧ�ĳ���ʱ��������ĳ���Ĭ�ϳ�ʼ����Ϊ0
        // C99��׼֮ǰ�������������ʱֻ��ʹ�ó����������ʽ������ʹ�ñ���
        // C99��׼֮��֧���˱䳤���飬��������ĳ���Ϊ��������������ָ����ʽ�������ǲ��ܳ�ʼ����
        // VS��C99��һЩ�﷨��֧�֣��޷�ʹ�ñ䳤����
    //int main (){
    //    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //    printf("%d\n", arr[3]);
    //    int number = 0;
    //    while (number < 10) {
    //        printf("%d ",arr[number]);
    //        number++;
    //        return 0;
    //    }



        //char name[] = "wjstmx";
        //int code = 0;
        //while (code<6)
        //{
        //    printf("%c",name[code]);
        //    code++;
        //}
        //return 0;

        //0 - ����0
        //'0' - �ַ�0 -- ASCII-48
        //'\0' - �ַ� -- ASCII-0
        //EOF - end of file �ļ��Ľ�����־ ֵ��-1
    //�ȴ�С����
    int compare(int x, int y) {
        if (x > y) {
            return x;
        }
        else {
            return y;
        }
    }
    //һ�����ڻ��ַ�Χ�ĺ���
    int function(int x) {
        if (x < 0) {
            x = 1;
        }
        else if(x == 0) {
            x = 0;
        }
        else if(x > 0) {
            x = -1;
        }
        return x;
    }
    //int main() {
    //    //int num1;
    //    //int num2;
    //    //scanf("%d %d",&num1,&num2);
    //    //printf("%d",compare(num1, num2));
    //    int num1;
    //    scanf("%d",&num1);
    //    printf("%d", function(num1));
    //    return 0;
    //}
    
    //������
    //���������� ---> [+ - * / %(ȡģ--����������)]
    // / �������߶�������ʱ��ִ�е����������������������һ����������ִ�и���������
    //��λ������ ---> [>> <<]
    // 
    //λ������ ---> [& ^ |]
    // 
    //��ֵ������ ---> [= += -= *= /= &= ^= |= >>= <<=]
    //��-- a = a + 3;��a += 3;һ��
    //��Ŀ������ -- ֻ��һ���������Ĳ�����
    /*
     !        �߼�������       //C�����У�0��ʾ�٣���0��ʾ��
     -        ��ֵ    //���int a = -10; ��ô-a = 10
     +        ��ֵ    //ûɶ��
     &        ȡ��ַ
     sizeof   �����������ͳ���(���ֽ�Ϊ��λ)
     ~        ��һ�����Ķ����ư�λȡ��
     --       ǰ�á�����--
               * ͬ ++ 
    * ++       ǰ�á�����++     
               ��1������++����ʹ�ã���+1
               * �� -- int a = 10; 
               * int b = a++;
               * ��ʹb���a��ֵ��a��+1
               * ��ʱ���b=10,a=11
               ��2��ǰ��++����++����ʹ��
               *�� -- int a = 10;
               * int b = ++a;
               * ��ʱa��+1��b�ٻ��a+1���ֵ
               * ��ʱ���a=11,b=11
     *        ��ӷ��ʲ�����(�����ò�����)
     (����)   ǿ������ת��
    */
    //��ϵ������
    /*
    >     
    >=
    <
    <=
    !=     ���ڲ��ԡ�����ȡ�
    ==     ���ڲ��ԡ���ȡ�
    */
    //�߼�������
    /*
    &&     �߼��� -- ����
    ||     �߼��� -- ����
    */
    //����������(��Ŀ������)
    /*
    exp1 ? exp2 : exp3;
  �� ��  ���exp2
  �� ��  ���exp3
    ��--
    int main() {
        int a = 10;
        int b = 20;
        int c = a > b ? a : b;  //��Ϊa�Ƿ����b��������b�����a����С��b�����b
        printf("%d",c);
        return 0;
    }
    */
    //���ű��ʽ -- ���Ÿ�����һ�����ʽ -- �ص㣺�����������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
    /*
    exp1��exp2��exp3��......expn;
    ��--
    int main() {
        int a = 10;
        int b = 20;
        int c = 0;
        int r = (a=a+2,b=b-a*3,c+b-a);
//���ν��д�ʱ   a=12  b=-16   c=-28
        printf("%d",r);
        return 0;
    }
    */
    //�±����á��������úͽṹ��Ա
    /*
    []
    ()
    .
    ->
    */
    //�߼���������ʵ������
    /*int main() {
        int true = 0;
        if (!true) {
            printf("ԭ����Ϊ��");
        }
        else {
            printf("ԭ����Ϊ��");
        }
    }*/

    //sizeof�������ĸ�����Ҫע��ĵ�
    //int main() {
    //    int num = 8;
    //    printf("%d",sizeof(num));
    //    printf("%d",sizeof(int));//printf("%d",sizeof int);����д������
    //    printf("%d",sizeof num);//����д��Ҳ����ȷ��
    //    int arr[100] = { 10 };
    //    printf("%d",sizeof(arr));//����ĳ���
    //    printf("%d",sizeof(arr[0]));//������Ԫ�صĳ���
    //    printf("%d",sizeof(arr)/sizeof(arr[0]));//������Ԫ�صĸ���
    //    return 0;
    //}

    //ǿ������ת���Ĳ���������Ӧ����
    //int main() {
    //    int num = (int)3.14;
    //    //����3.14�����ָ�������������Ĭ�����Ϊdouble����
    //    printf("%d", num);
    //    return 0;
    //}
    
    //�������ò���������Ӧ����
    //int Add(int x, int y)
    //{
    //    return (x + y);
    //}
    //int main() {
    //    int sum = add(3, 4);//����()Ϊ�������ò�������add��2��3��Ϊ()�Ĳ�����
    //}

    //�����ؼ���  -- �ؼ�����C���Ա������õģ������Լ�����
    /*
    auto  break  case  char  const  continue  default  do  double  else  enum  extern  float  for  goto  if  int  long 
    register  return  short  signed  sizeof  static  struct  switch  typedef  union  unsigned  void  volatile  while
    */

    //�ؼ��� -- typedef(���Ͷ��壬�����Ϊ����������)[�ɽ�һ�����ӵ����ͼ�Ϊһ���򵥵�����]
typedef struct Node {
    int data;
    struct Node* next;
    }Node;
    //typedef float db; //�˴���float����������Ϊdb
    //int main() {
    //    float num2 = 12312.1;
    //    db num = 1.32;
    //    printf("%f", num);
    //    struct Node n;
    //    Node n2;
    //    return 0;
    //}

    /*
    *C�����б���Ĭ���������洢����
    *ջ��(��Ҫ�洢�ֲ��������������βΣ������ķ���ֵ(ÿһ�κ����ĵ��ö�����ջ����ռ�ÿռ�)��)
    *����
    *��̬��(��������static���κ󣬱�����Ϊ��̬�����������ھ�̬��)
    */
    //�ؼ��� -- static(��̬��) -- �����÷�
    //1.���ξֲ����� -- ���ξֲ�����ʱ���ֲ��������������򣬲�����
    //�����ϣ�static���ξֲ�������ʱ��ı��˱����Ĵ洢λ�ã�Ӱ���˱�������������(���ڱ������������ڽ�����54~57��)
    //2.����ȫ�ֱ��� -- ����ȫ�ֱ���ʱ�����ȫ�ֱ������ⲿ�������Ծͱ�����ڲ��������ԡ�����Դ�ļ��Ͳ�����ʹ���������
    //3.���κ��� -- ���κ���ʱ������������ⲿ�������Ըı�Ϊ�ڲ��������ԡ�����Դ�ļ��Ͳ�����ʹ���������
    //satic ʹ��������

int test(){
    static int a = 0; 
    a++;
        printf("%d ",a);
        return 0;
}
//extern -- �����ⲿ���� -- ʹ��������

//extern int ts; -- ��ش���תtest.c
//int main() {
//    int number = 10;
//    while (number != 0) {
//        test();
//        printf("%d ", ts);
//        number--;
//    }
//    return 0;
//}

//extern int min(int x, int y); //-- ��ش���תtest.c
//int main() {
//    int a, b;
//    scanf("%d %d",&a,&b);
//    printf("%d",min(a,b));
//    return 0;
//}

//register -- �Ĵ��� -- һ�ָ��ٴ������ݵĴ���λ��(����Ϊ��1�Ĵ��� 2���ٻ��� 3�ڴ� 4Ӳ��)
//int main() {
//    register int number = 100;//����100����ڼĴ�����
//    return 0;
//}

//#define�����
//#define aplusb(x,y) ((x)+(y))
////aplusb=����  x,y=��Ĳ���(�����������͵�) ((x)+(y))=���� 
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int c = aplusb(a, b);
//    printf("%d",c);
//    return 0;
//}

//ָ��  
//&--ȡ��ַ������
//�ڴ�Ữ��Ϊһ�������ڴ浥Ԫ(1byte) -- ÿ���ڴ浥Ԫ����һ�����
//�ڴ浥Ԫ ���-->��ַ-->ָ��(��ַҲ����Ϊָ��)
//int main() {
//    int a = 100;
//    &a;//��F10��ѡ����Ӵ���ɲ�a��ַ
//    printf("%p\n",&a);
//    int* p = &a;
//    //int˵��pָ��Ķ�����int���͵�
//    //*��˵��p��ָ�������
//    //p����ָ�����(��ŵ�ַ�ı���)
//    printf("%p\n",p);
//    *p = 200;//ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���    �˴���*�ǽ����ò�����
//    printf("%zu ", sizeof(int*));
//    printf("%zu ", sizeof(double*));
//    printf("%zu ", sizeof(char*));
//    printf("%zu ", sizeof(float*));
//    printf("%zu ", sizeof(short*));
//    //������ʲô���͵�ָ�룬����������ָ�����
//    //ָ������Ĵ�Сȡ����һ����ַ���ʱ��Ҫ���Ŀռ�
//    //32λ�����ϵĵ�ַ��32bitλ - 4byte - ���Ըû�����ָ������Ĵ�СΪ4�ֽ�
//    //64λ�����ϵĵ�ַ��64bitλ - 8byte - ���Ըû�����ָ������Ĵ�СΪ8�ֽ�
//    return 0;
//}

//�ṹ�� -- �ǽ���һ�����������һ�������
//struct information { //�˴���һ���˵����֣����䣬���գ��Ա𣬴���Ϊһ���ṹ��information
//    char name[20];
//    int age;
//    int birthday;
//    char sex[20];
//    double money;
//};
//void print(struct information* mi) {
//    printf("%s %d�� %d %s %.3lfԪ\n",mi->name,mi->age,mi->birthday,mi->sex,mi->money);
//    //"->"������(���Լ����ֵģ�����) �ṹ��ָ�����->��Ա��
//    printf("%s %d�� %d %s %.3lfԪ\n", (*mi).name, (*mi).age,(*mi).birthday,(*mi).sex, (*mi).money);
//}
//int main() {
//    struct information my = {"huhanqing",18,20030309,"male",12317842.431 }; //�˴����ṹ��information�и�����һһ��ֵ�������ýṹ��Ϊmy
//    struct information hy = { "huangqiuhua",3,20050630,"female",-34253425.312 };
//    printf("%s %d�� %d %s %.3lfԪ\n",my.name,my.age,my.birthday,my.sex,my.money); //�˴����ṹ��my����Ϣ���
//    //�ṹ�����������еĳ�Աʹ��'.'�� --> (�ṹ�����).��Ա��
//    print(&my);
//    return 0;
//}

//������䣺
//�����ж���� -- if��switch
//ѭ��ִ����� -- while��do while��for
//while��do while������continue������¿�ʼ����ѭ��(����continue����Ĵ������½���while�Ľ����ж�)
//ת����� -- return��continue��break��goto

//switch���
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    switch (a) //switch���ʽ()�б���Ϊ����
//    {
//    case 3:
//    case 2:
//    case 1:
//        printf("����1\n");
//        break;
//    case 4:
//        printf("����2\n");
//        break;
//    default: //��case���޷��ҵ�������ֵƥ�����ʱ������default���
//        printf("�������");
//        break;
//    }
//    return 0;
//}

//forѭ��
//int main() {
//    for (int a = 0; a < 10; a++) {
//        printf("%d����˧��\n",a);
//    }
//    return 0;
//}

//fouѭ������
//forѭ�����ж�����ʡ�ԣ���ζ���жϻ�����
//int main() {
//    for (;;) {
//        printf("NB!\n");
//        printf("666\n");
//    }
//    return 0;
//}
//forѭ��ͬʱ�ö��ֱ�������
//int main() {
//    for (int x = 10, y = 0; x > 0 && y < 10; x--, y++) {
//        printf("˧��\n");
//    }
//    return 0;
//}

//do whileѭ�� (��ִ�У����ж���ѭ��)
//int main() {
//    int a = 1;
//    do {
//        if (a == 5) {
//            break;
//        }
//        printf("%d˧!\n",a);
//        a++;
//    } while (a <= 10);
//    return 0;
//}

#include <stdlib.h> //rand()��������Ҫ��ͷ�ļ�
//rand()�������������������
//������С��Ϸ
//int main() {
//    int enternum = 0;
//    int randnum = rand() % 100+1; //�˴�������һ��1~100�������
//    int time = 0;
//    char ctn = 'y';
//    for (; ctn == 'y';) {
//        printf("��ӭ���������С��Ϸ��\n�����ֽ�����1~100֮��,������λ�������������֣�\n");
//        while (enternum != randnum && time < 5) {
//            printf("������һ��1��100֮������ݣ�\n");
//            scanf("%d", &enternum);
//            if (enternum > randnum) {
//                printf("��µ����ִ��ˣ�\n");
//            }
//            else if (enternum < randnum) {
//                printf("��µ�����С�ˣ�\n");
//            }
//            time++;
//        }
//        if (time == 5) {
//            printf("�ܿ�ϧ��������ֵĴ��������ˣ�\n");
//        }
//        else {
//            printf("��ϲ��¶���!");
//        }
//    }
//    return 0;
//}

//int main() {
//    //�������뻺���� -- scanf��getchar�������ؼ��ֵĵ��ò���ͨ������ֱ����������ɼ��� -> ������ ->�ؼ���
//    //getchar();//�ùؼ��ֿ���������ȡһ���ַ���һ���ַ�����
//    /*����getchar���ܳ��ֵ����⣬��Ϊscanf��getchar����ͨ����������ȡ��Ӧ�����ݣ�����scanfȡ����Ӧ����ʱ������һ���س�����\n������ʱ
//    ���ַ����ܻᱻgetchar�ӻ�������ȡ���������޷�������getchar��ֵ�������ֹgetchar��ȡ��\n��������Ŀ��getchar�Ϸ���дһ��getchar����
//    ��ȡ��\n�����ᵼ�¸ô��������ַ���ֹһ������ͨ��ѭ���ṹ���������ַ���ȡ��*/
//    //����
//    int password[20] = { 0 };
//    printf("������������룺");
//    scanf("%s", &password);
//    int ch = 0;
//    while ((ch=getchar())!='\n') {
//        ;
//    }
//    printf("����˧����(Y/N)\n");
//    if (getchar() == 'Y') {
//        printf("YES!");
//    }
//    else {
//        printf("NO!");
//    }
//    //putchar();//�ùؼ��ֿ����������һ���ַ�
//    int word = 0; //getchar()�ķ���ֵΪASCII��ֵ��EOFΪint��������
//    while ((word = getchar()) != EOF) {
//        putchar(word);
//    }
//    return 0;
//}

//ASCII��ת����
//int main() {
//    int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
//    int i = sizeof(arr)/sizeof(arr[0]);
//    int b = 0;
//    while (i != b) {
//        printf("%c", arr[b]);
//        b++;
//    }
//    return 0;
//}

//���printf�ķ���ֵ
//int main() {
//    int a = printf("Hello World!"); //printf�з���ֵΪint����
//    printf("%d", a);
//    return 0;
//}

//���"\n"��""""
//int main() {
//    printf("printf(\"Hello World\\n\"); \n");
//    printf("cout<<\"Hello world!\"<<endl;");
//    return 0;
//}

//�����ֵ
//int main() {
//    int arr[10];
//    int a = 0;
//    int i = 0;
//    while (10 != i) {
//        scanf("%d",&arr[i]);
//        i++;
//    }
//    while (9 != a) {
//        arr[a+1] = arr[a] > arr[a + 1] ? arr[a] : arr[a + 1];
//        a++;
//    }
//    printf("%d",arr[a]);
//    return 0;
//}

//�����ֵ
//int main() {
//    int a, b, c, d, e, f;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    e = a > b ? a : b;
//    f = c > d ? c : d;
//    printf("%d", e > f ? e : f);
//}

//�����ֵ
//int main() {
//    int max = 0;
//    int enternum = 0;
//    int i = 0;
//    scanf("%d ", &max);
//    while (9 != i) {
//        scanf("%d ",&enternum);
//        if (max<enternum) {
//            max = enternum;
//        }
//        i++;
//    }
//    printf("%d", max);
//    return 0;
//}

//�����ֵ
//int main() {
//    float x = 0.0f;
//    scanf("%f", &x);
//    printf("%.2f", (x = x * x * x,x = x * 4, x = x * 3.14,x = x / 3));
//    return 0;
//}

//����BMI
//int main() {
//    double weight = 0.0;
//    double height = 0.0;
//    scanf("%lf %lf",&weight ,&height);
//    height = height * 0.01;
//    printf("%.2lf",(weight/(height*height)));
//    return 0;
//}

//�����ֵ(forѭ����)
//int main() {
//    int max = 0;
//    int enternum = 0;
//    scanf("%d ", &max);
//    for (int a = 0; a <= 9;a++) {
//        scanf("%d ",&enternum);
//        if (max<enternum) {
//            max = enternum;
//        }
//    }
//    printf("%d", max);
//    return 0;
//}

//����n�Ľ׳���׳˺�
//int main() {
//    int num = 0;
//    int y = 1;
//    int sum = 0;
//    printf("����������Ҫ����Ľ׳ˣ�\n");
//    scanf("%d",&num);
//    for (int x = 1; x <= num;x++) {
//        y = y * x;
//        sum += y;
//    }
//    printf("%d�Ľ׳�Ϊ��%d,1~%d�׳˺�Ϊ��%d", num,y,num,sum);
//        return 0;
//}

//��һ�����������в��Ҿ����ĳ����n
//int main() {
//    int arr[50];
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int num = 0;
//    int a = 0;
//    for (int i = 0; i < sz; i++) {
//        arr[i] = i + 1;
//    }
//    printf("����������Ҫ���ҵ����֣�\n");
//    scanf("%d",&num);
//    for (a = 0; a < 50; a++) {
//        if (arr[a] == num) {
//            printf("�ҵ��ˣ��±�Ϊ��%d", a);
//            break;
//        }
//    }
//    if (a == sz) {
//        printf("û�ҵ���");
//    }
//    return 0;
//}

////���ö��ַ������������в��Ҿ����ĳ����n(�������Ǹ�����Ч)
//int main() {
//    int arr[100];
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int num = 0;
//    int a = 0;
//    int b = sz - 1;
//    printf("������������ҵ����֣�\n");
//    scanf("%d",&num);
//    for (int i = 0; i < sz; i++) {
//        arr[i] = i + 1;
//    }
//    for (;b>=a;) {
//        //int m = (a+b) / 2;
//        int m = a + (a + b) / 2;
//        m = (a + b) / 2;
//        if(arr[m] == num) {
//            printf("�ҵ��ˣ��±�Ϊ��%d\n",m);
//            break;
//        }
//        else if (arr[m] < num) {
//            a = m + 1;
//        }
//        else if (arr[m] > num) {
//            b = m;
//        }
//    }
//    if (b < a) {
//        printf("û�ҵ�\n");
//    }
//    return 0;
//}

//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
// int main() {
//    char arr[] = {"�q�ɨr�����ᣩ�q�ɨr"};
//    char arr1[] = {"#####################"};
//    int sz = strlen(arr);    
//    //int sz = sizeof(arr) / sizeof(arr[0]); //�÷���������������ַ��ĸ�������'/0'
//    int left = 0;
//    int right = sz;
//    for (;left<=right;right--,left++) {
//        printf("%s", arr1);
//        //for (int a = 0; a < sz; a++) {
//        //    printf("%c", arr1[a]);
//        //}
//        Sleep(1000);//һ���ӳ�����Ĺؼ��֣��˴��ӳ���1000ms
//        printf("\n");
//        system("cls");//stdlib.hͷ�ļ��е�һ���⺯�����˴�����Ϊ�����Ļ
//        arr1[left] = arr[left];
//        arr1[right - 1] = arr[right - 1];
//    }
//    printf("%s", arr1);
//    return 0;
//}

//int main() {
//    float x, y, sum = 0;
//    scanf("%f %f",&x,&y);
//    sum = 6 + (4 + x) * (4 + x) / (2 + y);
//    printf("%.2f", sum);
//}

//#include <math.h>
//int main() {
//    float a, b, x, y, sum;
//    scanf("%f %f %f %f", &a, &b, &x, &y);
//    sum = sin(a + b) * sin(a + b) / 4 * x * x * y;
//    printf("%.2f",sum);
//    return 0;
//}

//#include <string.h>
//int main() {
//    char tpassword[20] = { 0 };
//    char password[20] = { 0 };
//    printf("��ע��һ�����룺\n");
//    scanf("%s",&tpassword);
//    printf("���¼��\n");
//    scanf("%s",&password);
//    for (int a = 2; a >=0; a--) {
//        if (strcmp(password,tpassword) == 0) {     //�Ƚ������ַ����Ƿ���ȣ�����ʹ�á�==����Ҫʹ��һ���⺯��strcmpͷ�ļ�Ϊstring.h
//            printf("��¼�ɹ�\n");                  //���ַ���1<�ַ���2ʱ�����ظ���;>ʱ��������;=ʱ����0
//            break;
//        }
//        else if (a == 0) {
//            printf("��û�л�����!");
//        }
//        else {
//            printf("��������������������룬������%d�λ���\n",a);
//            scanf("%s",&password);
//        }
//    }
//    return 0;
//}

//���鴫�ε�ʱ�򴫵���������Ԫ�صĵ�ַ

//������С��Ϸ���װ�
//#include <time.h>
//void menu() {
//    printf("*****************************************\n");
//    printf("***************������С��Ϸ**************\n");
//    printf("********���ǽ�����һ��1~100������********\n");
//    printf("*****************��ӭ����****************\n");
//    printf("**************��ʼ(1)/����(0)************\n");
//    printf("*****************************************\n");
//}
//void game() {
//    int num = 0;
//    //rand()����Ĭ�ϵ����ֵΪ32767
//    int randnum = rand () % 100 +1;
//    for (;;) {
//        scanf("%d", &num);
//        if (num == randnum) {
//            printf("��ϲ��¶��ˣ�\n");
//            break;
//        }
//        else if (num < randnum) {
//            printf("��µ�����С��!\n");
//        }
//        else if (num > randnum) {
//            printf("��µ����ִ���!\n");
//        }
//    }
//}
//int main() {
//    //ʱ��� //time�ؼ��ʿ��Ի�ȡ��ǰ��ʱ���������ֵ����Ϊtime_t
//    srand((unsigned)time(NULL));//srand()��������rand�����ĳ�ʼֵ
//    //NULLΪָ�������ֵ��Ϊ0
//    int play = 0;
//    do {
//        menu();
//        scanf("%d", &play);
//        switch(play){
//        case 1:
//            printf("��ʼ��Ϸ\n������һ������:\n");
//            game();
//            break;
//        case 0:
//            printf("�˳���Ϸ\n");
//            break;
//        default:
//            printf("�������,������ѡ��\n");
//            break;
//        }
//    } while (play);
//    return 0;
//}

//goto��� ���ûᵼ�³������е�˳��̫�� ���Ҳ��ܿ纯�� ���Գ���������Ƕ��ѭ��
//int main() {
//    again:
//    printf("����˧��!\n");
//    goto again;
//    return 0;
//}

//�ػ�����
//#include <windows.h>
//int main() {
//    char arr[50];
//    char arr1[50] = { "�������������Ǵ�˧��!" };
//    system("shutdown -s -t 60");
//    again:
//    printf("��ע��,��ĵ��Խ���60s��ػ������룺���������������Ǵ�˧��!��ȡ���ػ�!\n");
//    scanf("%s",&arr);
//    if (strcmp(arr, arr1) == 0) {
//        system("shutdown -a");
//    }
//    else {
//        printf("��ĵ��Խ���60s��ػ����ݰݣ�");
//        goto again;
//    }
//    return 0;
//}

//shutdown - a��ȡ���ػ�
//
//shutdown - s �ػ�
//
//shutdown - f��ǿ�йر�Ӧ�ó���
//
//shutdown - m \\�������������Զ�̼����
//
//shutdown - i����ʾ��Զ�̹ػ���ͼ���û����棬��������Shutdown�ĵ�һ������
//
//shutdown - l��ע����ǰ�û�
//
//shutdown - r���ػ�������
//
//shutdown - s - t ʱ�䡡���ùػ�����ʱ
//
//shutdown - r - t ʱ�� ����������������ʱ
//
//shutdown - h ����

//strcpy -- �����ַ���������Ҫͷ�ļ�
//#include <string.h>
//int main() {
//    char arr[50] = { "������������˧��˧�磡" };
//    char arr2[50];
//    strcpy(arr2, arr);
//    printf("%s\n%s", arr, arr2);
//    return 0;
//}

//memset -- ��ָ����һ������ǰ�����θ��ַ��滻Ϊ����ַ���Ҳ��Ҫͷ�ļ�
//#include <string.h>
//int main() {
//    char arr[] = { "�ѵ����Ǻ�����" };
//    memset(arr, ' ', 4);
//    printf("%s", arr);
//    return 0;
//}

//�Զ��庯��(��չ����) -- �Զ��庯���Ϳ⺯��һ�����к�����������ֵ�ͺ�������
// //��ֵ����
//int minnum(int x, int y) {
//    return (x > y ? y : x);
//    }
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d\n",minnum(a, b));
//    return 0;
//}
// //��ַ���ã�
//void swap(int *px, int *py) {
//    //x��yΪ��ʽ����
//    int z = *px;
//    *px = *py;
//    *py = z;
//}
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��
//Ҫ��ʵ�ֽ���������ָ��Ե�ַ���е���
//int main() {
//    int a = 0;
//    int b = 0;
//    //a��bΪʵ��
//    scanf("%d %d",&a,&b);
//    printf("%d %d\n", a, b);
//    swap(&a, &b);
//    printf("%d %d\n", a, b);
//    return 0;
//}

//�����Ĳ��� -- ʵ�ʲ���(ʵ��)/��ʽ����(�β�)
/*
ʵ�ʲ�����
��ʵ����������ֵ��ʵ�Ρ�
ʵ�ο����Ǻ��������������ʽ��������
����ʵ���Ǻ������͵������ڽ��к�������ʱ�����Ƕ���Ҫ��ȷ����ֵ���Ա㴫�ݸ��β�
*/
/*
��ʽ������
��ʽ������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ����(�����ڴ浥Ԫ)�����Խ���ʽ������
��ʽ�����������������֮����Զ������ˡ������ʽ����ֻ�ں�������Ч��
*/
/*
��ַ���ã�
��ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú�����ʽ
���ִ��η�ʽ�����ú����ͺ����ⲿ�ı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���
*/
/*
��ֵ���ã�
�������βκ�ʵ��ռ�ò�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
*/

//�ж�һ�����Ƿ�������
//#include <math.h>
//void judge(int x) {
//    int temp = 1;
//    for (int a = 2; a<=sqrt(x); a++) {
//        //sqrt()Ϊ��ƽ���ؼ���
//        if (x % a == 0) {
//            temp = 0;
//            break;
//        }
//    }
//    if (temp == 1) {
//        printf("������Ϊ������");
//    }
//    else {
//        printf("�����ֲ�������!");
//    }
//}
//int main() {
//    int num = 0;
//    scanf("%d", &num);
//    judge(num);
//    return 0;
//}

//�ж��Ƿ�������
//int judgeyear(int x) {
//    if (((x % 4 == 0) && (x % 100 != 0)) || (x%400 == 0)) {
//        return 1;
//    }
//    else {
//        return 0;
//    }
//}
//int main() {
//    int year = 0;
//    scanf("%d",&year);
//    if (judgeyear(year)) {
//        printf("����Ϊ����!");
//    }
//    else {
//        printf("���겻������!");
//    }
//    return 0;
//}

//�������� -- bool -- ��Ҫͷ�ļ�stdbool
//������ʾ��ٵı���
//#include <stdbool.h>
//bool judgeyear(int x) {
//    if (((x % 4 == 0) && (x % 100 != 0)) || (x%400 == 0)) {
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//int main() {
//    int year = 0;
//    scanf("%d",&year);
//    if (judgeyear(year)) {
//        printf("����Ϊ����!");
//    }
//    else {
//        printf("���겻������!");
//    }
//    return 0;
//}

//ÿ�ε�������1
//int add(int x, int y,int* p) {
//    (*p)++;
//    return(x + y);
//}
//int main() {
//    int num = 0;
//    int a,b;
//    for (int c = 0; c < 10; c++) {
//        scanf("%d %d", &a, &b);
//        int sum = add(a, b,&num);
//        printf("%d %d\n", sum, num);
//    }
//    return 0;
//}

//Ƕ�׵��� -- ��������Ƕ�׵��ã�������Ƕ�׶���
//void name() {
//    printf("������!\n");
//}
//void print() {
//    for (int a = 0; a < 10; a++) {
//        name();
//    }
//}
//int main() {
//    print();
//    return 0;
//}

//��ʽ����
//int main() {
//    char arr[20] = {"adsadsadasd"};
//    printf("%d\n", strlen(arr));
//    printf("%d", printf("%d", printf("%d", 43)));
//    //printf();�ķ���ֵΪ��ӡ���ַ�����
//    return 0;
//}

//�����Ķ��������
//���������� -- ���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ���治���ں��������������
//����������һ������ں�����ʹ��ǰ��Ҫ������������ʹ��
//����������һ��Ҫ����ͷ�ļ���
//#include "plus.h"
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d",plus(a, b));
//    return 0;
//}

//�����ݹ� -- ����Ϊ��ĳ��÷���
//�ݹ��������Ҫ���� -- 1�����ڱ�Ҫ�����������������Ҫ����ʱ���ݹ���ֹ
//2��ÿ�εݹ����֮��Խ��Խ�ӽ���������
//void print(unsigned int x) {
//    if (x > 9) {
//        print(x / 10);
//    }
//    printf("%d ", x % 10);
//}
//int main() {
//    unsigned int num = 0;
//    //int num1 = 0;
//    //int num2 = 0;
//    scanf("%u",&num);
//    print(num);
//    //for (int a = 10;num != 0;num = num2) {
//    //    num1 = num % a;
//    //    printf("%d\n", num1);
//    //    num2 = num / a;
//    //}
//    return 0;
//}

//��������ʱ���������ַ������� -- �ݹ麯��
//int my_strlen(char *str) {
//    if (*str != '\0') {
//        return 1+my_strlen(str+1);
//    }else{
//        return 0;
//    }
//}
//int main() {
//    char arr[] = { "wjstmx" };
//    int a = my_strlen(arr); 
//    printf("%d", a);
//    return 0;
//}

//��n�Ľ׳�
//int factorial(int x) {
//    if (x!=0) {
//         x *= factorial(x - 1);
//        return x;
//    }
//}
//int main() {
//    int a = 0;
//    scanf("%d",&a);
//    printf("ret=%d\n", factorial(a));
//    return 0;
//}

//���n��쳲������� -- �õݹ鲻�ã����������
//int Fibonacci(int a) {
//    if (a <= 2) {
//        return 1;
//    }
//    else {
//        return Fibonacci(a-1)+Fibonacci(a-2);
//    }
//}
//int main() {
//    int a = 0;
//    scanf("%d",&a);
//    printf("%d", Fibonacci(a));
//    return 0;
//}

//���õݹ��д�� -- ��������������õ�д��
//int main() {
//    int a = 0;
//    int x = 1;
//    int y = 1;
//    int z = 0;
//    scanf("%d",&a);
//    if (a <= 2) {
//        printf("%d",1);
//    }
//    else {
//        for (int m = 2;m<a;m++) {
//            z = y + x;
//            x = y;
//            y = z;
//        }
//        printf("%d", z);
//    }
//    return 0;
//}

//�����������������Լ�� -- �Լ���д��
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d", &a, &b);
//    for (int n = 1; n < a && n < b;n++) {
//        if (a%n==0 && b%n==0) {
//            c = n;
//        }
//    }
//    if (c != 0) {
//        printf("%d\n", c);
//    }
//    else {
//        printf("û�����Լ��!\n");
//    }
//    return 0;
//}
//շת�����
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d", &a, &b);
//    while (a%b) {
//        c = a % b;
//        a = b;
//        b = c;
//    }
//    printf("%d", c);
//    return 0;
//}

//���� 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 ....... + 1/99 - 1/100 ��ֵ����ӡ�����
//int main() {
//    float sum = 0;
//    float flag = 1;
//    //�е�ѡ��ṹʵ�ֵĽ��������һ���������ܽ��
//    for (int a = 1;a<=100;a++) {
//        sum = sum + flag * (1.0 / a);
//        flag = -flag;
//        //if (a%2==0) {
//        //    sum = sum - (1.0 / a);
//        //}
//        //else if (a%2==1) {
//        //    sum = sum + (1.0 / a);
//        //}
//    }
//    printf("%f", sum);
//    return 0;
//}

//һά����Ĵ����ͳ�ʼ��
//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//��ά����Ĵ����ͳ�ʼ��
//��ά���鴴��ʱ����������ʡ�ԣ�����������ʡ��
//int main() {
//    int arr[5][5] = {{1,2,3,4,5},{6,7,8,9,1},{4,5,9,1,2},{5,7,3,9,1},{9,7,1,3,4}};//��������
//    //int arr3[3][3][3] = { {1,2,3},{4,5,6} ,{7,8,9} };
//    int sz = sizeof(arr[0])/sizeof(arr[0][0]);
//    printf("%d", sz);
//    char arr2[10][10];//ʮ��ʮ��
//    //for (int a = 0; a < 3; a++) {
//    //    for (int b = 0; b < 3; b++) {
//    //        for (int c = 0; c < 3; c++) {
//    //            printf("%d ", arr3[a][b][c]);
//    //        }
//    //    }
//    //    printf("%\n");
//    //}
//    for (int a = 0; a < 5; a++) {
//        for (int b = 0; b < 5; b++) {
//            printf("%d ", arr[a][b]);
//        }
//        printf("%\n");
//    }
//    /*
//    1 2 3 4 5
//    6 7 8 9 1
//    4 5 9 1 2
//    5 7 3 9 1 
//    9 7 1 3 4
//    */
//    return 0;
//}

//����Խ��
//�����±����з�Χ���Ƶ�
//C���Ա����ǲ��������±��Խ���飬������Ҳ��һ������
//���Ǳ�����������������ζ�ų��������ȷ�ģ����Գ���Աд����ʱ������Լ���Խ��ļ�顣

//ð��������㷨
//���鴫��������д�� -- �����ָ����ʽ
//void bubble_sort(int arr[],int sz) {
//    for (int b = 0; b < sz-1; b++) {
//        for (int a = 0; a < sz-1-b; a++) {
//            if (arr[a] > arr[a + 1]) {
//                arr[a] = arr[a] + arr[a + 1];
//                arr[a + 1] = arr[a] - arr[a + 1];
//                arr[a] = arr[a] - arr[a + 1];
//            }
//        }
//    }
//}
//int main() {
//    int arr[100] = { 0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (int a = 100; a > 0;a--) {
//        arr[a - 1] = a;
//    }
//    bubble_sort(arr,sz);
//        for (int c = 0; c < sz; c++) {
//        printf("%d ", arr[c]);
//    }
//    return 0;
//}

//��������ʲô
//int main() {
//    int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//    printf("%p\n", arr);
//    printf("%p\n", arr+1);
//    printf("-----------------------------\n");
//    printf("%p\n", &arr);
//    printf("%p\n", &arr+1);//�˴������鳤��Ϊ40����1���൱�ڼ���һ������ĳ���
//    printf("-----------------------------\n");
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[0]+1);
//    //������ȷʵ�ܱ�ʾ��Ԫ�ص�ַ�������������⣺
//    //1.sizeof(������),�˴�����������������������飬���������������Ĵ�С����λ���ֽ�
//    //2.&�������������������Ҳ��ʾ�������飬ȡ��������������ĵ�ַ
//    int sz = sizeof(arr);
//    printf("%d", sz);
//    return 0;
//}

//��ά����������������
//int main() {
//    int arr[5][6];
//    int sz = sizeof(arr);
//    printf("%d",sz);
//    arr;//��ά�����������Ҳ��ʾ��Ԫ�صĵ�ַ(һ�еĵ�ַ)
//    return 0;
//}
// 
//int main() {
//    char c1 = getchar();
//    getchar();
//    char c2 = getchar();
//    printf("%c,%c\n%d,%d", c1, c2, c1, c2);
//    return 0;
//}
//
//int main() {
//    int num = 0;
//    scanf("%d", &num);
//    printf("ǧλ=%d\n��λ=%d\nʮλ=%d\n��λ=%d\n",num/1000,num%1000/100,num%100/10,num%10);
//    return 0;
//}
//
//int main() {
//    char c1 = getchar();
//    getchar();
//    char c2 = getchar();
//    putchar(c1);
//    printf("%c",c2);
//    return 0;
//}
//
//int main() {
//    printf("%17c\n", 'A');
//    printf("%13c%8c\n", 'B','C');
//    printf("%9c%16c\n", 'D', 'E');
//    printf("%5c%24c\n", 'F', 'G');
//    printf("%c%4c%4c%4c%4c%4c%4c%4c%4c\n", 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P');
//    return 0;
//}


//����������ʱ��ȥѧ���

//������

















//#include <string.h>
//int main() {
//    char arr[4][4] = { {"this"},{"wats"},{"oahg"} ,{"fgdt"}};
//    for (int a = 0; a < 4;a++) {
//        for (int b = 0; b < 4;b++) {
//            printf("%c ", arr[a][b]);
//            if (!strcmp(arr[a],"this")) {
//                printf("find:this\n");
//            }else if (!strcmp(arr[b], "this")) {
//                printf("find:this\n");
//            }else if (!strcmp(arr[a], "this")) {
//                printf("find:this\n");
//            }else if (!strcmp(arr[a], "this")) {
//                printf("find:this\n");
//            }
//        }
//        printf("\n");
//    }
//    }

//�ݹ���ֲ���
//int main() {
//    int num = 0;
//    int arr[100] = { 0 };
//    for (int a = 0; a < 100; a++) {
//        arr[a] = a + 1;
//    }
//    int right = arr[99];
//    int left = arr[0];
//    scanf("%d",&num);
//    printf("%d",recsearch(num,left,right));
//    return 0;
//}
//int recsearch(int num,int left,int right) {
//    int mid = (left + right) / 2;
//    if (right<left) {
//        return -1;
//    }
//    else if (num > mid) {
//        return(recsearch(num, mid+1, right));
//    }
//    else if (num < mid) {
//        return(recsearch(num, left, mid));
//    }
//    else {
//        return mid - 1;
//    }
//}

//�������
//int main() {
//    int arr[][30] = { 0 };
//    int num = 0;
//    scanf("%d", &num);
//    for (int i = 0; i < num; i++) {
//        for (int j = num;j + 1>i; j--) {
//            printf("   ");
//        }
//        for (int j = 0; j < i+1; j++) {
//            arr[i][j] = 1;
//            if (j>=1&&j<=i-1) {
//                arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
//            }
//            printf("%6d",arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}












//��ŵ�����⡢����������
//int forg() {
//
//}
//int main() {
//    
//
//
//    return 0;
//}










