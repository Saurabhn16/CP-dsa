#include <bits/stdc++.h>
using namespace std;
 
void computeLPSArray(string pat, int M, int* lps){
    // length of the previous longest prefix suffix
    int len = 0;
 
    lps[0] = 0; // lps[0] is always 0
 
    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if (len != 0) {
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(string pat, string txt){
    int M = pat.size();
    int N = txt.size();
 
    // create lps[] that will hold the longest prefix suffix
    int lps[M];
 
    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);
 
    int i = 0; // index for txt[]
    int j = 0; // index for pat[]

    while ((N - i) >= (M - j)) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
 
        if (j == M) {
            cout << "Found pattern at index " << i - j << endl;
            j = lps[j - 1];
        }
 
        // mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {
            if (j != 0){
                j = lps[j - 1];
            }
            else{
                i = i + 1;
            }
        }
    }
}

int main(){

    string s,t;
    cin >> s >> t;

    KMPSearch(s,t);

    return 0;
}