#ifndef ITER
#define ITER
template <typename T>
void iter (T* addr, int n, void (*f)(T&))
{
    for (int i=0; i < n; i++)
    {
        f(addr[i]);
    }
}
#endif