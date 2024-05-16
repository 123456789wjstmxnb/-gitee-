#define _CRT_SECURE_NO_WARNINGS
    //std = 标准
    //i = input
    //o = 输出(output)
#include <math.h>
#include <stdio.h>

    //main = 程序的入口(C语言规定)
    //main函数有且只有一个

//int main() {
    //printf = 库函数（用于打印数据）
    //scanf = 输入函数
    //printf("我的名字是胡函青\n");

//} 
    //char = 字符数据 1字节
    //C语言中没有字符串类型
    //short = 短整 2字节
    //int = 整 4字节
    //long = 长整 4字节
    //long long = 更长整 8字节
    //float = 单精度浮点 4字节
    //double = 双精度浮点 8字节

    /*printf(" %zu\n",sizeof(int));
    printf(" %zu\n",sizeof(char));
    printf(" %zu\n",sizeof(short));
    printf(" %zu\n",sizeof(double));
    printf(" %zu\n",sizeof(float));
    printf(" %zu\n",sizeof(long));
    printf(" %zu\n",sizeof(long long));
    */

    //变量 -- 局部变量，全局变量
    //局部变量 - main函数内 
    //全局变量 - main函数外 - 全局变量是具有外部链接属性的
    //局部与全局变量共存时，局部>全局
    
    //double price = 2.5;
    //int number = 1;
    //char name = "啊吧啊吧";
    //printf("hard working\n");
    //printf("number=%d\n",number); 
    //printf("name=%s\n",name);
    //printf("price=%e\n",price,"元");

    //int num1 = 0;
    //int num2 = 0;
    //printf("请输入数字=");
    //scanf("%d %d", &num1, &num2);
    //int sum = num1 + num2;
    //printf("sum=%d\n", sum);

    //变量的作用域 -- {}内部的局部变量可供内部调用 -- 全局变量不受影响
    //变量的生命周期：
    //局部变量的生命周期 -- 进入作用域生命周期开始，离开作用域生命周期结束
    //全局变量的生命周期 -- 整个程序的生命周期

    //声明来自外部的符号 -- extern -- 例 -- extern int number;

    //(1)字面常量
    //10;
    //'w';
    //31.312;
    //"apple";
    //(2)const修饰的常变量
    const int age = 18;//在C语言中，const修饰的变量，本质是变量，但无法被修改，有常量的属性
    //define(预处理指令，不是关键字)定义的标识符常量
    //#define EXP 100
    //#define LVUP "升级啦！"
    //printf("获得经验=%d\n",EXP);
    //printf("%s\n", LVUP);
    //枚举常量
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
    //printf("请输入你想学习的课程");
    //scanf("%d", &S);
    //printf("你以选择%d", S);
    //return 0;
    //}
    //字符串的特殊存储方法 -- 变成变量的方法
    //字符串的结束标志是一个\0的转义字符
    //int main(){
    //char name[] = "wjstmx";
    //printf("%c", name[2]);
    //}
    //求字符串长度的一个函数 string length   头文件 -- string.h
    //strlen();
    //当strlen函数求一个未给定长度的数组时，求出来的长度为随机值

    //C语言转换说明符
    /* %d - 打印整形(当字符使用此项输出时可以打印对应的ASCII码--详情下方代码) 输入时%xd代表只能输入x个整形 输出时%0xd代表可以输出x
    个数字，若不够，就在前面补0 */
    //     int main() {
    //char word;
    //scanf("%c", word);
    //printf("%d", word);
    //return 0;
    //}
    //%c - 打印字符
    //%s - 打印字符串
    //%f - 打印float类型的数据 -- 3.1415926
    //“.3f”是保留三位小数，如果保留两位小数就是“.2f”
    //%lf - 打印double类型的数据
    //%zu - 打印sizeof的返回值
    //%u - 打印无符号整形
    //%p - 指针
    //%% - "%"
    //%m
    
    //转义字符 ：
    /* \n -- 换行
       \' -- 打印’
       \" -- 打印"
       \\ -- 打印\
       \a -- 警告字符，让电脑发出蜂鸣的声音
       \b -- 退格
       \f -- 换页
       \r -- 回车
       \t -- 打印一个table键的效果 -- 水平制表
       \v -- 垂直制表
       \ddd -- ddd表示1~3个八进制的数字 -- 详细查ASCII表
       \xdd -- dd表示2个十六进制的数字
       \0 -- 空字符
    */
  /*int main() {
        int price[] = { 0,10,20,30,40,50 };
        int yesorno = 0;
        printf("欢迎来到胡函青的神秘商店，请问你是顾客吗？\n（yes=1/no=2）");
        scanf("%d", &yesorno);
        if (yesorno == 1)
        {
            int code = 0;
            int number = 0;            
            int sum = 0;
            int buy = 1;
            int sumnumber = 0;
            while (buy == 1) {
                printf("1.苹果(10$) 2.香蕉(20$) 3.菠萝(30$) 4.西瓜(40$) 5.矿泉水(50$)\n");
                printf("请选择你想要购买的物品编号（1/2/3/4/5）\n");
                scanf("%d", &code);
                printf("请选择你要购买的数量\n");
                scanf("%d", &number);
                printf("请问您还需要购买别的物品吗？(1/2)");
                scanf("%d", &buy);
                sumnumber += number;
                sum = sum + price[code] * number;
            }
            if (sum >= 200 && sum < 1000) {
                printf("您的消费已满200元，已享受本店8折优惠！\n");
                sum = sum * 0.8;
            }
            if (sum >= 1000 || sumnumber >= 50) {
                printf("您在本地消费金额已超过1000或您购买的物品总量已超过50!\n已享受本店7折优惠!\n");
                sum = sum * 0.7;
            }
            printf("你所购买的物品总价为=%d", sum);

        }
        else if(yesorno == 2){
            printf("本商店只对顾客开放");
        }
        else {
            printf("输入错误！");
        }
    }*/

        //循环语句 -- while,for,do...while
        //int day = 0;
        //int daycode = 1;
        //printf("开始当穷苦打工人吧！\n");
        //while (day < 5)
        //{
        //    printf("开始打工%d\n", daycode);
        //    day++;
        //    daycode++;
        //}
        //if (day >= 5) {
        //    printf("周六日啦，休息一下吧!\n");
        //}
        //else {
        //}

    //C语言中函数的写法 -- 函数也是具有外部链接属性的
        int Add(int x, int y){
        int z = 0;
        z = x + y;
        return z;
    }
    //简化写法:
    /*
    int Add(int x, int y)
    {
    return (x + y);
    }    
    */
    //int main() {
    //    int n1 = 0;
    //    int n2 = 0;
    //    printf("请输入你想求和的数字\n");
    //    scanf("%d %d", &n1, &n2);
    //    int sum = Add(n1, n2);
    //    printf("%d\n", sum);
    //    return 0;
    //}
        //数组
        // 当数组给定长度但未放入对应的长度时，多出来的长度默认初始设置为0
        // C99标准之前，数组给定长度时只能使用常量或常量表达式，不可使用变量
        // C99标准之后，支持了变长数组，允许数组的长度为变量，但是这种指定方式的数组是不能初始化的
        // VS对C99的一些语法不支持，无法使用变长数组
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

        //0 - 数字0
        //'0' - 字符0 -- ASCII-48
        //'\0' - 字符 -- ASCII-0
        //EOF - end of file 文件的结束标志 值是-1
    //比大小函数
    int compare(int x, int y) {
        if (x > y) {
            return x;
        }
        else {
            return y;
        }
    }
    //一个用于划分范围的函数
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
    
    //操作符
    //算数操作符 ---> [+ - * / %(取模--除数的余数)]
    // / 除号两边都是整数时，执行的是整数除法，如果两端有一个浮点数就执行浮点数除法
    //移位操作符 ---> [>> <<]
    // 
    //位操作符 ---> [& ^ |]
    // 
    //赋值操作符 ---> [= += -= *= /= &= ^= |= >>= <<=]
    //例-- a = a + 3;与a += 3;一样
    //单目操作符 -- 只有一个操作数的操作符
    /*
     !        逻辑反操作       //C语言中，0表示假，非0表示真
     -        负值    //如果int a = -10; 那么-a = 10
     +        正值    //没啥用
     &        取地址
     sizeof   操作数的类型长度(以字节为单位)
     ~        对一个数的二进制按位取反
     --       前置、后置--
               * 同 ++ 
    * ++       前置、后置++     
               （1）后置++，先使用，后+1
               * 例 -- int a = 10; 
               * int b = a++;
               * 先使b获得a的值，a在+1
               * 此时输出b=10,a=11
               （2）前置++，先++，后使用
               *例 -- int a = 10;
               * int b = ++a;
               * 此时a先+1，b再获得a+1后的值
               * 此时输出a=11,b=11
     *        间接访问操作符(解引用操作符)
     (类型)   强制类型转换
    */
    //关系操作符
    /*
    >     
    >=
    <
    <=
    !=     用于测试“不相等”
    ==     用于测试“相等”
    */
    //逻辑操作符
    /*
    &&     逻辑与 -- 并且
    ||     逻辑或 -- 或者
    */
    //条件操作符(三目操作符)
    /*
    exp1 ? exp2 : exp3;
  若 真  输出exp2
  若 假  输出exp3
    例--
    int main() {
        int a = 10;
        int b = 20;
        int c = a > b ? a : b;  //意为a是否大于b，若大于b，输出a，若小于b，输出b
        printf("%d",c);
        return 0;
    }
    */
    //逗号表达式 -- 逗号隔开的一串表达式 -- 特点：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
    /*
    exp1，exp2，exp3，......expn;
    例--
    int main() {
        int a = 10;
        int b = 20;
        int c = 0;
        int r = (a=a+2,b=b-a*3,c+b-a);
//依次进行此时   a=12  b=-16   c=-28
        printf("%d",r);
        return 0;
    }
    */
    //下标引用、函数调用和结构成员
    /*
    []
    ()
    .
    ->
    */
    //逻辑反操作符实际如下
    /*int main() {
        int true = 0;
        if (!true) {
            printf("原定义为假");
        }
        else {
            printf("原定义为真");
        }
    }*/

    //sizeof操作符的各种需要注意的点
    //int main() {
    //    int num = 8;
    //    printf("%d",sizeof(num));
    //    printf("%d",sizeof(int));//printf("%d",sizeof int);这种写法不可
    //    printf("%d",sizeof num);//这种写法也是正确的
    //    int arr[100] = { 10 };
    //    printf("%d",sizeof(arr));//数组的长度
    //    printf("%d",sizeof(arr[0]));//数组中元素的长度
    //    printf("%d",sizeof(arr)/sizeof(arr[0]));//数组中元素的个数
    //    return 0;
    //}

    //强制类型转换的操作符具体应用例
    //int main() {
    //    int num = (int)3.14;
    //    //形如3.14的这种浮点数，编译器默认理解为double类型
    //    printf("%d", num);
    //    return 0;
    //}
    
    //函数调用操作符具体应用例
    //int Add(int x, int y)
    //{
    //    return (x + y);
    //}
    //int main() {
    //    int sum = add(3, 4);//其中()为函数调用操作符，add、2、3都为()的操作数
    //}

    //常见关键字  -- 关键字是C语言本身内置的，不能自己创建
    /*
    auto  break  case  char  const  continue  default  do  double  else  enum  extern  float  for  goto  if  int  long 
    register  return  short  signed  sizeof  static  struct  switch  typedef  union  unsigned  void  volatile  while
    */

    //关键字 -- typedef(类型定义，可理解为类型重命名)[可将一个复杂的类型简化为一个简单的类型]
