int floorSqrt(int n)
{
    long long  low = 1;
    long long  high = n;

    while (low <= high)
    {
        long long  mid = (low + high) / 2;
        long long  mul = mid * mid;
        if (mul = n)
        {
            low = mid +1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}
