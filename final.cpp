q1 a
# include<iostream>
using namespace std;
void Createarray(int a[],int &size){
cin>>size;
cout<<"enter"<<size<<"elements:"<<endl;
for(int i=0;i<size;i++){
cin>>a[i];}
cout<<"array created successfully";

q1b #include<iostream>
using namespace std;
void displayarray(int a[],int size){
cin>>size;
cout<<"the current array is:";
for(int i=0;i<size;i++){
cout<<"a[i]<<endl;
}
}

 q1c #include<iostream>
using namespace std;
int main () {
int a[10]={1,2,4,5};
int size=5;
int pos=3;
int ele=3;
for(int i=size;i>=pos;i--){
a[i]=a[i-1];}
a[pos]=ele;
cout<<"array after insertion:";
for(int i=0;i<n;i++){
cout<<"a[i]<<endl;
return 0;
}
q1 d #include<iostream>
using namespace std;
int main (){
int a[10]={1,2,3,4,5};
int n=5;
in pos=3;
int ele=3;
for(int i=pos-1;i<n-1;i++){
a[i]=a[i+1];
}
cout<<"array after deletion:";
for(int i=0;i<n-1;i++){
cout<<a[i]<<endl;
return 0;
}

q1e linear search
#include <iostream>
using nameapace std;
int main() {
int a[10]={1,2,3,4,5};
int n=5;
cout<< "element to be searched:";
int tgt;
cin>>tgt;
bool found =0
for(int i=0;i<5:i++){
if(a[i]=tgt){
cout<<"element found";
found=1;
break;
}
}

if(!found){
cout<<"element not found"<<endl; }
return 0; 
}





q2e
#include<iostream>
using namespace std;
int main() {
int a[i]={1,2,3,3,5};
int n=5;//current size
int m=0;//size after duplicate
for(int i=0;i<n;i++){
bool duplicate=false;
for(int j=0;j<m;j++){
if(a[i]==a[j]){
duplicate=true;
break;}
}
if(!duplicate){
a[m]=a[i];
m++;
} 
}
cout<<"array after removing duplicates"; 
for(int i=0;i<m;i++){
cout<<a[i]<<endl;
}
return 0;
}

q3 # include<stdio.h>
int main(){
int i;
int arr[5]={1};
for(i=0;i<5;i++){
printf("%d",arr[i]);
return 0;
}
output =10000
Q4 
# include <iostream>
using namespace std;
int main() {
int a[5]={1,2,3,4,5};
for(int i=0;i<n/2;i++){
int temp=a[i];
a[i]=a[n-i-1];
a[n-i-1]=temp;
}
cout<<" reversed array:";
for(int i=0;i<n;i++){
cout<<a[i]<< endl;
return 0;
}
 q4 b
#include <iostream>
using namespace std;

int main()
{

    int a, b, c, d;
    cout << "enter number of rows for Matrix 1: ";
    cin >> a;
    cout << "enter number of columns for Matrix 1: ";
    cin >> b;

    cout << "enter number of rows for Matrix 2: ";
    cin >> c;
    cout << "enter number of columns for Matrix 2: ";
    cin >> d;
    if (b != c)
    {
        cout << "Matrix Multiplication not valid";
        return 0;
    }
    int arr[100][100] = {0};
    int brr[100][100] = {0};
    int ans[100][100] = {0};
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> brr[i][j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < d; k++)
            {
                ans[i][k] += arr[i][j] * brr[j][k];
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
q4 c
#include <iostream>

using namespace std;



int main()

{

    int a, b;



    cout << "enter number of rows for Matrix 1: ";

    cin >> a;

    cout << "enter number of columns for Matrix 1: ";

    cin >> b;



    int arr[100][100] = {0};

    for (int I = 0; I < a; I++)

    {

        for (int j = 0; j < b; j++)

        {

            cin >> arr[I][j];

        }

    }



    int brr[100][100] = {0};



    for (int I = 0; I < a; I++)

    {

        for (int j = 0; j < b; j++)

        {

            brr[j][I] = arr[I][j];

        }

    }



    for (int I = 0; I < b; I++)

    {

        for (int j = 0; j < a; j++)

        {

            cout << brr[I][j] << " ";

        }

        cout << endl;

    }



    return 0;

}

# include< iostream>
using namespace std;
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int r=3,c=3;
for(int i=0;i<r;i++){
 int rowsum=0;
for(int j=0;j<c;j++){
rowsum+=a[i][j]
}; 
} cout<< "sum of row"<<i+1<<" "<<rowsum<< endl; 
}
for(int j=0;j<c;j++){
int colsum=0;
for(int i=0;i<r;j++){
colsum+=a[i][j];
}
cout<<"sum of col"<<j+1<<""<<colsum<< endl;
} 
return 0;
}







