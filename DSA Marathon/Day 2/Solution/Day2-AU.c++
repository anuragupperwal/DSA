#include<iostream>

using namespace std;

int main() {
    int T, N, element, resInd=0;
    cin>>T;
    int result[T];
    for(int i=0; i<T; ++i) {
        int flag=-1;
        cin>>N;
        int A[N];

        for(int j=0; j<N; ++j) cin>>A[j];
        cin>>element;

        for(int j=0; j<N; ++j) {
            if(A[j] == element) flag = j;
        }
        result[resInd++] = flag;
    }
    cout<<"\n";
    for(int j=0; j<T; ++j) cout<<result[j]<<"\n";

    return 0;
}