#include <bits/stdc++.h>
using namespace std ;

vector<int> concatenateArrays(vector<int>& A, vector<int>& B) {
    vector<int> C;
   
    for (int num : B) {
        C.push_back(num);
    }

    for (int num : A) {
        C.push_back(num);
    }

     for (int num : C) {
      cout << num << " " ;
    }


}

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }
   concatenateArrays(B, A);

    // Print the concatenated array C
    // for (int i=0; i<N+N ; i++) {
    //     cout << result[i] << " ";
    // }

    return 0;
}
