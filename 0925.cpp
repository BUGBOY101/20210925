#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(数组名)计算的是整个数组的大小，单位是字节//&arr数组名代表的是整个数组的地址
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", arr);//数组名就是首元素地址
	printf("%p\n", arr+1);//数组名就是首元素地址
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	return 0;
}

//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序趟数
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟排序的数已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		if (flag == 1)
//		{
//			break;//跳出for循环，break只能用于for和while循环
//		}
//	}
//}

//数组作为函数参数
//冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序趟数
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for(j=0;j<sz-1-i;j++)
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,5,6,8,30,33,45,67 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//arr是数组，对他传参时，实际上传过去的是数组首元素的地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<malloc.h>
//#include<bits/stdc++.h>
//using namespace std;
//#define MaxSize 100
//#define LIST_INIT_SIZE 100
//#define LISTINCREMENT 10
//#define ElemType int 
//#define Status int
//
//typedef struct {
//    ElemType* elem;
//    int length;
//    int listsize;
//}SqList, List;
//
//Status InitList(SqList& L) {
//    //构造一个空的线性表
//    L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
//    if (!L.elem)
//        exit(_OVERFLOW);
//    L.length = 0;
//    L.listsize = LIST_INIT_SIZE;
//    return 1;
//}
//Status DestoryList(SqList& L) {
//    //销毁线性表
//    delete (L.elem);
//    L.elem = NULL;
//    L.length = 0;
//    L.listsize = 0;
//    return 1;
//}
//Status ClearList(SqList& L) {
//    //将L重置为空表
//    L.length = 0;
//    return 1;
//}
//bool ListEmpty(SqList L) {
//    //若L为空表，则返回TRUE，否则返回FALSE;
//    if (0 == L.length)
//        return true;
//    return false;
//}
//Status ListLength(SqList L) {
//    //返回L中数据元素个数
//    return L.length;
//}
//Status GetElem(SqList L, int i, ElemType& e) {
//    //用e返回L中第i个元素的值
//    if (i<1 || i>L.length)
//        exit(0);
//    e = *(L.elem + i - 1);
//    return 1;
//}
//Status LocateElem(SqList L, ElemType& e, Status(*compare)(ElemType, ElemType)) {
//    //返回L中第一个e满足compare（）的数据元素的位序，若不存在，则返回0；
//    int i = 1;
//    ElemType* p = L.elem;
//    while (i <= L.length && !(*compare)(*p++, e))
//        ++i;
//    if (i <= L.length)
//        return i;
//    else
//        return 0;
//}
//Status PriorElem(SqList L, ElemType cur_e, ElemType& pre_e) {
//    //cur_e的前驱节点
//    int i = 2;
//    ElemType* p = L.elem + 1;
//    while (i <= L.length && *p != cur_e) {
//        p++;
//        i++;
//    }
//    if (i > L.length)
//        return -1;
//    pre_e = *(--p);
//    return 1;
//}
//Status NextElem(SqList L, ElemType cur_e, ElemType& next_e) {
//    //cur_e的后继节点
//    int i = 1;
//    ElemType* p = L.elem;
//    while (i < L.length && *p != cur_e) {
//        i++;
//        p++;
//    }
//    if (i == L.length)
//        return -1;
//    next_e = *(++p);
//    return 1;
//}
//Status ListInsert(SqList& L, int i, ElemType e) {
//    //在L中第i个位置之前插入新的数据元素e，L长度+1
//    if (i<1 || i>L.length + 1)
//        return 0;
//    if (L.length >= L.listsize) {
//        ElemType* newbase = (ElemType*)realloc(L.elem,
//            (L.listsize + LISTINCREMENT) * sizeof(ElemType));
//        if (NULL == newbase)
//            exit(_OVERFLOW);
//        L.elem = newbase;
//        L.listsize += LISTINCREMENT;
//    }
//    for (int j = L.length - 1; j >= i - 1; j--)
//        L.elem[j + 1] = L.elem[j];
//    L.elem[i - 1] = e;
//    L.length++;
//    return 1;
//}
//Status ListDelet(SqList& L, int i, ElemType& e) {
//    //删除L的第i个位置的数据元素，并用e返回其值，L长度-1
//    if (i<1 || i>L.length)
//        return 0;
//    e = L.elem[i - 1];
//    for (int j = i - 1; j < L.length - 1; j++)
//        L.elem[j] = L.elem[j + 1];
//    L.length--;
//    return 1;
//}
//Status ListTraverse(SqList L, void(*visit)(ElemType*)) {
//    //依次对L的每个元素调用visit()函数，一旦失败，则操作失败
//    ElemType* p = L.elem;
//    for (int i = 1; i <= L.length; i++) {
//        visit(p++);
//    }
//    cout << endl;
//    return 1;
//}
//
////算法2.1
//ElemType e;
////Status equal(ElemType a, ElemType b) {
//    if (a == b)
//        return 1;
//    else
//        return 0;
//void unionlist(List& La, List Lb) {
//    int La_len = ListLength(La);
//    int Lb_len = ListLength(Lb);
//    for (int i = 1; i <= Lb_len; i++) {
//        GetElem(Lb, i, e);
//        if (!LocateElem(La, e, equal))//函数指针
//            ListInsert(La, ++La_len, e);
//    }
//}

