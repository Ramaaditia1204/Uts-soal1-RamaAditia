// menghitung energikinetik andika
#include <iostream>
using namespace std;
void hitungEK(float massa, float kecepatan) {
	float energikinetik = 0.5 * massa * kecepatan * kecepatan;
	cout << "energikinetik:" << energikinetik << "j" << endl;
}
int main() {
	float massa, kecepatan;
	//input massa
	cout << "massa(kg):";
	cin >> massa;
	//input kecepatan 
	cout << "kecepatan (m/s):";
	cin >> kecepatan;
	//penjumlahan
	hitungEK(massa, kecepatan);
	return 0;
}