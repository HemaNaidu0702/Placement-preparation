#include <iostream>
#include <bits/stdc++.h>

 int main() {
      
   }



// program to swap numbers without using temp

/* int a = 10, b = 20;

  std:: cout << a <<  '\t' << b;
 a = a + b;
 b = a - b;
 a = a - b;

  std:: cout << '\n' << a <<  '\t' << b;

*/


// program to print fibonacci series without recursion

/*     int n, n1, n2, n3;
  std:: cin >> n ;

  n1 = 0;
  n2 = 1;

   std::cout << n1 << '\t' << n2;

  for (int i = 2; i < n; i++) {
    n3 = n1 + n2;
    std::cout << '\t' << n3;

    n1 = n2;
    n2 = n3;
  }

*/


// program to print fibonacci series with recursion
/*   static int n, n1 = 0, n2 = 1, n3;

  void fibo(int n) {

    if (n>0) {

      n3 = n1 + n2;
      std::cout << n3 << '\t';
    n1 = n2;
    n2 = n3;
    fibo(n-1);
      }
  }


int main() {
  
  std:: cin >> n ;

   std::cout << n1 << '\t' << n2;
    fibo(n-2);
  }

*/



// program to print fibonacci series with recursion
/*  int n, flag = 0;
  std:: cin >> n ;

  for (int i = 2; i <= n/2; i++) {
    if (n%i == 0) {
       std:: cout << "not a prime number";
       flag = 1;
    }
  }

  if(flag == 0) {
    std:: cout << "prime number";
  }
*/




// palindrome     also armstrong
/*   int n, temp, sum =0, rem;
  
  std::cin >> n;
  temp = n;
  while(n>0) {
    rem = n%10;
    sum = sum * 10 + rem;
    n = n/10;
  }
   if(temp == sum) {
     std::cout<<"palindrome";
   }
  else {
     std::cout<<"not a palindrome";
  }

*/



//Reverse a string
/*     std::string a = "hello";

    for (int i = a.length(); i>=0; i--) {
      std::cout << a[i];
    }
*/


//count the number of odd and even digits in a number

/*     int n, even = 0, odd = 0, sum = 0, rem;
    std::cin >> n;

    while(n>0) {
      rem = n%10;
      sum = sum * 10 + rem;

        if (sum%2 == 0) {
          even ++;
         }
        else {
          odd++;
         }
      n = n/10;
    }
  std::cout <<"even: " << even;
  std::cout <<"odd " << odd;

*/


//frequency of a number

/*   int n, rem, sum = 0;
  int a[10]= {0};

  int count(int n) {
   while(n>0) {
     rem = n %10;
     

     a[rem]++;
     n = n / 10;
    }

    for(int i = 0; i < 10; i++) {
      if(a[i] > 0) {
        sum ++;
      }

    }
        return sum;
    }
   int main() {
 
   std::cin >> n;
   std::cout << count(n);
  
     }
*/


//sum of digits
 /*    int n, rem, sum = 0;
      std::cin>>n;
     while (n>0) {
       rem = n%10;
       sum += rem;
       n = n / 10;
     }
      std::cout<<sum;
*/

// strings arre equal (direct)
 /*     int flag = 0;
     std::string one, two;
     std::cin >> one >> two;

     if(one.length() != two.length()) {
       std::cout << "not equal";
     }
     else{
       for (int i =0; i < one.length(); i++ ) {
         if(one[i] == two[i])
           flag = 1;
           
       }
     }
      if (flag == 1) 
        std::cout << "equal";
      else
        std::cout<<"not equal";
*/

// check if strings are equal (compare method)

/*      int flag = 0, y;
     std::string one, two;
     std::cin >> one >> two;

        y = one.compare(two);
       if (y==0) {
         std::cout << "equal";
       }
       else {
         std::cout << "not equal";
       }
     */

// program to delete nth digit

/*     int num, n, rem, new_num = 0;

     std::cin >> num >> n;
     
     int len = log10(num) + 1;

      for(int i =0; num != 0; i++) {
        rem = num % 10;
        num = num / 10;

        if(i == (len-n))
          continue;
        else
          new_num = new_num * 10 + rem;
      }
      
      std::cout<<new_num;

*/