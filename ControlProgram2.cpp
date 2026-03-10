#include <iostream>
using namespace std;

float Rata_rata(float a, float b){
    return (a+b)/2;
}

string status_lulus(float r){
    if (r >= 60)
        return " lolos";
    else if (r >= 50)
        return " lolos dipertimbangkan";
    else if (r >= 40)
        return "lolos tetapi matrikulasi 1 tahun";
    else if (r >=30)
        return "tidak lolos";
}

