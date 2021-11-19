// Initialization List

/*
Initialization list is used to intialize the data members directly.

There are two ways to we can initialize the data members.
1. Assignment operator
2. Initialization List

There is hardly any difference between both ways of initializaton.
But using intialization list insted of assignment operator in body saves time 
when data member are class type that have complex initializations.

Traditional way to construct a object:-
when we instanciate a object, data members are initialized
sometthing like -> m_data {}

then body of constructor is executed and we assign the value in body.
m_data = 5;

Few Examples:- 
a.  If data member is const type, means it is not changeable after the object has been constructed.
    Then data members value can be intialized in the initilization list.

    For const data member if a variable is initialized, and in body we try to execute assignment operator 
    it will throw error.

b. If a data member is a class type with parametric constructor then it must be intialised in initialization list.
    It will save time as while initializing with default value we can directly initialize with value which we want to.

Traditional way:- :m_data(idata){}

From C++ 11 onward:-
:m_data{idata}{}. --> Initialization list

Use braces instead of parantheses is introduced in C++ 11.
It is a part of large effort to provide a uniform syntax for initialization everywhere.

Generally, {} is used anywhere to initialize. 

{} is give precendce over () from C++ 11 onward-- > Usefule when we intialise vector
vector<int> vec1 (12); --> vector of size 12 with each elememt initailized to 0
vector<int> vec2 {12}; --> vector of size 1, element is initalized with value 12.




*/


class Cpp_InitialisationList
{
    public:
        /*
        Explicit constructor is used to avoid behind the scene type conversion.
        other wise it will lead to hard to find bugs.

        Cpp_InitialisationList obj;
        obj = 5;

        After using explicit, it cretaes a temporary object and perform an assignment operator which will not work and 
        start showing error.

        Cpp_InitialisationList temobj = 5;
        obj = tempobj; --> it will show error
        */
        explicit Cpp_InitialisationList(int idata = 0):m_data{idata}{} // {} will work on C++ 11 onward othereise m_data(idata)

        /*
        ** Const member function **
        A memeber function that examines but does not change the state of its object is an accessor.
        A member function that changes the state is mutator.

        By default all member functions are mutators
        To make a member function mutator prefer to add 'const' keyword after closing parenthesis.

        By doing this, if we try to change the state of obect inside accessor, compiler will giver error.
        */
        int GetData() const
        {
            return m_data;
        }

        void SetData(int idata)
        {
            m_data = idata;
        }

    private:
        int m_data;
    protected:
};

int main()
{
    Cpp_InitialisationList obj1 = 12;// error, No viable conversion from int to Cpp_InitialisationList
                                     // If we remove the explicit keyword from costructor error will go away
                                     // as there will be no type checking
    Cpp_InitialisationList obj2(); // INCORRECT, This will treated as function
    
    // Parametric constructor, both are same
    Cpp_InitialisationList obj3(12);
    Cpp_InitialisationList obj4{12};

    // Zero parameter constructor
    Cpp_InitialisationList obj5;
    Cpp_InitialisationList obj6{};
    return 0;
}