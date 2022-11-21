#include<iostream>
#include<string>
using namespace std;
// using template
template <class L>
class library 
{
	protected:
	L b;
	L c;
	L a;
public:
	library() {	}
	void get()
	{
		cout<<"no. of books- "<<endl;
		cin>>b;
		cout<<"no. of comics- "<<endl;
		cin>>c;
		cout<<"no. of articles- "<<endl;
		cin>>a;
		
}
// using operator overloading
 library operator --(int){
 	int cout=0;
 	b--;
 	a--;
 	c--;
 }
 // using virtual function
	virtual void display()
	{
				cout<<"no. of books- "<<b<<endl;
				cout<<"no. of articles- "<<a<<endl;
			}
};
template<class L>
// using inheritance
class book: public library<L>
{
	private:
		char x ;
		public:
		 void display ()
			{
				library<L>b;
				for(int i=0; i<b;i++){
				cout<<"name of book- "<<endl;
				cin>> x;	
					
				}
				
			}
	
};
template<class L>
// using inheritance
class comic : public library<L>
{
	private:
		char y ;
		public:
			 void display ()
			{
				library<L>c;
				cout<<"no. of comic- "<<c<<endl;
			}
			 void show ()
			{
				library<L>c;
				for(int i=0; i<c;i++){
				cout<<"name of comics- "<<endl;
				cin>> y;	
					
				}
				
			}
};
template<class L>
// using inheritance
class article: public library<L>
{
	private:
		char z ;
		public:
		void show ()
			{
				library<L>a;
				for(int i=0; i<a;i++){
				cout<<"name of articles- "<<endl;
				cin>> a;	
					
				}
				
			}
};

int main ()
{
 library<int> *a;
 library<int> b;
 a=&b;
 a->get();
 b--;
 a->display();
  book<string> x;
  a= &x;
  a->display();
 comic<string> y;
 a=&y;
 a->display();
 a->show();
 article<string> z;
 a=&z;
 a->show();
 return 0;
		 
   
   
}
