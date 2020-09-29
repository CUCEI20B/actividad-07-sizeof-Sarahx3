#include <iostream>
#include <string>
using namespace std;

int main() {
    string tipo;
    
    getline (cin,tipo);

    if (tipo == "char"){
        cout<<sizeof(char)<<endl;
    }
    else if(tipo == "int"){
        cout << sizeof(int)<<endl;
    }
    else if(tipo == "short"){
        cout << sizeof(short)<<endl;
    }
    else if(tipo == "float"){
        cout << sizeof(float)<<endl;
    }
    else if(tipo == "double"){
        cout << sizeof(double)<<endl;
    }
    else if(tipo == "long"){
        cout << sizeof(long)<<endl;
    }

    return 0;
}