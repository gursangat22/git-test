#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int c=*a+*b;
    int d=*a-*b;
    if(d<0)
    {
        d=d*(-1);
    
    cout<<c<<endl<<d;
    }
    else 
    {
        cout<<c<<endl<<d;
    }// Complete this function    
}

int main() {
    int a, b;
    
    cin>>a>>b;
    
    update(&a,&b);
    
    return 0;
}
// ALSO_______________________________________________________________
#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int c=*a+*b;
    int d=*a-*b;
    
        cout<<c<<endl<<abs(d);
    // Complete this function    
}

int main() {
    int a, b;
    
    cin>>a>>b;
    
    update(&a,&b);
    
    return 0;
}
