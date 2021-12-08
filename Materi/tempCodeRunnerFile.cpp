 for (outer = iBaris; outer >= 1; outer--)
    {
        for (inner = outer; inner <= iBaris; inner++)
        {
            cout << " ";
        }
        for (inner = 1; inner < outer; inner++)
        {
            cout << "*";
        }
        cout << "\n";
    }