
/////Wczytać dane rzeczywiste do tablicy A[n][n] (n - stała). Każdy element  na głównej przekątnej zastąpić wartością większą
// z dwu sum: sumy elementów w wierszu i sumy elementów w kolumnie,
//na przecięciu których leży ten element przekątnej. Na koniec co drugi element tej przekątnej  zapisać  do pliku "nowa_p.txt".

int main()
{
    const int n = 9;
    double A[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int wiersz = 0; wiersz < n; wiersz++)
            sum1 += A[wiersz][i];
        for (int kolumna = 0; koluman < n; kolumna++)
            sum2 += A[i][kolumna];

        if (sum1 > sum2)
            A[i][i] = sum1;
        else if (sum2 > sum1)
            A[i][i] = sum2;
    }

    ofstream plk("nowa.txt");
    if (!plk.good())
    {
        cout << "Blad wczytania pliku.";
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            plk << setw(10) << A[i][i];
    }

    plk.close();

    //// Wczytywać ciąg liczb całkowitych  aż do wczytania liczby należącej do przedziału <a, b> (a, b - stałe).
    // Wydrukować najmniejszą  wczytaną  liczbę ciągu,  średnią wczytanych liczb dodatnich oraz ilość wczytanych  liczb dwucyfrowych.

    int a = 5;
    int b = 15;
    int najmniejsza, srednia, dwucyfrowa, liczba;
    int WaroscDod, IloliczDod;
    int IloDwu = 0;
    int main()

    {
        do
        {
            cin << liczba << endl;
            if (liczba < najmniejsza)
                najmniejsza = liczba;
            if (liczba > 0)
            {
                WaroscDod = WartoscDoD + liczba
                                             IloLiczDod = IloLiczDod + 1 srednia = WartoscDod / IloLiczDod
            }
            if (liczba >= 10 && <= 99 || liczba <= -10 && >= -99)
                IloDwu = IloDwu + 1

        } while (liczba < a && liczba > b)

            Return 0;
    }

    //