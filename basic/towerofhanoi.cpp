#include <bits/stdc++.h>
using namespace std;
void help(int n, char source, char auxilary, char destination)
{
    if (n == 1)
    {
        cout << "move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    help(n - 1, source, destination, auxilary);
    cout << "move disk " << n << " from " << source << " to " << destination << endl;
    help(n - 1, auxilary, source, destination);
}
int main()
{
    int n = 3;
    char source = 'A';
    char auxilary = 'B';
    char destination = 'C';
    help(n, source, auxilary, destination);

    return 0;
}