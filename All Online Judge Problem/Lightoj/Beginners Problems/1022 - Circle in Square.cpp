#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,Case=0;
    cin>>t;
    while(t--)
    {
        double r,sarea,carea;
        Case++;
        cin>>r;
        sarea=(2*r)*(2*r);
        carea=2 * acos (0.0)*r*r;

        printf("Case %d: %.2lf\n",Case, sarea - carea);
    }
}
