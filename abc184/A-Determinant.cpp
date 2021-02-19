#include <iostream>
int main(){
	int a,b,c,d;
	
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;

	int ad,bc;
	ad = a * d;
	bc = b * c;

	std::cout << (ad - bc);
	std::cout << "\n";

	return 0;
}
