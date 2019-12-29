#ifndef VACUUMAGENT_H
#define VACUUMAGENT_H

/**
 * @todo write docs
 */
class VacuumAgent
{
public:
    /**
     * Default constructor
     */
    VacuumAgent();
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
    int cleanBlock();
private:
    int currentLoc;

};

#endif // VACUUMAGENT_H
