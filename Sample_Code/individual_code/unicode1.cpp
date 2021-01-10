#include <iostream>
#include <sstream>  // String stream
using namespace std; 

template <typename T> string str(const T& n){
    ostringstream stm;
    stm << n; // cout << n; 
    return stm.str() ;
}

#include "fcntl.h"
#include "io.h" 
#include <cstdio> 
void setUnicodeMode(){
   _setmode(_fileno(stdout), _O_U16TEXT); 
}

int main(){
    setUnicodeMode(); 
    wprintf(L"\u5468 \n");  
    return 0; 
}