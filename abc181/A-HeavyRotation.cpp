#include<bits/stdc++.h>
int main(){
	int n;
	std::cin >> n;
	//2n:White 2n+1:Black
	
	if (n % 2 == 0){
		std::cout << "White" << std::endl;
	}else{
		std::cout << "Black" << std::endl;
	}
	return 0;
}
