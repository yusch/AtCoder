#include<bits/stdc++.h>
int main(){
	long n;
	std::cin >> n;
	
	long count = 0;
	long sum = 0;

	std::vector<std::vector<long>> range(n, std::vector<long>(2));	//二次元配列を定義
	
	for (long i = 0; i < n; i++){
		std::cin >> range.at(i).at(0);
		std::cin >> range.at(i).at(1);
	}
	for (long i = 0; i < n; i++){
		count = (range.at(i).at(1) - range.at(i).at(0));
		for (long k = 0; k <= count; k++){
			sum = sum + range.at(i).at(0) + k;
		}
		count = 0;
	}
	std::cout << sum << std::endl;
	return 0;
}
