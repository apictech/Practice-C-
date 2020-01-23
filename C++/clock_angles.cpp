#include<iostream>
using namespace std;
int min(int x, int y) { 
	return (x < y)? x: y; 	
} 

int calc_angle(double h, double m) { 
	if (h <0 || m < 0 || h >12 || m > 60) 
		printf("Wrong input"); 

	if (h == 12) h = 0; 
	if (m == 60) m = 0; 

	int hour_angle = 0.5 * (h * 60 + m); 
	int minute_angle = 6 * m; 
 
	int angle = abs(hour_angle - minute_angle); 

	angle = min(360 - angle, angle); 

	return angle; 
} 
int main(){
    int t;
    cin>>t;
    for(t;t>0;t--){
        double h, m;
        cin>>h;
        cout<<":";
        cin>>m;
        cout<<"\n";
        cout<<calc_angle(h,m)<<endl;
       }
       return 0;
}