int main()
{
    int x;
    int t;

    cout << "Enter test cases";
    cin >> t;

    while (t--)
    {
        cout << "Enter value of x" << endl;
        cin >> x;
        checkSmallValue(x);
    }
}