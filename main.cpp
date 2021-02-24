#include <iostream>
using namespace std;
/*int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float d = b*b-4*a*c;
    if (d>0)
    {
        float x1 = ((-b+sqrt(d))/2*a);
        float x2 = ((-b-sqrt(d))/2*a);
        cout << "x1=" << x1 << ""<<"x2="<< x2;
    }
    else if (d<0)
    {
        cout << "немає коренів.";
    }
    else if (d==0)
    {
        float x = -b/2*a;
        cout << "x=" << x;
    }
    return 0;
}*/

/*int main()
{
    int n, i;
    bool Proste = true;
    cout << "Enter a number";
    cin >> n;
    for(i=2; i<= (sqrt(abs(n))); i++)
    {
        if(n%i == 0)
        {
            Proste = false;
            break;
        }
    }

    if(Proste)
    {
        cout << "кукусікі" << endl;
    }
    else
    {
        cout << "прівєт" << endl;
    }
    system("pause");
    return 0;
}
*/


    // using another variable
int main(){
    int a = 3, b = 2, c;
    c= a;
    a = b;
    b = c;

    // adding and subtracting
int main(){
    int a = 3, b = 2, c;
    a += b;
    b=a-b;
    a=a-b;
    // multiplication and division
int main(){
    int a = 3, b = 2, c;
    a*=b;
    b=a/b;
    a=a/b;
    //&& - conunctia, || - disunctia

}
*/
/*int main(){
    int a, b, c;
    cout<<"enter a b and c"<<endl;
    cin >> a>>b>>c;
    if (a<b && a<c){
        cout<<a;
        if(b<c){
            cout<<b;
            cout<<c;
        }
        else{
            cout<<c;
            cout<<b;
        }
    }
    else if(b<a && b<c){
        cout<<b;
        if(a<c){
            cout<<a;
            cout<<c;
        }
        else{
            cout<<c;
            cout<<a;
        }
    }
    else if(c<a && c<b){
        cout<<c;
        if(a<b){
            cout<<a;
            cout<<b;
        }
        else{
            cout<<b;
            cout<<a;
        }
    }
}
*/ //2.a
/*int minimum(int x, int y){
    if(x<y){
        return x;
    }
    else{
        return y;
    }
}
int maximum(int x, int y){

    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int a, b, c;
    cout<<"enter a b and c"<<endl;
    cin >> a>>b>>c;
    int max, middle, min;
    min = minimum(a, minimum(b,c));
    max = maximum(a, maximum(b, c));
    middle = a+b+c - min - max;
    cout<<min<<" "<<middle<<" "<< max<<endl;
}
 */ //2.b



/*
void main(){
    int* arr;
    int n = 0;
    int s
    cout << "n=";
    cin >> n
    //
    arr = new int[n];
    for (int i = 0; i<n; i++){
        cout<<"a[" << i << "]=";
        cin>> arr[i];
    }
    //
    s=0;
    for (int i = 0; i<n; i++) {
        s = s + *(arr + i);
    }
    //
    cout << "s=" << s << endl;
    system("pause")
}

void main(){
        int* arr;
        int n = 0;
        int p
        cout << "n=";
        cin >> n
        // proud
        p=1;
        for (int i = 0; i<n; i++){
            p=p*(i+1);
        }
        cout << " p ="<< p<< endl;

}*/

