#include<iostream>
#define MAX 20
using namespace std;
int Bool[MAX] = { 0 };
int A[MAX];
int N[MAX];
void xuat(int n) {
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}
 
void Try(int k, int n) {
	int i;
    for (i = 0; i < n; i++) {
        if (!Bool[N[i]]) {
            A[k] = N[i];
            Bool[N[i]] = 1;
            if (k == n-1)
                xuat(n);
            else
                Try(k + 1,n);
            Bool[N[i]] = 0;
        }
    }
}
 
int main() {
	int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    for(int i=0; i < n ; i++){
    cout <<"\nnhap phan tu thu "<<i+1<<": ";
    cin >> N[i];
    }
    Try(0,n);
}
