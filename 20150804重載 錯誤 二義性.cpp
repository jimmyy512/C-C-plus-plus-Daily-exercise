#include <iostream>
using namespace std;
class location
{
	private:
		int x,y;
	public:
		void init(int x=0,int y=0); //缺省參數 若傳進值沒初始化 就會初始化成這裡所規定得值 
		int Value(){return x;};			//重載函數 名子雖相同但是功能不同 
		void Value(int value=0){x=value;}; //錯誤  
};
int main()
{
	location A; 	
	cout<<A.Value();
}
