#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    int n;
    double sum,SS;
    string textline;
    while (getline(source,textline)){
        n++;
        sum+=atof(textline.c_str());
        SS+=atof(textline.c_str())*atof(textline.c_str());
    }
    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/n << endl;
    cout << "Standard deviation = " << sqrt(1.0/n*SS-sum*sum/n/n);
}