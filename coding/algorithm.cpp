#include <assert.h>
#include <string.h>
#include <stack>

//1.实现strcpy
char* MyStrCpy(char *pDest, const char *pSrc){
	if( mu)
}

//2.输入整数A,B,输出将Ａ转换为Ｂ所需改变的二进制
int bitSwapRequired2(int a, int b){
	int c = a^b;
	return fun(c);
}
int fun(unsigned int n){
	int count = 0;
	while(n > 0){
		n &= (n - 1);
		count++;
	}
	return count;
}

//3.实现CString字符串类缺省四个方法
class MyCString{
	public:
		myCString(char *pData = nullptr){
			if(nullptr == pData){
				mpData = new char[1];
				assert(nullptr != mpData);
				*mpData = '\0';
			}else{
				mpData = new char[strlen(pData) + 1]
				assert(nullptr != mpData);
				strcpy(mpData, pData);
			}
		}
		myCString(const MyCString &Other){
			mpData = new char[strlen(Other.mpData) + 1];
			assert(nullptr != mpData);
			strcpy(mpData, Other.mpData);
		}

		~MyCSting(){
			if(null != mpData){
				delete[] mpData;
				mpData = nullptr;
			}
		}

		const MyCString& operator =(const MyCSting &Other){
			if(this == &Other){
				return *this;
			}
			delete [] mpData;
			mpData = new char[strlen(Other.mpData) + 1];
			assert(nullptr != mpData);
			strcpy(mpData, Other.mpData);
			return *this;
		}
	private:
		char *mpData;
}


//4.不使用第三个变量交换两个数的值
void SwapA(int &A, int &B){
	if(A == B){
		return;
	}
	A = A + B;
	B = A - B;
	A = A - B;
}

void SwqpB(unsigned int &A, unsigned int &B){
	if(A == B){
		return;
	}
	A = A ^ B;
	B = A ^ B;
	A = A ^ B;
}

//5.实现C语言中字符串数字的转换
int Myatoi(const char *pString){
	assert(nullptr != pString);
	const int Len = strlen(pString);
	int Value = 0;
	int Times = 1;
	for(int i = Len - 1; i >= 0; Times *=10){
		Value += (pString[i] - '0') * Times;
	}
	return Value;
}

//6.实现一个将字符串逆序的方法
char* MyInverted(char *pDest){
	assert(nullptr != pDest);
	const int Len = strlen(pDest);
	char T = 0;
	for(int i = 0; i < Len / 2; ++i){
		T = pDest[i];
		pDest[i] = pDest[Len - i - 1];
		pDest[Len - i - 1] = T;
	}
	return pDest;
}

//7.实现一个将字符串中所有字母转换为大写的方法
char* MyUpper(char *pDest){
	assert(nullptr != pDest); //#define NDEBUGE
	for(char *i = pDest; *i != '\0'; i++){
		if(*i < 'a' | *i > 'z'){
			continue;
		}
		*i -= 'a' - 'A';
	}
	return pDest;
}

//8.已知一个数组已经降序排序，请用二分查找到其中某个元素的并返回索引，否则返回-1
int BinarySearch(int *pArray, int Count, const int Value){
	assert(nullptr != pArray);
	int left = 0;
	int right = Count - 1;
	int mid = 0;
	while(left < right){
		mid = (left + right) / 2;
		if(Value < pArray[mid]){
			right = mid - 1;
		}else if(Value > pArray[mid]){
			left = mid + 1;
		}else{
			return mid;
		}
	}
	return -1;
}

//9.删除链表中值为Value的所有元素([head]->[node1]->[node2]->[noden])
void DeleteFromList(Node *pHead, const int Value){
	//assert(nullptr != pHead);
	Node *pPrev = pHead;
	Node *pNext = pHead->mpNext;
	while(pNext != nullptr){
		if(pNext->mData != Value){
			pPrev = pNext;
			pNext = pNext->mpNext;
		}else{
			pPrev->mpNext = pNext->mpNext;
			delete pNest;
			pNext = pPrev->mpNext;
		}
	}
}

//10.在链表Indext位置插入新的值为Value的元素(前插)
void InsertFromLisy(Node *pHead, int Index, const int Value){
	Node *pIter = pHead;
	for(int i = 0; i < Index && pIter != nullptr; ++i, pIter = pIter->mpNext);
	assert(pIter != nullptr);
	Node *pNew = new Node;
	pNew->mData = Value;
	pNew->mpNext = pIter->mpNext;
	pIter->mpNext = pNew;
}

//11.将链表逆序
Node* InvertedFromList(Node *pHead){
	Node *pPrev = pHead;
	Node *pNext = pHead->mpNext;
	Node *pNextNext = nullptr;

	while(nullptr != pNext){
		pNextNext = pNext->mpNext;
		pNext->mpNext = pPrev;

		pPrev = pNext;
		pNext = pNextNext;
	}
	pHead->mpNext = nullptr;
	return pPrev;
}

//12.判断年月日是这年的第几天
int GetDay(int Year, int Month, int Day){
	int MonthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if((Year % 4 == 0 && Year % 100 != 0)||(Year % 400 == 0)){
		++MonthDays[2];
	}
	int Days = 0;
	for(int i = 0; i < Month; ++i){
		Days += MonthDays[i];
	}
	Days += Day;
	return Days;
}

//13.求斐波拉契数列第N项 这里没有使用递归思想
int GetFibonaccil1(int N){
	if(N == 1 || N == 2){
		return 1;
	}
	if( N == 3){
		return 2;
	}
	int A = 3;
	int B = 5;
	int C = 8;
	for(int i = 0; i < N - 4; ++i){
		C = A + B;
		A = B;
		B = C;
	}
	return C;
}

