#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(������)���������������Ĵ�С����λ���ֽ�//&arr���������������������ĵ�ַ
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", arr);//������������Ԫ�ص�ַ
	printf("%p\n", arr+1);//������������Ԫ�ص�ַ
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	return 0;
}

//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð����������
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		if (flag == 1)
//		{
//			break;//����forѭ����breakֻ������for��whileѭ��
//		}
//	}
//}

//������Ϊ��������
//ð������
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð����������
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
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
//	bubble_sort(arr,sz);//arr�����飬��������ʱ��ʵ���ϴ���ȥ����������Ԫ�صĵ�ַ
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
//    //����һ���յ����Ա�
//    L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
//    if (!L.elem)
//        exit(_OVERFLOW);
//    L.length = 0;
//    L.listsize = LIST_INIT_SIZE;
//    return 1;
//}
//Status DestoryList(SqList& L) {
//    //�������Ա�
//    delete (L.elem);
//    L.elem = NULL;
//    L.length = 0;
//    L.listsize = 0;
//    return 1;
//}
//Status ClearList(SqList& L) {
//    //��L����Ϊ�ձ�
//    L.length = 0;
//    return 1;
//}
//bool ListEmpty(SqList L) {
//    //��LΪ�ձ��򷵻�TRUE�����򷵻�FALSE;
//    if (0 == L.length)
//        return true;
//    return false;
//}
//Status ListLength(SqList L) {
//    //����L������Ԫ�ظ���
//    return L.length;
//}
//Status GetElem(SqList L, int i, ElemType& e) {
//    //��e����L�е�i��Ԫ�ص�ֵ
//    if (i<1 || i>L.length)
//        exit(0);
//    e = *(L.elem + i - 1);
//    return 1;
//}
//Status LocateElem(SqList L, ElemType& e, Status(*compare)(ElemType, ElemType)) {
//    //����L�е�һ��e����compare����������Ԫ�ص�λ���������ڣ��򷵻�0��
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
//    //cur_e��ǰ���ڵ�
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
//    //cur_e�ĺ�̽ڵ�
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
//    //��L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L����+1
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
//    //ɾ��L�ĵ�i��λ�õ�����Ԫ�أ�����e������ֵ��L����-1
//    if (i<1 || i>L.length)
//        return 0;
//    e = L.elem[i - 1];
//    for (int j = i - 1; j < L.length - 1; j++)
//        L.elem[j] = L.elem[j + 1];
//    L.length--;
//    return 1;
//}
//Status ListTraverse(SqList L, void(*visit)(ElemType*)) {
//    //���ζ�L��ÿ��Ԫ�ص���visit()������һ��ʧ�ܣ������ʧ��
//    ElemType* p = L.elem;
//    for (int i = 1; i <= L.length; i++) {
//        visit(p++);
//    }
//    cout << endl;
//    return 1;
//}
//
////�㷨2.1
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
//        if (!LocateElem(La, e, equal))//����ָ��
//            ListInsert(La, ++La_len, e);
//    }
//}

//�㷨2.2
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
////�㷨2.3
//Status InitList_Sq(SqList& L) {
//    L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
//    if (!L.elem)
//        exit(_OVERFLOW);
//    L.length = 0;
//    L.listsize = LIST_INIT_SIZE;
//    return 1;
//}
//
////�㷨2.4
//Status ListInsert_Sq(SqList& L, int i, ElemType e) {
//    //��L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L����+1
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
////�㷨2.5
//Status ListDelete_Sq(SqList& L, int i, ElemType& e) {
//    //ɾ��L�ĵ�i��λ�õ�����Ԫ�أ�����e������ֵ��L����-1
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
////�㷨2.6
//Status LocateElem_Sq(SqList L, ElemType& e, Status(*compare)(ElemType, ElemType)) {
//    //����L�е�һ��e����compare����������Ԫ�ص�λ���������ڣ��򷵻�0��
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
////�㷨2.7
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
//{                                      //����ṹ�� 
//	int num;
//		student* next;
//}student, * stu;
//void Union(stu& list1, stu list2)                             //��һ�ֺϲ�  �� list2Ԫ��������뵽kist1�� �� ���ظ���Ĭ�ϵ������룩 
//{
//	int temp;
//		int l1_len = ListLength(list1);
//		int l2_len = ListLength(list2);
//
//		for (int i = 1; i <= l2_len; i++)
//		{
//			temp = GetElem(list2, i);                       //�õ�list2��i��Ԫ�ص�ֵ��temp 
//			if (!LocateElem(list1, temp))                   //�ٵ�list1��ȥ����û����ͬ��  û�еĻ��Ͱ�Ԫ�ز嵽list1����ȥ 
//			{
//				Insert(list1, temp);
//			}
//		}
//}