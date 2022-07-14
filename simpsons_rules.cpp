#include<iostream>
#include<cmath>
using namespace std;
double f(double x){
    return pow(x,3)+6;
}
double one_third(double a,double b){
double n=(b-a)*36;
double dx=(b-a)/n;
double first_sum=f(a)+f(b);
double even_sums=0;
double remaining_sums=0;
for (int i=1; i<n; i++){
    double xn=a+(i*(dx));
    if (i%2==0)even_sums+=f(xn);
    else remaining_sums+=f(xn);
}
return (dx/3)*(first_sum+2*even_sums+4*remaining_sums);
}
double three_eight(double a,double b){
double n=(b-a)*36;
double dx=(b-a)/n;
double first_sum=f(a)+f(b);
double multipleofthree_sums=0;
double remaining_sums=0;
for (int i=1; i<n; i++){
    double xn=a+(i*(dx));
    if (i%3==0)multipleofthree_sums+=f(xn);
    else remaining_sums+=f(xn);
}
return (dx*3/8)*(first_sum+2*multipleofthree_sums+3*remaining_sums);
}
int main(){
    double a=1,b=5;
    cout<<one_third(a,b)<<endl<<three_eight(a,b);
}