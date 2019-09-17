
    #include <iostream> 
    #include <cmath> 
 
    using namespace std; 
    int main() 
   { 
        double final,power,end_N = 1.0,e=1.0,x,n; 
        
        cout<< "x: ";          cin>> x;           cout<< "n: ";          cin>> n; 
        
        
        while (n>1){             power = pow(x,n);             end_N = end_N*n;            e=(power/end_N)+e;  n--; 
        }    
final =e+x;       
  cout<<"Truncation error Rn = "<< final<<endl; 
      return 0;    } 
