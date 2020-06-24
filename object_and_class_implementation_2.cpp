#include<iostream>
 #include<conio.h>
 using namespace std; 
class temperature { public:   
  temperature(float c)  
 {  
 cout<< "Temperature in Celsius is "<<c<<endl; 
}
   virtual void calculate()=0;
}; 
class Fahrenheit:public temperature
 { public: 
    float f; 
    Fahrenheit(float c):temperature(c)  
   {       
  f=((c*9)/5)+ 32;   
  }  
   void calculate() 
    {       
  cout<<"Temperature in Fahrenheit is "<<f<<endl;  
   }
 };
 int main()
 {  
   Fahrenheit f1(27);   
  f1.calculate();
     getch();    
 return 0; 
} 
 
 