typedef struct Node {
    int data;
    struct Node* next;
    }Node;
    //typedef float db; //此处将float类型重命名为db
    //int main() {
    //    float num2 = 12312.1;
    //    db num = 1.32;
    //    printf("%f", num);
    //    struct Node n;
    //    Node n2;
    //    return 0;
    //}

    /*
    *C语言中变量默认有三个存储区：
    *栈区(主要存储局部变量，函数的形参，函数的返回值(每一次函数的调用都会在栈区上占用空间)等)
    *堆区
    *静态区(当变量被static修饰后，变量变为静态变量，储存在静态区)
    */
    //关键字 -- static(静态的) -- 三种用法
    //1.修饰局部变量 -- 修饰局部变量时，局部变量出了作用域，不销毁
    //本质上，static修饰局部变量的时候改变了变量的存储位置，影响了变量的生命周期(关于变量的生命周期介绍在54~57行)
    //2.修饰全局变量 -- 修饰全局变量时，这个全局变量的外部链接属性就变成了内部链接属性。其他源文件就不能再使用这个变量
    //3.修饰函数 -- 修饰函数时，这个函数的外部链接属性改变为内部链接属性。其他源文件就不能在使用这个变量
    //satic 使用例如下

int test(){
    static int a = 0; 
    a++;
        printf("%d ",a);
        return 0;
}
//extern -- 声明外部符号 -- 使用例如下

