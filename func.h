using namespace std;
char filstyle(){
    char ch;
    cin >> ch;
    while (ch != 'c')
    {
        cout << "Invalid symbol,try again: ";
        cin >> ch;
    }
    return ch;
}