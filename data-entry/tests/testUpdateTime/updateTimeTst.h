#ifndef UPDATETIMETST_H
#define UPDATETIMETST_H

#include <QObject>

class updateTimeTst : public QObject
{
    Q_OBJECT

public:
    updateTimeTst();
    ~updateTimeTst();
    void wait(bool flag);

private slots:
    void testGreenGo();

private:
    bool waitFlag;

};

#endif // UPDATETIMETST_H
