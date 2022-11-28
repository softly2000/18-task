/*------------------------------------------------*/
                //18-task TRUE                       
/*------------------------------------------------*/

#include <iostream>

using namespace std;

int main()
{
    int n = 9;
    int ptr;
    int a[n] = {6,7,8,9,12,34,45,56,45};
    int b[n] = {1,2,3,4,6,9,7,0,12};
    cout << "a -- ";
    for(int i = 0; i < n; i++)cout << a[i];
    cout << endl;
    cout << "b -- ";
    for(int i = 0; i < n; i++)cout << b[i];
    cout << endl;
    for(int i = 0; i < n; i++) {
        
        ptr = a[i];//В ptr храню копию значение a[i]
        a[i] = b[i];//тут значени b[i] присваиваю  a[i]
        b[i] = ptr;//тут я из ptr достаю значение и присваиваю b[i]
        //if(a[i] < b[i]);//Условия - не нужно
    }
    cout << "\n////////get////////\n" << endl;
    cout << "a -- ";
    for(int i = 0; i < n; i++)cout << a[i];
    cout << endl;
    cout << "b -- ";
    for(int i = 0; i < n; i++)cout << b[i];

    return 0;
}


/*-------------------------------------------------*/
                          //18-task
/*-------------------------------------------------*/


#include <iostream>

using namespace std;

int main() 
{ 
    int n = 9;
    int begin = 0;
    int ptr;
    int a[n] = {1,2,3,4,5,6,7,8,9};
    int b[n] = {9,8,7,6,5,4,3,2,1};
    cout << "\na -- ";
    for(int i = 0; i < n; i++)cout << a[i];
    cout << "\n";
    cout << "b -- ";
    for(int i = 0; i < n; i++)cout << b[i];
    cout << "\n";
    
    cout << "\n///////////get////////////\n\n";
    
    for(int i = begin-1; i < n; i++) {
        
        ptr = a[i];
        a[i] = a[n - 1 - i]; 
        a[n - 1 - i] = ptr;
        //if((i+1) > (n - 1 - i))break;
        ptr =  b[i];
        b[i] = b[n - 1 - i]; 
        b[n - 1 - i] = ptr;
        if((i+1) > (n - 1 - i))break;
    }
    
    cout << "a -- ";
    for(int i = 0; i < n; i++)cout << a[i];
    cout << "\n";
    cout << "b -- ";
    for(int i = 0; i < n; i++)cout << b[i];
    
    return 0;
}    