//extern int ts; -- 相关代码转test.c
//int main() {
//    int number = 10;
//    while (number != 0) {
//        test();
//        printf("%d ", ts);
//        number--;
//    }
//    return 0;
//}

//extern int min(int x, int y); //-- 相关代码转test.c
//int main() {
//    int a, b;
//    scanf("%d %d",&a,&b);
//    printf("%d",min(a,b));
//    return 0;
//}

//register -- 寄存器 -- 一种高速处理数据的储存位置(级别为：1寄存器 2高速缓存 3内存 4硬盘)
//int main() {
//    register int number = 100;//建议100存放于寄存器中
//    return 0;
//}

//#define定义宏
//#define aplusb(x,y) ((x)+(y))
////aplusb=宏名  x,y=宏的参数(参数是无类型的) ((x)+(y))=宏体 
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int c = aplusb(a, b);
//    printf("%d",c);
//    return 0;
//}

//指针  
//&--取地址操作符
//内存会划分为一个个的内存单元(1byte) -- 每个内存单元都有一个编号
//内存单元 编号-->地址-->指针(地址也被称为指针)
//int main() {
//    int a = 100;
//    &a;//按F10后选择监视此项可查a地址
//    printf("%p\n",&a);
//    int* p = &a;
//    //int说明p指向的对象是int类型的
//    //*是说明p是指针变量的
//    //p就是指针变量(存放地址的变量)
//    printf("%p\n",p);
//    *p = 200;//通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象    此处的*是解引用操作符
//    printf("%zu ", sizeof(int*));
//    printf("%zu ", sizeof(double*));
//    printf("%zu ", sizeof(char*));
//    printf("%zu ", sizeof(float*));
//    printf("%zu ", sizeof(short*));
//    //不管是什么类型的指针，都创建的是指针变量
//    //指针变量的大小取决于一个地址存放时需要多大的空间
//    //32位机器上的地址：32bit位 - 4byte - 所以该机器上指针变量的大小为4字节
//    //64位机器上的地址：64bit位 - 8byte - 所以该机器上指针变量的大小为8字节
//    return 0;
//}

