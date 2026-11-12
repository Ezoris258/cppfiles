#include <bits/stdc++.h>
using namespace std;

struct stu
{
    string name;
    int year, month, day, shun;
    bool operator<(const stu &other) const
    {
        if (year != other.year)
            return year < other.year;
        if (month != other.month)
            return month < other.month;
        if (day != other.day)
            return day < other.day;
        return shun > other.shun;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<stu> student(n);
    for (int i = 0; i < n; i++)
    {
        cin >> student[i].name >> student[i].year 
            >> student[i].month >> student[i].day;
        student[i].shun = i;
    }
    sort(student.begin(), student.end());
    for (auto i : student)
    {
        cout << i.name << '\n';
    }

    return 0;
}