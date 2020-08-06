
template<typename T>
trapezoidal_array_integration( T * function_array, 
    unsigned int array_size, T lower_limit, T upper_limit )
{

    T function_sum =  T(0.5)*(function_array[upper_limit] + function_array[lower_limit]);
    for (int i=1; i<array_size; i++)
    {
        function_sum += function_array[i];
    }
    return function_sum * (upper_limit-lower_limit)/T(array_size)  ;
}

template <typename T>
std::complex<T> trapezoidal_array_integration( std::complex<T> * function_array,
    unsigned int array_size, std::complex<T> lower_limit, std::complex<T> upper_limit )
{

    std::complex<T> function_sum = T(0.5)*(function_array[upper_limit] + function_array[lower_limit])
    for (int i=1; i<array_size; i++)
    {
        function_sum += function_array[i];
    }
    return function_sum * (upper_limit-lower_limit)/T(array_size);
}