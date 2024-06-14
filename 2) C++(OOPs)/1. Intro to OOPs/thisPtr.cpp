class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Default Constructor
    Rectangle(int length, int breadth)
    {
        this->length = length;         //"this" is a pointer to the current object that is r1
        this->breadth = breadth;       //so it's read as r1's length and r1's breadth
    }
};

int main()
{
    Rectangle r1(10, 5);
}