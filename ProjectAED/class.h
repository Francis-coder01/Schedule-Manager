#ifndef PROJECTAED_CLASS_H
#define PROJECTAED_CLASS_H
#include "lesson.h"
#include <set>

/**
 * \class Class
 * \brief This is a class for representing Classes.
 *
 * This class keeps track of the class code, UC code, all Lesson of the Class and all Student enrolled in it.
 */
class Class {
private:
    std::string classCode;
    std::string ucCode; 
    std::set<Lesson> lessons;
    std::set<std::string> students_up;
public:
    /**
     * \brief Creates a new Class.
     *
     * @param classCode The Class's class code.
     * @param ucCode The Class's UC code.
     */
    Class(std::string classCode, std::string ucCode);
    /**
     * \brief Gets the class code of the Class.
     *
     * @return The class code of the Class.
     */
    std::string get_classCode();
    /**
     * \brief Gets the UC code of the Class.
     *
     * @return The UC code of the Class.
     */
    std::string get_ucCode();
    /**
     * \brief Gets all Lesson of the Class.
     *
     * @return All Lesson of the Class.
     */
    std::set<Lesson> get_lessons();
    /**
     * \brief Gets all Student of the Class.
     *
     * @return All Student of the Class.
     */
    std::set<std::string> get_students();
    /**
     * \brief Adds a new Lesson to the Class.
     *
     * @param l The new Lesson to add.
     */
    void add_lesson(Lesson l);
    /**
     * \brief Adds a new Student to the Class.
     *
     * @param studentCode The new Student to add.
     */
    void add_student(std::string studentCode);
    /**
     * \brief Removes a Student from the Class.
     *
     * @param studentCode The Student to be removed.
     */
    void remove_student(std::string studentCode);
    /**
     * \brief Equal operator for Class comparison.
     *
     * @param c Class to compare.
     * @return True if this Class is equal to the Class to compare.
     */
    bool operator == (const Class& c) const;
    /**
     * \brief Less than operator for Class comparison.
     *
     * @param c Class to compare.
     * @return True if this Class Class code is less than the Class code of the Class to compare, and if equal if this Class UC code is less than the UC code of the Class to compare.
     */
    bool operator < (const Class& c) const;
};
#endif //PROJECTAED_CLASS_H
