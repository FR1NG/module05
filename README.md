# module05
my 42 cpp piscine

in this module we are going to learn about exception classes, how to use them and how to create our own exception classes

## std::exception :

first of all we are goint to talk about the stander exception class `std::exception`, it is the base class for standard exception defined in the header `<exceprion>` defined as

```c++
    class exception {
        public:
            exception () throw();
            exception (const exception&) throw();
            exception& operator= (const exception&) throw();
            virtual ~exception() throw();
            virtual const char* what() const throw();
}
```

the keyword `throw()` is used after all member functions to ensure that the member function won't be throwing an exception while handling an exception.

### list of the standard library exception classes that are derived from  
std::exception

std::bad_alloc

std::bad_cast

std::bad_exception

std::bad_typeid

std::logic_error

std::domain_error

std::invalid_argument

std::length_error

std::out_of_range

std::runtime_error

std::overflow_error

std::range_error

std::underflow_error


 `thow` `try` and `catch`

