#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {
    int sf=0;
    if(s.length()%2==0){
        int s1=0,s2=0;
        for(int i=0;i<s.length()/2;i++){
            s1=(int)(s[i]-'a');
            s2=(int)(s[s.length()-1-i]-'a');
            if(s2>=s1)
                sf+=(s2-s1);
            else
                sf+=(s1-s2);
        }
    }
    else{
        int s1=0,s2=0;
        for(int i=0;i<s.length()/2;i++){
            s1=(int)(s[i]-'a');
            s2=(int)(s[s.length()-i-1]-'a');
            if(s2>=s1)
                sf+=(s2-s1);
            else
                sf+=(s1-s2);
        }
    }
    return sf;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
