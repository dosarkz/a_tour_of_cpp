bool accept() {
    cout << "Do you want to proceed (y or n)?\n"; // wr ite question
    char answer = 0; // initialize to a value that will not appear on input
    cin >> answer; // read answer
    if (answer == 'y')
        return true;
}