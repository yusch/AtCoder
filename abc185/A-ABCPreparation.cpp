#include<iostream>
int main(){
	int a, min;
	min = 100;
	for (int i = 0; i < 4; i++){
		std::cin >> a;
		if (a <= min){
			min = a;
		}	
	}
	std::cout << min << "\n";
	return 0;
}
