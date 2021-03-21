#define ull unsigned long long int

int Binary(int N) 
{ 
  
    ull B_Number = 0; 
    int cnt = 0; 
    while (N != 0) { 
        int rem = N % 2; 
        ull c = pow(10, cnt); 
        B_Number += rem * c; 
        N /= 2; 
  
        cnt++; 
    } 
  
    return B_Number; 
} 