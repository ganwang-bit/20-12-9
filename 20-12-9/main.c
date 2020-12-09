//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#define CAT(X,Y) X##Y  //Ô¤´¦ÀíÁ´½Ó·ûºÅXY  class##84=class84
//int main()
//{
//    int class84=2019;
//    printf("%d\n",CAT(class,84));
//    return 0;
//}
//#include<stdio.h>
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//    int a=10;
//    int b=11;
//    //int b=++a;
//    int max=MAX(a++,b++);
//    //int max=((a++)>(b++)?(a++):(b++));
//    printf("%d\n",max);
//    printf("%d\n",a);
//    printf("%d\n",b);
//    return 0;
//}
//#include<stdio.h>
//int Max(int a,int b)
//{
//    return (a>b?a:b);
//}
//#define MAX(A,B) ((A)>(B)?(A):(B))
//int main()
//{
//    int a=10;
//    int b=20;
//    int max=MAX(a,b);
//    printf("%d\n",max);
//    max=Max(a,b);
//    printf("%d\n",max);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int cmp( const void*a,const void*b)
//{
//    return *(char*)a-*(char*)b;
//}
//int main()
//{
//    char arr[]="5468792113";
//    int(*p)(const void*,const void*)=cmp;
//    qsort(arr,10,sizeof(char),p);
////    int i=0;
//    printf("%s",arr);
////    for(i=0;i<10;i++)
////    {
////        printf("%c",arr[i]);
////    }
//    return 0;
//}
//#include<stdio.h>
//#define DEBUG
//int main()
//{
//    int arr[10]={1,2,3,4,5,6,7,8,9,10};
//    int i=0;
//    while(i<10){
//            arr[i]=0;
//#if 1
////#ifdef DEBUG
//    printf("%d ",arr[i]);
//#elif
//#else
//#endif // DEBUG
//    i++;
//    }
//    return 0;
//}
//#include<stdio.h>
//#define DEBUG
//int main()
//{
//    #if defined(DEBUG)
//    return 0;
//    #endif // defined
//}
//#include<stdio.h>
//#pragma once
//#ifndef __TEST_H__
//#define __TEST_H__
//#endif // __TEST_H__
//int add(int ,int )
//int main()
//{
//
//    return 0;
//}
#include<stdio.h>
struct S
{
    char c1;
    int a;
    char c2;
};
#define OFFSETOF(struct_name,member_name) (int)(&((struct_nmae*)0)->member_name)
int main()
{
    //struct S s;
    printf("%d\n",OFFSETOF(struct S,c1));
    printf("%d\n",OFFSETOF(struct S,a));
    printf("%d\n",OFFSETOF(struct S,c2));
    return 0;
}
