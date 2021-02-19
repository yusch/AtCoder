#include<bits/stdc++.h>
int main(){
	int s[2];
	int result = 0;
	std::cin >> s[0] >> s[1];
	if(s[0] <= s[1]){
		//s[1]の場合
		for(int i = 0; i <= 5; i++){
			result += s[1]%10;
			s[1] /= 10;  
		}
		std::cout << result << std::endl;
	}else{
		//s[0]の場合
		for(int i = 0; i <= 5; i++){
			result += s[0]%10;
			s[0] /= 10;  
		}
		std::cout << result << std::endl;
	}
	return 0;
}
