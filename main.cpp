#include <iostream>

int main()
{
    int i_1 = 0, j_1 = 0, i_2 = 0, j_2 = 0;

    std::cout << "enter matrix 1 rows : ";
    std::cin >> i_1;
    std::cout << "enter matrix 1 columns : ";
    std::cin >> j_1;
    std::cout << "enter matrix 2 rows : ";
    std::cin >> i_2;
    std::cout << "enter matrix 2 columns : ";
    std::cin >> j_2;

    int matrix_1[i_1][j_1], matrix_2[i_2][j_2], res[i_1][j_2];

    // get user data
    for (int i = 0; i < i_1; i++)
    {
        for (int j = 0; j < j_1; j++)
        {
            std::cout << "enter matrix 1 row(" << i + 1 << ") column(" << j + 1 << ") number :";
            std::cin >> matrix_1[i][j];
        }
    }
    for (int i = 0; i < i_2; i++)
    {
        for (int j = 0; j < j_2; j++)
        {
            std::cout << "enter matrix 2 row(" << i + 1 << ") column(" << j + 1 << ") number :";
            std::cin >> matrix_2[i][j];
        }
    }

    // show user data
        std::cout << "/////////////////////////////////matrix1/////////////////////////////////" << std::endl;
    for (int i = 0; i < i_1; i++)
    {
        for (int j = 0; j < j_1; j++)
        {
            std::cout << matrix_1[i][j] << " ";
            if (j == j_1 - 1)
                std::cout << std::endl;
        }
    }

    std::cout << "/////////////////////////////////matrix2/////////////////////////////////" << std::endl;

    for (int i = 0; i < i_2; i++)
    {
        for (int j = 0; j < j_2; j++)
        {
            std::cout << matrix_2[i][j] << " ";
            if (j == j_2 - 1)
                std::cout << std::endl;
        }
    }
    // multiple
    for (int i = 0; i < i_1; i++)
    {
        for (int j = 0; j < j_2; j++)
        {
            int sum = 0;
            for (int k = 0; k < j_1; k++)
            {
                sum += matrix_1[i][k] * matrix_2[k][j];
            }
            res[i][j] = sum;
        }
    }
    std::cout << "/////////////////////////////////res/////////////////////////////////" << std::endl;
    for (int i = 0; i < i_1; i++)
    {
        for (int j = 0; j < j_2; j++)
        {
            std::cout << res[i][j] << " ";
            if (j == j_1 - 1)
                std::cout << std::endl;
        }
    }
    return 0;
}