//结构体 -- 是将单一的类型组合在一起的做法
//struct information { //此处将一个人的名字，年龄，生日，性别，存款构建为一个结构体information
//    char name[20];
//    int age;
//    int birthday;
//    char sex[20];
//    double money;
//};
//void print(struct information* mi) {
//    printf("%s %d岁 %d %s %.3lf元\n",mi->name,mi->age,mi->birthday,mi->sex,mi->money);
//    //"->"操作符(我自己发现的！！！) 结构体指针变量->成员名
//    printf("%s %d岁 %d %s %.3lf元\n", (*mi).name, (*mi).age,(*mi).birthday,(*mi).sex, (*mi).money);
//}
//int main() {
//    struct information my = {"huhanqing",18,20030309,"male",12317842.431 }; //此处将结构体information中各变量一一赋值并命名该结构体为my
//    struct information hy = { "huangqiuhua",3,20050630,"female",-34253425.312 };
//    printf("%s %d岁 %d %s %.3lf元\n",my.name,my.age,my.birthday,my.sex,my.money); //此处将结构体my中信息输出
//    //结构体对象访问其中的成员使用'.'如 --> (结构体对象).成员名
//    print(&my);
//    return 0;
//}

//控制语句：
//条件判断语句 -- if、switch
//循环执行语句 -- while、do while、for
//while与do while可以用continue语句重新开始当次循环(跳过continue后面的代码重新进行while的进行判断)
//转向语句 -- return、continue、break、goto

//switch语句
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    switch (a) //switch表达式()中必须为整形
//    {
//    case 3:
//    case 2:
//    case 1:
//        printf("这是1\n");
//        break;
//    case 4:
//        printf("这是2\n");
//        break;
//    default: //当case中无法找到与输入值匹配的数时，进入default语句
//        printf("输入错误！");
//        break;
//    }
//    return 0;
//}

