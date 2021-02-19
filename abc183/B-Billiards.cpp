#include<bits/stdc++.h>
int lnprm( double *pt1, double *pt2, double *a, double *b, double *c )
{
	double  xlk, ylk, rsq, rinv;
	double  accy = 1.0E-15;

	xlk = pt2[0] - pt1[0];
	ylk = pt2[1] - pt1[1];
	rsq = pow(xlk, 2.0) + pow(ylk, 2.0);

	if(rsq < accy){
		return (-1);
	}else{
		rinv = 1.0 / sqrt(rsq);
		*a = -ylk * rinv;
		*b = xlk * rinv;
		*c = (pt1[0] * pt2[1] - pt2[0] * pt1[1]) * rinv;
	}  /* end if */

	return (0);
}  /* lnprm */
int main(){
	double pt1[2], pt2[2], a, b, c;
	double y;
	
	std::cin >> pt1[0] >> pt1[1] >> pt2[0] >> pt2[1];
	pt2[1] = -pt2[1];	//pt2のy座標をマイナスに変換
	if (lnprm(pt1,pt2, &a, &b, &c)){
		std::cout << "Error" << std::endl;
	}else{
		y = -(c / b);
		std::cout << std::fixed << std::setprecision(10) << y << std::endl;
	}
	return 0;
}
