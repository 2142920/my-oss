/*
#include <iostream>
using namespace std;

void summean(int sum,double average);

int main() {
	int sum = 0;
	double average = 0.0;

	summean(sum, average);

	return 0;
}

void summean(int sum, double average) {
	int n;
	sum = 0;
	int count = 0;
	while (true) {
		cout << "자연수를 입력하시오" << endl;
		cin >> n;

		if (n >= 100) {

			break;
		}

		sum = sum + n;
		count = count + 1;
		average = sum / count;
	}
	cout << "합:" << sum << endl;
	cout << "평균: " << average<<endl;
}
*/