//for循环
//int main() {
//    for (int a = 0; a < 10; a++) {
//        printf("%d我真帅！\n",a);
//    }
//    return 0;
//}

//fou循环变种
//for循环的判读部分省略，意味着判断会恒成立
//int main() {
//    for (;;) {
//        printf("NB!\n");
//        printf("666\n");
//    }
//    return 0;
//}
//for循环同时用多种变量控制
//int main() {
//    for (int x = 10, y = 0; x > 0 && y < 10; x--, y++) {
//        printf("帅！\n");
//    }
//    return 0;
//}

//do while循环 (先执行，后判读的循环)
//int main() {
//    int a = 1;
//    do {
//        if (a == 5) {
//            break;
//        }
//        printf("%d帅!\n",a);
//        a++;
//    } while (a <= 10);
//    return 0;
//}

#include <stdlib.h> //rand()函数所需要的头文件
//rand()函数可用来创造随机数
//猜数字小游戏
//int main() {
//    int enternum = 0;
//    int randnum = rand() % 100+1; //此处生成了一个1~100的随机数
//    int time = 0;
//    char ctn = 'y';
//    for (; ctn == 'y';) {
//        printf("欢迎来玩猜数字小游戏！\n该数字将会在1~100之间,你有五次机会来猜这个数字！\n");
//        while (enternum != randnum && time < 5) {
//            printf("请输入一个1到100之间的数据：\n");
//            scanf("%d", &enternum);
//            if (enternum > randnum) {
//                printf("你猜的数字大了！\n");
//            }
//            else if (enternum < randnum) {
//                printf("你猜的数字小了！\n");
//            }
//            time++;
//        }
//        if (time == 5) {
//            printf("很可惜，你猜数字的次数用完了！\n");
//        }
//        else {
//            printf("恭喜你猜对了!");
//        }
//    }
//    return 0;
//}

//int main() {
//    //关于输入缓冲区 -- scanf和getchar这两个关键字的调用不是通过键盘直接输入而是由键盘 -> 缓冲区 ->关键字
//    //getchar();//该关键字可以用来获取一个字符或一个字符变量
//    /*关于getchar可能出现的问题，因为scanf和getchar都是通过缓冲区拿取对应的数据，而当scanf取走相应数据时会留下一个回车键“\n”，此时
//    该字符可能会被getchar从缓冲区拿取，以至于无法正常给getchar赋值！若想防止getchar读取“\n”，可在目标getchar上方再写一个getchar用来
//    读取“\n”若会导致该错误发生的字符不止一个，可通过循环结构来将多余字符拿取！*/
//    //例：
//    int password[20] = { 0 };
//    printf("请输入你的密码：");
//    scanf("%s", &password);
//    int ch = 0;
//    while ((ch=getchar())!='\n') {
//        ;
//    }
//    printf("你是帅哥吗？(Y/N)\n");
//    if (getchar() == 'Y') {
//        printf("YES!");
//    }
//    else {
//        printf("NO!");
//    }
//    //putchar();//该关键字可以用来输出一个字符
//    int word = 0; //getchar()的返回值为ASCII码值或EOF为int类型数据
//    while ((word = getchar()) != EOF) {
//        putchar(word);
//    }
//    return 0;
//}

//ASCII码转文字
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

//输出printf的返回值
//int main() {
//    int a = printf("Hello World!"); //printf有返回值为int类型
//    printf("%d", a);
//    return 0;
//}

//输出"\n"与""""
//int main() {
//    printf("printf(\"Hello World\\n\"); \n");
//    printf("cout<<\"Hello world!\"<<endl;");
//    return 0;
//}

//求最大值
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

//求最大值
//int main() {
//    int a, b, c, d, e, f;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    e = a > b ? a : b;
//    f = c > d ? c : d;
//    printf("%d", e > f ? e : f);
//}

//求最大值
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

//求最大值
//int main() {
//    float x = 0.0f;
//    scanf("%f", &x);
//    printf("%.2f", (x = x * x * x,x = x * 4, x = x * 3.14,x = x / 3));
//    return 0;
//}

