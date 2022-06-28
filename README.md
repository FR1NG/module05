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


to make our exception class we have to derive it publicly from `std::exception`
# example :

```c++
#include <exception>

class GradeTooHighExceptionClass : std::exception{

    public:
        const char*   what() const throw() {
            return "your error message";
        };
};

```

then we have to overload the `what()` member function , the function to describe what's happening  

# how to throw an exception :

to throw an exception we use the keyword `throw` 

to catch it we use `try` `catch` syntax, example bellow.

 ```c++
    void myFunction(int grade)
{
    if (grade < 0)
        throw GradeTooHighExceptionClass;
    else
        std::cout << "all good" << std::endl;
}

int main()
{
    try {
        myFunction(-1);
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
 ```

int the function above if the grade in less than 0 we will throw and exception, than in the main function we give `myFunction` -1 as argument than we catch it using the keyword catch.
our programme will print `your error message` followed by a new line.

if we use a positive value of grade the function will run and no exception will be thrown, our programme will print `all good` followed by a new line.

