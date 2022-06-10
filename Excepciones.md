# Excepciones

Jerarquía de excepciones

- exception (`#include <exception>`)
    - logic_error (`#include <stdexcept>`)
        - domain_error
        - invalid_argument
        - length_error
        - out_of_bounds
    - runtime_error (`#include <stdexcept>`)
        - range_error
        - overflow_error
        - underflow_error
    - bad_alloc (`#include <new>`)

```c++
class logic_error : public exception {
  public:
    explicit logic_error(const string& what_arg); 
    ...
};

class domain_error : public logic_error { 
  public:
    explicit domain_error(const string& what_arg); 
    ...
};
```

Manejo con try-catch

```c++
try {
  ...
}
catch(out_of_bounds & oe) // catch out_of_bounds error
{...}
catch(logic_error & oe) // catch remaining logic_error family
{...}
catch(exception & oe) // catch runtime_error, exception objects
{...}
```