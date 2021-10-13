//Mini Project:1
//CS 201
//Data structures
//Department of Computer Science and Engineering
//National Institute of Silchar
//Fibonacci Series
#include<stdio.h> 
  
int fib(int n) 
{ 
  int f[n+2];   // 1 extra to handle case, n = 0 
  int i; 
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  {
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 
int main () 
{ 
  int n; 
  scanf("%d",&n);
  printf("%d", fib(n)); 
  getchar(); 
  return 0; 
} 