//算法2.2
//void MergeList(List La, List Lb, List& Lc) {
//    InitList(Lc);
//    int i, j, k;
//    int a[100], b[100];
//    i = j = 1;
//    k = 0;
//    int La_len = ListLength(La);
//    int Lb_len = ListLength(Lb);
//    while ((i <= La_len) && (j <= Lb_len)) {
//        GetElem(La, i, a[i]);
//        GetElem(Lb, i, b[i]);
//        if (a[i] < b[j]) {
//            ListInsert(Lc, ++k, a[i]);
//            ++i;
//        }
//        else {
//            ListInsert(Lc, ++k, b[j]);
//            ++j;
//        }
//    }
//    while (i <= La_len) {
//        GetElem(La, i++, a[i]);
//        ListInsert(Lc, ++k, a[i]);
//    }
//    while (j <= Lb_len) {
//        GetElem(Lb, j++, b[j]);
//        ListInsert(Lc, ++k, b[j]);
//    }
//}
//
////算法2.3
//Status InitList_Sq(SqList& L) {
//    L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
//    if (!L.elem)
//        exit(_OVERFLOW);
//    L.length = 0;
//    L.listsize = LIST_INIT_SIZE;
//    return 1;
//}
//
////算法2.4
//Status ListInsert_Sq(SqList& L, int i, ElemType e) {
//    //在L中第i个位置之前插入新的数据元素e，L长度+1
//    if (i<1 || i>L.length + 1)
//        return 0;
//    if (L.length >= L.listsize) {
//        ElemType* newbase = (ElemType*)realloc(L.elem,
//            (L.listsize + LISTINCREMENT) * sizeof(ElemType));
//        if (NULL == newbase)
//            exit(_OVERFLOW);
//        L.elem = newbase;
//        L.listsize += LISTINCREMENT;
//    }
//    for (int j = L.length - 1; j >= i - 1; j--)
//        L.elem[j + 1] = L.elem[j];
//    L.elem[i - 1] = e;
//    L.length++;
//    return 1;
//}
//
////算法2.5
//Status ListDelete_Sq(SqList& L, int i, ElemType& e) {
//    //删除L的第i个位置的数据元素，并用e返回其值，L长度-1
//    if (i<1 || i>L.length)
//        return 0;
//    ElemType* p = &(L.elem[i - 1]), * q;
//    e = *p;
//    q = L.elem + L.length - 1;
//    for (++p; p <= q; ++p)
//        *(p - 1) = *p;
//    --L.length;
//    return 1;
//}
//
////算法2.6
//Status LocateElem_Sq(SqList L, ElemType& e, Status(*compare)(ElemType, ElemType)) {
//    //返回L中第一个e满足compare（）的数据元素的位序，若不存在，则返回0；
//    int i = 1;
//    ElemType* p = L.elem;
//    while (i <= L.length && !(*compare)(*p++, e))
//        ++i;
//    if (i <= L.length)
//        return i;
//    else
//        return 0;
//}
//
////算法2.7
//void MergeList_Sq(SqList La, SqList Lb, SqList& Lc) {
//    ElemType* pa, * pb, * pc, * pa_last, * pb_last;
//    pa = La.elem;
//    pb = Lb.elem;
//    Lc.listsize = Lc.length = La.length + Lb.length;
//    pc = Lc.elem = (ElemType*)malloc(Lc.listsize * sizeof(ElemType));
//    if (!Lc.elem)
//        exit(_OVERFLOW);
//    pa_last = La.elem + La.length - 1;
//    pb_last = Lb.elem + Lb.length - 1;
//    while (pa <= pa_last && pb <= pb_last) {
//        if (*pa <= *pb)
//            *pc++ = *pa++;
//        else
//            *pc++ = *pb++;
//    }
//    while (pa <= pa_last)
//        *pc++ = *pa++;
//    while (pb <= pb_last)
//        *pc++ = *pb++;
//}



//void Union(List &La, List Lb)
//{
//	int a = ListLength(La);
//	int b = ListLength(Lb);
//	for (int i = 1; i <= b; i++)
//	{
//		GetElem(Lb, i, e);
//		if (!LocateElem(La, e, equal)ListInsert(La, ++a, e);
//	}
//}

//typedef struct student
//{                                      //定义结构体 
//	int num;
//		student* next;
//}student, * stu;
//void Union(stu& list1, stu list2)                             //第一种合并  将 list2元素逐个插入到kist1中 且 不重复（默认递增输入） 
//{
//	int temp;
//		int l1_len = ListLength(list1);
//		int l2_len = ListLength(list2);
//
//		for (int i = 1; i <= l2_len; i++)
//		{
//			temp = GetElem(list2, i);                       //拿到list2第i个元素的值给temp 
//			if (!LocateElem(list1, temp))                   //再到list1中去找有没有相同的  没有的话就把元素插到list1里面去 
//			{
//				Insert(list1, temp);
//			}
//		}
//}