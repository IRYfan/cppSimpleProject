#include <string>
namespace ds
{
    class Book
    {
    private:
        std::string libId;
        std::string id;
        std::string name;
        std::string ISBN;

    public:
        void setLibId(std::string libId)
        {
            libId = libId;
        }
        void setId(std::string id)
        {
            id = id;
        }
        void setName(std::string name)
        {
            name = name;
        }
        void setISBN(std::string ISBN)
        {
            ISBN = ISBN;
        }
        std::string getLibId() { return libId; }
        std::string getId() { return id; }
        std::string getName() { return name; }
        std::string getISBN() { return ISBN; }
    };

    class Librarian
    {
    private:
        std::string libId;
        std::string id;
        std::string name;
        int age;

    public:
        std::string getLibId() { return libId; }
        std::string getId() { return Id; }
        std::string getName() { return name; }
        int getAge() { return age; }
        void setLibId(std::string libId)
        {
            libId = libId;
        }
        void setId(std::string id)
        {
            id = id;
        }
        void setName(std::string name)
        {
            name = name;
        }
        void setAge(int age)
        {
            age = age;
        }
    };

    class Tag
    {
    private:
        std::string id;
        std::string floorId;
        std::string bookId;
        std::string name;

    public:
        void setId(std::string id)
        {
            id = id;
        }
        void setFloorId(std::string floorId)
        {
            floorId = floorId;
        }
        void setBookId(std::string bookId)
        {
            bookId = bookId;
        }
        void setName(std::string name)
        {
            name = name;
        }
        std::string getId() { return id; }
        std::string getFloorId() { return floorId; }
        std::string getBookId() { return bookId; }
        std::string getName() { return name; }
    };

    class Libarary
    {
    private:
        std::string id;
        std::string name;
        std::string location;

    public:
        void setId(std::string id)
        {
            id = id;
        }
        void setName(std::string name)
        {
            name = name;
        }
        void setLocation(std::string location)
        {
            location = location;
        }
        std::string getId() { return id; }
        std::string getName() { return name; }
        std::string getLocation() { return location; }
    };

    class Floor
    {
    private:
        std::string libId;
        std::string id;
        int num;
        std::string comment;

    public:
        std::string getLibId() { return libId; }
        std::string getId() { return id; }
        int getNum() { return num; }
        std::string getComment() { return comment; }
        void setLibId(std::string libId)
        {
            libId = libId;
        }
        void setId(std::string id)
        {
            id = id;
        }
        void setNum(int num)
        {
            num = num;
        }
        void setComment(std::string comment)
        {
            comment = comment;
        }
    };

}