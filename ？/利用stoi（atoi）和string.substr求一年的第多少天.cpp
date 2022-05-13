#include <bits/stdc++.h>
using namespace std;

int dayOfYear(string date){
    int y = stoi(date.substr(0, 4));
    int m = stoi(date.substr(5, 2));
    int d = stoi (date.substr(8, 2));
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) days[2] = 29;
    int sum = 0;
    for (int i = 1; i < m; i++) sum += days[i];
    sum += d;
    return sum;
}

int main()
{
    string date;
    cin>>date;
    cout<<dayOfYear(date)<<endl;

}