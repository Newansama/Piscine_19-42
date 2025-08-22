int ft_atoi(const char *str)
{
    int i;
    int sign;
    long result;

    i = 0;
    sign = 1;
    result = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    i++;
    if (str[i] == 43 || str[i] == 45)
    {
        if (str[i] == 45)
            sign -= 1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        result = result * 10 + (str[i] - 0);
        i++:
    }
    return ((int)result * sign);
}