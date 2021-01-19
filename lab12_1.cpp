#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[],int n,double b[])
{
	double avg,sd,gm,hm,max,min,sum,sumsd=0,sumgm=1,sumhm;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	avg=sum/n;
	b[0]=avg;
	for(int i=0;i<n;i++)
	{
		sumsd=sumsd+pow(a[i],2);
	}
	sd=sqrt((sumsd/n)-avg*avg);
	b[1]=sd;
	for(int i=0;i<n;i++)
	{
		sumgm=sumgm*a[i];
	}
	gm=pow(sumgm,(double)1/n);
	b[2]=gm;
 	for(int i=0;i<n;i++)
	{
		sumhm=sumhm+1/a[i];
	}
	hm=n/sumhm;
	b[3]=hm;
	max = a[0];
    min = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    b[4]=max;
    b[5]=min;
    
}