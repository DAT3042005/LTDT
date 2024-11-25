#include <iostream> 
#include <stack>
using namespace std;
int main() {
    stack<int> S;
    S.push(1);
    S.push(5);
    S.push(8);
    S.push(-2);
    S.push(3);
    S.pop();
    cout<<"in ra phan tu tren cung: "<<S.top()<<endl;
    S.pop();
    S.pop();
    cout<<"\nin ra cac phan tu con lai:";
    while (!S.empty()) {
     cout << S.top() <<" ";
     S.pop();
    }
    cout<<endl;
}
   
        
        
        
        
        
        
        
        
    
    

   
    
   











