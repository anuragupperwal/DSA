#include<iostream>

using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Sort(int arr[], int arrLen){
    for(int i=0; i<arrLen; ++i) {
        int temp = arr[i];
        for(int j=0; j<arrLen; j++) {
            if(temp<arr[j]) swap(&arr[j], &arr[i]);
        }
    }
}

int main() {
    int N, T, resInd=0;
    cin>>T;
    int res[T];

    for(int i=0; i<T; ++i) {
        cin>>N;
        int nums[N+1];

        for(int j=0; j<N+1; ++j) cin>>nums[j];
        Sort(nums, N+1);

        for(int j=0; j<N+1; ++j) {
            if(nums[j] == nums[j+1]) res[resInd++] = nums[j];
        }
    }
    cout<<"\n";
    for(int i=0; i<resInd; ++i) cout<<res[i]<<"\n";
    return 0;
}