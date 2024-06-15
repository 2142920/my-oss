
#include <iostream>
using namespace std;

void addh(int n);
void addj(int n);

int main() {
	int n;
	cout << "정수를 입력하시오:";
	cin >> n;

	if (n % 2 == 0 && n < 50) {
		addh(n);
	} 
	else if (n < 50) {
		addj(n);
	}
	else {
		cout << "입력된 정수가 50보다 큽니다.";
	}
	return 0;
}

void addh(int n) {
	int i,sum1=0;
	for (i = 0; i <= n; i++)
		if (i % 2 == 0)
			sum1 += i;

	cout << "합계는 " << sum1 << "입니다.";
}

void addj(int n) {
	int i, sum2 = 0;
	for (i = 0; i <= n; i++)
		if(i%2!=0)
			sum2 += i;

	cout << "합계는 " << sum2 << "입니다.";
}