//计算BMI
//int main() {
//    double weight = 0.0;
//    double height = 0.0;
//    scanf("%lf %lf",&weight ,&height);
//    height = height * 0.01;
//    printf("%.2lf",(weight/(height*height)));
//    return 0;
//}

//求最大值(for循环版)
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

//计算n的阶乘与阶乘和
//int main() {
//    int num = 0;
//    int y = 1;
//    int sum = 0;
//    printf("请输入你想要计算的阶乘：\n");
//    scanf("%d",&num);
//    for (int x = 1; x <= num;x++) {
//        y = y * x;
//        sum += y;
//    }
//    printf("%d的阶乘为：%d,1~%d阶乘和为：%d", num,y,num,sum);
//        return 0;
//}

//在一个有序数组中查找具体的某个数n
//int main() {
//    int arr[50];
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int num = 0;
//    int a = 0;
//    for (int i = 0; i < sz; i++) {
//        arr[i] = i + 1;
//    }
//    printf("请输入你想要查找到数字：\n");
//    scanf("%d",&num);
//    for (a = 0; a < 50; a++) {
//        if (arr[a] == num) {
//            printf("找到了，下标为：%d", a);
//            break;
//        }
//    }
//    if (a == sz) {
//        printf("没找到！");
//    }
//    return 0;
//}

////利用二分法在有序数组中查找具体的某个数n(比上面那个更高效)
//int main() {
//    int arr[100];
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int num = 0;
//    int a = 0;
//    int b = sz - 1;
//    printf("请输入你想查找的数字：\n");
//    scanf("%d",&num);
//    for (int i = 0; i < sz; i++) {
//        arr[i] = i + 1;
//    }
//    for (;b>=a;) {
//        //int m = (a+b) / 2;
//        int m = a + (a + b) / 2;
//        m = (a + b) / 2;
//        if(arr[m] == num) {
//            printf("找到了，下标为：%d\n",m);
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
//        printf("没找到\n");
//    }
//    return 0;
//}

//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
// int main() {
//    char arr[] = {"╭∩╮（︶︿︶）╭∩╮"};
//    char arr1[] = {"#####################"};
//    int sz = strlen(arr);    
//    //int sz = sizeof(arr) / sizeof(arr[0]); //该方法算出的数组中字符的个数包括'/0'
//    int left = 0;
//    int right = sz;
//    for (;left<=right;right--,left++) {
//        printf("%s", arr1);
//        //for (int a = 0; a < sz; a++) {
//        //    printf("%c", arr1[a]);
//        //}
//        Sleep(1000);//一个延迟输出的关键字，此处延迟了1000ms
//        printf("\n");
//        system("cls");//stdlib.h头文件中的一个库函数，此处功能为清空屏幕
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
//    printf("请注册一个密码：\n");
//    scanf("%s",&tpassword);
//    printf("请登录：\n");
//    scanf("%s",&password);
//    for (int a = 2; a >=0; a--) {
//        if (strcmp(password,tpassword) == 0) {     //比较两个字符串是否相等，不能使用“==”，要使用一个库函数strcmp头文件为string.h
//            printf("登录成功\n");                  //当字符串1<字符串2时，返回负数;>时返回正数;=时返回0
//            break;
//        }
//        else if (a == 0) {
//            printf("您没有机会了!");
//        }
//        else {
//            printf("密码输入错误，请重新输入，您还有%d次机会\n",a);
//            scanf("%s",&password);
//        }
//    }
//    return 0;
//}

//数组传参的时候传的是数组首元素的地址

//猜数字小游戏进阶版
//#include <time.h>
//void menu() {
//    printf("*****************************************\n");
//    printf("***************猜数字小游戏**************\n");
//    printf("********我们将生成一个1~100的数字********\n");
//    printf("*****************欢迎来玩****************\n");
//    printf("**************开始(1)/结束(0)************\n");
//    printf("*****************************************\n");
//}
//void game() {
//    int num = 0;
//    //rand()函数默认的最大值为32767
//    int randnum = rand () % 100 +1;
//    for (;;) {
//        scanf("%d", &num);
//        if (num == randnum) {
//            printf("恭喜你猜对了！\n");
//            break;
//        }
//        else if (num < randnum) {
//            printf("你猜的数字小了!\n");
//        }
//        else if (num > randnum) {
//            printf("你猜的数字大了!\n");
//        }
//    }
//}
//int main() {
//    //时间戳 //time关键词可以获取当前的时间戳，返回值类型为time_t
//    srand((unsigned)time(NULL));//srand()可以设置rand函数的初始值
//    //NULL为指针变量的值，为0
//    int play = 0;
//    do {
//        menu();
//        scanf("%d", &play);
//        switch(play){
//        case 1:
//            printf("开始游戏\n请输入一个数字:\n");
//            game();
//            break;
//        case 0:
//            printf("退出游戏\n");
//            break;
//        default:
//            printf("输入错误,请重新选择\n");
//            break;
//        }
//    } while (play);
//    return 0;
//}

