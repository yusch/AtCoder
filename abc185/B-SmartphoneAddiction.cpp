#include<iostream>
int n,m,t;
int main(){
	std::cin >> n >> m >> t;	//n最初電源容量 mカフェ行く回数 t外出した総時間
	int l = 0;	//最後充電時刻
	for (int i = 0; i < m; i++){ 
		std::cin >> a >> b;	//a出発時刻 b帰宅時刻
		n -= a;
		if (n <= 0){
			std::cout << "No";
			return;
		}
		n += b - a;
		l = b;
	}
	if (t - ){
		std::cout << "Yes\n";
	}else{
		std::cout << "No\n";
	}
	return 0;
}
