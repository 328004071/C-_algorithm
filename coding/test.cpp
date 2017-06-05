#include <iostream>
#include <string>
using namespace std;
/*
int add(int num, ...){
	int sum = 0;
	int index = 0;
	int* p = &num;
	for(; index < num; ++index){	
		sum += *(++p);
		cout << *p << endl;
	}
	return sum;
}

int main(void){
	int i = 1, j = 2, k = 3;
	cout << "sum:" << add(3, i, j, k) <<endl;
	return 0;
}
*/
int Sum(int nCount, ...){
	int nSum = 0;
	int* p = &nCount;
	for(int i = 0; i < nCount; ++i){
		cout << *(++p) << endl;
		nSum += *p;
	}
	cout << "Sum:"<< nSum << endl << endl;
	return nSum;
}
string SumStr(int nCount, ...){
	string str;
	int* p = &nCount;

	for(int i = 0; i < nCount; ++i){
		char* pTemp = (char*)*(++p);
		cout << pTemp << endl;
		str += pTemp;
	}

	cout << "SumStr:" << str << endl;
	return str;
}
int main(){
	Sum(3, 10, 20, 30);
	SumStr(5, "aa", "bb", "cc", "dd", "ff");
	//system("pause");

	return 0;
}
