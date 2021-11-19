//----- INFOS ----
// Class consists of members --> data or functions
// Functions are called member function or methods
// data are called data members or istance variable
// Each instance of class is called INSTANCE.
// data member of object can be static or non-static
// Object contain only non-sataic data in class.
// Member functions are called on object.

// We have controls on visibility/accessibility of data and function.
// there are three labels: Public, Private and Protected

// Public:-
// A public member may be accessed by any method in any class.

// Private:-
// A private member restrict access to internal representation of object 
// Generally, keeping data members as private is a good practice.
// If someone really wants to have data members we can define Accessors and mutators functions on class.
// Accessor function should be kept public, mutator function may or may not be public depending on the requirement
// if modification of data is not not allowed from outside mutators will be kept private.
// Accessors and mutators are also commonly known as getters and setters respectively.

// A memeber function that examines but does not change the state of its object is an accessor.
// A member function that changes the state is mutator

// Protected:-
// A protected member restrict access to internal represenation of obejct but it allows a child class
// to access and modify the representation of class.
// In General, if we want to use members inside child or derived class we keep it in protected section of class.

// These labels are used to hide details from user.
// As user do not need to know internal details of implementation


// In CPP, if we do not define labels , by default all labels will be Private

// Constructors:-
// Constructor is method that describes how an instance is of class is constructed.
// If we do not define any Constructor explicitly, default Construtor is automatically generated to initalize the data member.

// we can define more than one Constructor
// each Constructor will differ in parameter (number and type of parameter)


// Example to understand 
class Class_Syntax
{
    public:
        // Costruct the Syntax
        // set the m_data = 0;
        Class_Syntax() // default constructor
        {
            m_data = 0;
        }

        // Construct the Syntax with parameter as input
        // set the m_data p idata
        Class_Syntax(int idata) // Parametric Constructor
        {
            m_data = idata;
        }

        // Accessor or Getter to access priavte member
        // Returns the stored value
        int GetData()
        {
            return m_data;
        }
        
        // Mutator or setter to set private member
        // modify the stored value
        void SetData(int idata)
        {
            m_data = idata;
        }

        // For Good practice, parameter name should start with 'i' or 'o' or 'io'
        // parameter start with 'i' will be input to function
        // parameter start with 'o' will be output from function
        // parameter start with 'io' will be input and its value may be modified in scope of function and stored in same parameter and work as output.
    private:
        int m_data; 
        // it is good practice the write the data member as m_Name or _Name,
        // It will help to diffrenciate between local member and data member

    protected:
        // In this section we can declare member which should be accessbile in scope of this class and its derived class.
};

