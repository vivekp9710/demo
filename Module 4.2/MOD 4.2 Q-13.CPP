//wap to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;
class A{
	
	private:
		int a,b;
		public:
			A(){
				
				cout<<"a :";
				cin>>a;
				cout<<"b :";
				cin>>b;
			}
			friend void max(A obj);
			
		
};
         void max(A obj){
         	
         	int max;
         	
         	max=obj.a>obj.b?obj.a:obj.b;
         	
         	cout<<"max number :"<<max;
		 }
		 
		 
		 int main(){
		 	A obj2;
		 	max(obj2);
		 	
		 	
		 	
		 }