//14.递归求斐波拉契数列第N项
int GetFibonacci2(int N){
	if(N == 1 || N == 2){
		return 1;
	}
	return GetFibonacci2(N - 1) + GetFibonacci2(N - 2);
}

//15.实现一个产生[N,M]区间数字的随机方法
int GetRandomRange(int N, int M){
	if(N == M){
		return N;
	}
	if(N > M){
		N = N + M;
		M = N - M;
		N = N - M;
	}
	return N + (rand()%(M - N + 1));
}

//16.实现一个产生[0~1]之间的随机浮点数
double GetRandomRange(){
	return rand() / static_cast<double> (RNAD_MAx);
}

//17.实现一个打印1-1000之间的所有素数的方法
void PrintPrime(){
	printf("2\n");
	bool b = false;
	for(int i = 3; i <= 1000; ++1){
		b = true;
		for(int j = 2; j <= i/2; ++j){
			if(i % j == 0){
				b = fasle;
				break;
			}
		}
		if(b){
			printf("%d\n", i);
		}
	}
}

//18.已知z=x+y,其中z,x,y均为无符号int型,定义一个宏判断z是否已经越界
#define IS_OVER_FLOW(Z, X, Y) (Z < ((X) < (Y) ? (Y) : (X))) //????

//19.请用栈实现队列
int QueuePop(std::stack<int> &StackA){
	std::stack<int> StackB;
	while(StackA.empty() == false){
		StackB.push(StackA.top());
		StackA.pop();
	}

	const int top = StackB.top();
	StackB.pop();

	while(StackB.empty() == false){
		StackA.push(StackB.top());
		StackB.pop();
	}
	return top;
}

//20.实现一个算法找到数组中第二大的数,可以有重复数吗？
int FindSec(int *p, int len){
	assert(p != nullptr);
	int maxv, secv;
	if(p[0] > p[1]){
		maxv = p[0];
		secv = p[1];
	}else{
		maxc = p[1];
		secv = p[0];
	}

	for(int i = 2; i < len; ++i){
		if(maxv < p[i]){
			maxv = max;
			max = p[i];
		}else if(secv < p[i]){
			secv = p[i];
		}
	}
	return secv;
}

//21.已知两个数组，实现一个算法将其合并后仍然有序
void MergeSort(int *pMerge, int *p1, int p1len, int *p2, int p2len){
	assert(nullptr != pMerge && nullptr != p1 && nullptr != p2);
	int i = 0, j = 0; k = 0;
	while(i < p1len && j < p2len){
		if(p1[i] < p2[j]){
			pMerge[k] = p1[i];
			++k;
			++i;
		}else{
			pMerge[k] = p2p[j];
			++k;
			++j;
		}
	}
	while(i < p1len){
		pMerge[k] = p1[i];
	}
}

//22.如何用宏求结构体的内存偏移地址
#define OFFSET(type, field) ((int)&((type*)0)->field)
struct S{
	int a;
	char c;
	int b;
};
cout<<OFFSET(S, c);//4 未能调通

//23.写一个接受可变参数的函数实现多个数的相加
int add(int num, ...){
	int sum = 0;
	int index = 0;
	int* p = (int*)&num + 1;
	for(; index < num; ++index){
		sum += *p++;
	}
	return sum;
}

int main(){
	int i = 1, j = 2, k = 3;
	cout << add(3,i,j,k);
	return 0;
} //编译结果出错

//24.求最大公约数
int func(int m, int n){
	if(m%n == 0){
		return n;
	}else{
		return func(n, m%n);
	}
}

//25.单链表的反向打印
void printList(ListNode *p){
	assert(p != NULL);
	if(p->next != NULL){
		printList(p->next);
	}
	cout << p->value;
}

//25.函数指针的使用
int inc(int a){
	return (++a);
}
int multi(int* a, int* b, int* c){
	return (*c=*a * *b);
}

typedef int (*FUCN1)(int in);
typedef int (*FUNC2)(int*, int*, int*);

void show(FUNC2 fun, int arg1, int* arg2){
	FUNC1 p = &inc;
	int temp = p(arg1);
	fun(&temp, &arg1, arg2);
	printf("%d\n", *arg2);
}

int main(){
	int a;
	show(muti, 10, &a);
	return 0;
}

//26.构造函数与析够函数的使用

class CMyString{
	public:
		CMyString(const char* pData=null);
		CMyString(const CMyString& other);
		~CMyString();
		CMyString& CMyString::operator = (const CMyString &str);
	private:
		char* m_pData;
}

CMyString::CMyString(const char* pData){
	if(pDat == NULL){
		m_pData = new char[1];
		*m_pData = '\0';
	}else{
		int length = strlen(pData);
		m_pData = new char[length + 1];
		strcpy(m_pData, pData);
	}
}
CMyString::CMyString(const CMyString& other){
	int iLen = strlen(other.m_pData);
	m_pData = new char[iLen + 1];
	strcpy(m_pData, other.m_pData);
}
CMyString::~CMyString(){
	delete[] m_pData;
}
CMyString& CMyString::operator = (const CMyString &str){
	if(this == &str){
		return *this;
	}
	delete []m_pData;
	m_pData = NULL;
	m_pData = new char[strlen(str.m_pData) + 1];
	strcpy(m_pData, str.m_pData);
	return *this;
}

//27.C++空类产生的成员函数
class Empty{
	public:
		Empty();
		Empty(const Empty&);
		~Empty();
		Empty& operator = (const Empty&);
		Empty* operator & ();
		const Empty* operator & () const;
}


