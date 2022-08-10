#import <iostream>
int i, j, k, e[5][5];
main()
{
    for (; i++ < 3; j = 0)
        for (; j++ < 3; e[i - 1][j] ^= (k %= 2), e[i][j - 1] ^= k, e[i][j] ^= k, e[i][j + 1] ^= k, e[i + 1][j] ^= k)
            std::cin >> k;
    for (; j++ < 3; std::cout << '\n')
        for (i = 0; i++ < 3;)
            std::cout << !e[j][i];
}