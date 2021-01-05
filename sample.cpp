#include<iostream>
#include <iomanip>
using namespace std;



int main()
{
	int C;
	int N;
	float average = 0;
	int NumofHigh = 0;
	cin >> C;
	float* Percent = new float[C];
	for (int i = 0; i < C; i++) {
		cin >> N;
		if (N < 1 || N>1000) {
			cout << "인원수 오류" << endl;
			return 0;
		}
		int* score = new int[N];
		for (int j = 0; j < N; j++) {
			cin >> score[j];
			average += score[j];
		}
		average = average / N;
		for (int k = 0; k < N; k++) {
			if (score[k] > average) {
				NumofHigh++;
			}
		}
		Percent[i] = NumofHigh;
		Percent[i] /= N;
		Percent[i] *= 100;
		average = 0;
		NumofHigh = 0;
	}
	for (int n = 0; n < C; n++) {
		cout << fixed << setprecision(3) << Percent[n] << "%" << endl;
	}
}