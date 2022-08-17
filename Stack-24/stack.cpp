#include<iostream>
using namespace std;

class Stack{
    private:
    int stk[100],top=-1;
    public:

    bool isfull()
    {
        return (top==99)?true:false;
    }
    void push(int val)
    {
        if(isfull())
        cout<<"overflow"<<endl;
        else
        {
            top++;
            stk[top]=val;
        }
    }


    bool isempty()
    {
        return (top==-1)?true:false;
    }
    int pop()
    {
        if(isempty()){
        cout<<"underflow"<<endl;
        return -1;
        }
        else{
            int val=stk[top];
            top--;
            return val;
        }
    }


    void display()
    {
        for(int i=0;i<=top;i++)
        cout<<stk[i]<<endl;
    }
};
int main()
{
      Stack obj;


      cout<<"1 for push"<<endl;
      cout<<"2 for pop"<<endl;
      cout<<"3 for display"<<endl;
      cout<<"4 for exit"<<endl;
      int ch;
      do{
        cout<<"your choice"<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
         {
            cout<<"enter value"<<endl;
            int val;
            cin>>val;
            obj.push(val);
            break;
         }
        case 2:
             cout<<obj.pop();
             break;
        case 3:
            obj.display();
            break;
        case 4:
            break;
        
          default:
            cout<<"unvalid choice is entered"<<endl;
        }
      }
        while(ch!=4);
        {
            cout<<"code is terminated"<<endl;
        }

      return 0;
}
