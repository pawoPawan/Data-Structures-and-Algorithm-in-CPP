// A pointer is something that stores the address where another object resides in memory.


// DECLARATION:-
// Object * pObj;
// The * indicates that variable is pointer. It is allowed to point at the Object.
// The value of pObj is address of the int Object that it points to.



// DYNAMIC OBJECT CREATION:-
/*
// Ways to create dynamic object using default constructor or zero-parameter constructor
Object * pObj1 = new Object(); // OK
Object * pObj2 = new Object {}; // C++ 11
Object * pObj3 = new Object; // Preferred

These are the ways to create object dynamically.
"new" returns a pointer to newly created object.


// GARBAGE COLLECTION AND "delete"

When a Obejct is allocated by "new" operator and no longer refrenced.
the "delete" operation must be applied to the Object(through a pointer).
Otherwise memory it consumes is lost(until program terminates) and known as memory leak.

If we allocate a Object as a local variable 
i.e; Object obj1;
memory of obj1 will be automatically reclaimed/destroyed/cleared when it goes out of scope.

// ASSIGNMENT & COMPARISION OF POINTERS

Assignment and comparision of pointer is based on value of pointer i.e, the memory address that it stores.

two pointers are equal if they point at the same object.

two pointers are not equal if they point to different object even if the objects being pointed at themselves are equal
as both are stored in different memory.

if LHS = RHS, are pointer variables (of compitable type), then LHS = RHS makes LHS point at the same object RHS points at.

// ACCESSING MEMBERS OF AN OBJECT THROUGH A POINTER.  
operator (->) is used to access

// ADDRESS OF OPERATOR (&) 
this operator returns the address of memory location where an object resides



*/


class CPP_Pointers
{
    public:
    explicit CPP_Pointers(int idata = 0)
    {
        m_data = idata;
    }
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
    CPP_Pointers * pObj = nullptr;
    pObj = new CPP_Pointers{0};
    pObj->SetData(5);

    delete pObj;
    return 0;
}