#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	const auto& q = n / 6;
	const auto& r = n % 6;

	auto minA = int{ 1'000'000'007 };
	auto minB = int{ 1'000'000'007 };
	while (0 < (m--)) {
		int a, b;
		cin >> a >> b;

		if (a < minA) {
			minA = a;
		}

		if (b < minB) {
			minB = b;
		}
	}

	auto minv = int{ 1'000'000'007 };
	const auto& v1 = (q + 1) * minA;
	if (v1 < minv) {
		minv = v1;
	}

	const auto& v2 = q * minA + r * minB;
	if (v2 < minv) {
		minv = v2;
	}

	const auto& v3 = n * minB;
	if (v3 < minv) {
		minv = v3;
	}

	cout << minv;

	return 0;
}