#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {
    int cntf=0,a[26];
    for(int i=0;i<26;i++)
        a[i]=0;
    for(int j=0;j<arr[0].length();j++){
        int curr=arr[0][j];
        int cnt=0;
        a[(int)(arr[0][j]-'a')]++;
        if(a[(int)(arr[0][j]-'a')]!=1)
            continue;
        for(int i=1;i<arr.size();i++){
            for(int k=0;k<arr[i].length();k++){
                if(arr[i][k]==curr){
                    cnt++;
                    break;
                }
            }
        }
        if(cnt==arr.size()-1)
            cntf++;
    }
    return cntf;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