//goto语句 乱用会导致程序运行的顺序太乱 并且不能跨函数 所以常用来跳出嵌套循环
//int main() {
//    again:
//    printf("我是帅哥!\n");
//    goto again;
//    return 0;
//}

//关机程序
//#include <windows.h>
//int main() {
//    char arr[50];
//    char arr1[50] = { "我是猪，胡函青是大帅哥!" };
//    system("shutdown -s -t 60");
//    again:
//    printf("请注意,你的电脑将在60s后关机，输入：“我是猪，胡函青是大帅哥!”取消关机!\n");
//    scanf("%s",&arr);
//    if (strcmp(arr, arr1) == 0) {
//        system("shutdown -a");
//    }
//    else {
//        printf("你的电脑将在60s后关机，拜拜！");
//        goto again;
//    }
//    return 0;
//}

//shutdown - a　取消关机
//
//shutdown - s 关机
//
//shutdown - f　强行关闭应用程序
//
//shutdown - m \\计算机名　控制远程计算机
//
//shutdown - i　显示“远程关机”图形用户界面，但必须是Shutdown的第一个参数
//
//shutdown - l　注销当前用户
//
//shutdown - r　关机并重启
//
//shutdown - s - t 时间　设置关机倒计时
//
//shutdown - r - t 时间 设置重新启动倒计时
//
//shutdown - h 休眠

//strcpy -- 复制字符串，但需要头文件
//#include <string.h>
//int main() {
//    char arr[50] = { "我是世界上最帅的帅哥！" };
//    char arr2[50];
//    strcpy(arr2, arr);
//    printf("%s\n%s", arr, arr2);
//    return 0;
//}

//memset -- 将指定的一个数组前的整形个字符替换为别的字符，也需要头文件
//#include <string.h>
//int main() {
//    char arr[] = { "难道我是胡函青" };
//    memset(arr, ' ', 4);
//    printf("%s", arr);
//    return 0;
//}

//自定义函数(扩展介绍) -- 自定义函数和库函数一样，有函数名、返回值和函数类型
// //传值调用
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
// //传址调用：
//void swap(int *px, int *py) {
//    //x、y为形式参数
//    int z = *px;
//    *px = *py;
//    *py = z;
//}
//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参
//要想实现交换，可用指针对地址进行调用
//int main() {
//    int a = 0;
//    int b = 0;
//    //a、b为实参
//    scanf("%d %d",&a,&b);
//    printf("%d %d\n", a, b);
//    swap(&a, &b);
//    printf("%d %d\n", a, b);
//    return 0;
//}

//函数的参数 -- 实际参数(实参)/形式参数(形参)
/*
实际参数：
真实传给函数的值叫实参。
实参可以是函数、变量、表达式、常量等
无论实参是何种类型的量，在进行函数调用时，他们都需要有确定的值，以便传递给形参
*/
/*
形式参数：
形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的工程中才实例化(分配内存单元)，所以叫形式参数。
形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效。
*/
/*
传址调用：
传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数方式
这种传参方式可以让函数和函数外部的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量
*/
/*
传值调用：
函数的形参和实参占用不同的内存块，对形参的修改不会影响实参
*/

//判断一个数是否是素数
//#include <math.h>
//void judge(int x) {
//    int temp = 1;
//    for (int a = 2; a<=sqrt(x); a++) {
//        //sqrt()为开平方关键词
//        if (x % a == 0) {
//            temp = 0;
//            break;
//        }
//    }
//    if (temp == 1) {
//        printf("该数字为素数！");
//    }
//    else {
//        printf("该数字不是素数!");
//    }
//}
//int main() {
//    int num = 0;
//    scanf("%d", &num);
//    judge(num);
//    return 0;
//}

