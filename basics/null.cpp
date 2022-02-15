double *pd = nullptr;
Link <Record> *lst = nullptr; // pointer to a Link to a Record
int x = nullptr; // error : nullptr is a pointer not an integer

int count_x(const char *p, char x) {
    if (p == nullptr)
        return 0;
    int count = 0;
    for (; *p != 0; ++p)
        if (*p == x)
            ++count;
    return count;
}