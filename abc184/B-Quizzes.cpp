#include <iostream>
#include <string>
#include <bits/stdc++.h>
int main(){
	long long N, X;
	std::cin >> N >> X;
	std::string S[N];

	for (int i=0; i < N; i++){
		std::cin >> S[i];
		if (S[i]=="o") X++;
		else {
			--X; X = std::max(0LL,X);
		}
	}
	std::cout << X << "\n"; 
}
