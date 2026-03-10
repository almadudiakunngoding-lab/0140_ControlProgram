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
int main (){
    float nilBI,nilMT,rerata;
    string status;

    cout <<"masukkan nilai bahasa inggris =";
    cin >> nilBI;
    cout <<"masukkan nilai matematika =";
    cin >> nilMT;

    //rerata = (nilBI+nilMT)/2;
    //if (rerata >= 60)
    //  status = "lolos";
    //else
        //status = "gagal";
    rerata = Rata_rata(nilBI,nilMT);
    //status = status_lulus(rerata);

    cout << "Status kelulusan = "<<status_lulus(rerata)<<" ,dengan nilai rerata = "<<rerata<<endl;
}