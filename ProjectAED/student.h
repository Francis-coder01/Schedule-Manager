#ifndef PROJECTAED_STUDENT_H
#define PROJECTAED_STUDENT_H
#include <string>
#include <list>
#include "class.h"

/**
 * \class Student
 * \brief This is a class for representing students.
 *
 * This class keeps track of the student's up, name and the classes they are registered in.
 * There is also various methods to handle various student actions such as adding or removing a class.
*/
class Student{
private:
    std::string student_up;
    std::string name;
    std::list<Class*> classes;
public:
    //ver coisas const
    /**
     * \brief Creates a new student.
     *
     * @param name The student's name.
     * @param studentCode The student's code.
     */
    Student(std::string name, std::string studentCode);
    /**
     * \brief Gets student's name.
     *
     * @return The student's name.
     */
    std::string get_name() const;
    /**
     * \brief Gets student's code.
     *
     * @return The student's code.
     */
    std::string get_studentCode() const;
    /**
     * \brief Gets student's enrolled classes.
     *
     * @return The student's enrolled classes.
     */
    std::list<Class*> get_classes();
    /**
     * \brief Gets the enrolled class code of the given UC.
     *
     * @param ucCode The UC of the class.
     * @return The class code of the given UC.
     */
    Class* get_class_from_uc(std::string ucCode);
    /**
     * \brief Checks if the student is enrolled in the given UC.
     *
     * @param ucCode The code of the UC to check.
     * @return True if the student is enrolled in the given UC.
     */
    bool has_uc(std::string ucCode);
    /**
     * \brief Adds a new enrolled class.
     *
     * @param c The new enrolled class to add.
     */

    void add_class(Class* c);
    /**
     * \brief Removes an enrolled class based on the UC.
     *
     * @param ucCode The UC of the enrolled class to remove.
     */
    void remove_class_from_uc(std::string ucCode); //faz sentido ser pointers?
    /**
     * \brief Prints the student's schedule.
     */
    void print_schedule();
};

#endif //PROJECTAED_STUDENT_H
