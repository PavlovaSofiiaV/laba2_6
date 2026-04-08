//
// Created by User on 08.04.2026.
//

#ifndef LABA2_6_NEWPERSON_H
#define LABA2_6_NEWPERSON_H


class ILibraryUse {
    public:
    virtual void takeBook() = 0;
    virtual void returnBook() = 0;
    virtual void showStatus() = 0;

    virtual ~ILibraryUse();
};


#endif //LABA2_6_NEWPERSON_H