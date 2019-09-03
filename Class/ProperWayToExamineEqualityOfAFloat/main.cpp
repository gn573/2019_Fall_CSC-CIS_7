/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float pi,apprxPi;
    float epsilon;
    
    //Input or initialize values Here
    pi=4*atan(1);
    apprxPi=1.0f*355/113;
    
    //Process/Calculations Here
    epsilon=pi-apprxPi;
    
    //Output Located Here
    cout<<"Math PI   = "<<pi<<endl;
    cout<<"Approx Pi = "<<apprxPi<<endl;
    cout<<"Epsilon i.e. difference = "<<epsilon<<endl;
    
    //Test for Equivalence
    float tol=1e-6f;
    cout<<"Proper way to test a float"<<endl;
    if(-tol<epsilon&&epsilon<tol)cout<<"They are equivalent"<<endl;
    else cout<<"The approximation is not equivalent"<<endl;
    cout<<"Improper of testing a float"<<endl;
    if(pi==apprxPi)cout<<"They are equivalent"<<endl;
    else cout<<"The approximation is not equivalent"<<endl;

    //Exit
    return 0;
}