//判断是否是闰年
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
//        printf("该年为闰年!");
//    }
//    else {
//        printf("该年不是闰年!");
//    }
//    return 0;
//}

//布尔类型 -- bool -- 需要头文件stdbool
//用来表示真假的变量
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
//        printf("该年为闰年!");
//    }
//    else {
//        printf("该年不是闰年!");
//    }
//    return 0;
//}

//每次调用增加1
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

//嵌套调用 -- 函数可以嵌套调用，但不能嵌套定义
//void name() {
//    printf("胡函青!\n");
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

//链式访问
//int main() {
//    char arr[20] = {"adsadsadasd"};
//    printf("%d\n", strlen(arr));
//    printf("%d", printf("%d", printf("%d", 43)));
//    //printf();的返回值为打印的字符个数
//    return 0;
//}

//函数的定义和声明
//函数的声明 -- 告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体存不存在函数声明解决不了
//函数的声明一般出现在函数的使用前。要满足先声明后使用
//函数的声明一般要放在头文件中
//#include "plus.h"
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d",plus(a, b));
//    return 0;
//}

//函数递归 -- 化繁为简的常用方法
//递归的两个必要条件 -- 1、存在必要限制条件，但满足必要条件时，递归终止
//2、每次递归调用之后越来越接近限制条件
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

//不创建临时变量，求字符串长度 -- 递归函数
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

//求n的阶乘
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

//求第n个斐波那契数 -- 用递归不好，会大量计算
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

//不用递归的写法 -- 对于这种情况更好的写法
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

//给定两个数，求最大公约数 -- 自己的写法
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
//        printf("没有最大公约数!\n");
//    }
//    return 0;
//}
//辗转相除法
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

//计算 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 ....... + 1/99 - 1/100 的值，打印出结果
//int main() {
//    float sum = 0;
//    float flag = 1;
//    //有的选择结构实现的结果，可能一个变量就能解决
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

//一维数组的创建和初始化
//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//二维数组的创建和初始化
//二维数组创建时，行数可以省略，但列数不可省略
//int main() {
//    int arr[5][5] = {{1,2,3,4,5},{6,7,8,9,1},{4,5,9,1,2},{5,7,3,9,1},{9,7,1,3,4}};//五行五列
//    //int arr3[3][3][3] = { {1,2,3},{4,5,6} ,{7,8,9} };
//    int sz = sizeof(arr[0])/sizeof(arr[0][0]);
//    printf("%d", sz);
//    char arr2[10][10];//十行十列
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

//数组越界
//数组下标是有范围限制的
//C语言本身是不做数组下标的越界检查，编译器也不一定报错
//但是编译器不报错，并不意味着程序就是正确的，所以程序员写代码时，最好自己做越界的检查。

//冒泡排序的算法
//数组传参有两种写法 -- 数组和指针形式
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

//数组名是什么
//int main() {
//    int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//    printf("%p\n", arr);
//    printf("%p\n", arr+1);
//    printf("-----------------------------\n");
//    printf("%p\n", &arr);
//    printf("%p\n", &arr+1);//此处的数组长度为40，加1就相当于加了一个数组的长度
//    printf("-----------------------------\n");
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[0]+1);
//    //数组名确实能表示首元素地址，但有两个例外：
//    //1.sizeof(数组名),此处的数组名代表的是整个数组，计算的是整个数组的大小，单位是字节
//    //2.&数组名，这里的数组名也表示整个数组，取出的是整个数组的地址
//    int sz = sizeof(arr);
//    printf("%d", sz);
//    return 0;
//}

//二维数组的数组名的理解
//int main() {
//    int arr[5][6];
//    int sz = sizeof(arr);
//    printf("%d",sz);
//    arr;//二维数组的数组名也表示首元素的地址(一行的地址)
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
//    printf("千位=%d\n百位=%d\n十位=%d\n个位=%d\n",num/1000,num%1000/100,num%100/10,num%10);
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


//备考软考，暂时先去学别的

//三子棋

















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

//递归二分查找
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

//杨辉三角
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












//汉诺塔问题、跳青蛙问题
//int forg() {
//
//}
//int main() {
//    
//
//
//    return 0;
//}










