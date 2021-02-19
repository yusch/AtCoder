#include<bits/stdc++.h>
int main(){
	int n;
	std::cin >> n;
	
	int a[n];
	for (int i = 0; i < n; i++){
		std::cin >> a[i];
	}//入力の読み込み

	int max = 0;
	int gcd = -1;

	for (int i = 2; i < 1000; i++){
		int cnt = 0;
		for (int j=0; j < n; j++){
			if (a[j] % i == 0){
				cnt++;
			}
		}
		if (max < cnt){
			max = cnt;
			gcd = i;
		}
	}
	std::cout << gcd << std::endl;
	return 0;
}
